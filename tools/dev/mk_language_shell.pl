#! perl
# Copyright (C) 2007-2008, Parrot Foundation.
# $Id$

=head1 NAME

tools/dev/mk_language_shell.pl -- create initial files for a new language

=head1 SYNOPSIS

 % perl tools/dev/mk_language_shell.pl [options] Xyz [path]

option:

 --with-doc
 --with-ops
 --with-pmc

=head1 DESCRIPTION

This script populates a directory with files for building a
new language translator in Parrot.  The first argument is the
name of the language to be built.  The C<path> argument
says where to populate the directory, if no C<path> is specified
then it is taken to be a subdirectory of the current directory
with the same name as the language (converted to lowercase).

For a language 'Xyz', this script will create the following
files and directories (relative to C<path>, which defaults
to F<xyz> if an explicit C<path> isn't given):

    Makefile.in
    README
    Configure.pir
    xyz.pir
    doc/running.pod
    doc/Xyz.pod
    dynext/.ignore
    src/builtins.pir
    src/builtins/say.pir
    src/parser/grammar.pg
    src/parser/grammar-oper.pg
    src/parser/actions.pm
    src/pmc/Makefile.in
    src/pmc/xyz.pmc
    src/ops/Makefile.in
    src/ops/xyz.ops
    src/xyz.pir
    t/harness
    t/00-sanity.t
    xyz/.ignore

Any files that already exist are skipped, so this script can
be used to repopulate a language directory with omitted files.

If all goes well, after creating the language shell one can simply
change to the language directory and type

    $ parrot Configure.pir
    $ make
    $ make test

or

    $ parrot setup.pir
    $ parrot setup.pir test

to verify that the new language compiles and configures properly.

=cut

use strict;
use warnings;
use File::Path;
use File::Spec;
use Getopt::Long;
use FindBin qw($Bin);
use lib "$Bin/../lib";    # install location
use lib "$Bin/../../lib"; # build location
use Parrot::Config qw/ %PConfig /;

my ($with_doc, $with_ops, $with_pmc);
GetOptions(
    'with-doc' => \$with_doc,
    'with-ops' => \$with_ops,
    'with-pmc' => \$with_pmc,
);

unless (@ARGV) {
    die "usage: $0 language [path]\n";
}

##  determine the language we're trying to build
my $lang = $ARGV[0];
my $lclang = lc $lang;
my $uclang = uc $lang;

## the name and revision of the script, for use in the generated README
my $script = $0;
my $rev = '$Revision$';
$rev =~ s/^\D*(\d+)\D*$/$1/;

my $no_doc = $with_doc ? '' : '#';
my $no_ops = $with_ops ? '' : '#';
my $no_pmc = $with_pmc ? '' : '#';

##  get the path from the command line, or if not supplied then
##  use $lclang.
my $path = $ARGV[1] ||
           "$lclang";

##  now loop through the file information (see below), substituting
##  any instances of @lang@, @lclang@, @UCLANG@, and @Id@ with
##  the language name or the svn id tag.  If the line has the form
##  __filepath__, then start a new file.
my $fh;
while (<DATA>) {
    last if /^__DATA__$/;
    s{\@lang\@}   {$lang}g;
    s{\@lclang\@} {$lclang}ig;
    s{\@UCLANG\@} {$uclang}ig;
    s{\@Id\@}     {\$Id\$}ig;
    s{\@script\@} {$script}ig;
    s{\@rev\@}    {$rev}ig;
    s{\@no_doc\@} {$no_doc}ig;
    s{\@no_ops\@} {$no_ops}ig;
    s{\@no_pmc\@} {$no_pmc}ig;
    s{\@rev\@}    {$rev}ig;
    if (/^__(.*)__$/) { start_new_file("$path$PConfig{slash}$1"); }
    elsif ($fh) { print $fh $_; }
}
##  close the last file
close($fh) if $fh;

##  we're done
1;


##  this function closes any previous opened file, and determines
##  if we're creating a new file.  It also calls C<mkpath> to
##  create any needed parent subdirectories.
sub start_new_file {
    my ($filepath) = @_;
    if ($fh) {
        close $fh;
        undef $fh;
    }
    if (-e $filepath) {
        print "skipping $filepath\n";
        return;
    }
    if (!$with_doc and $filepath =~ /doc/) {
        print "no doc: skipping $filepath\n";
        return;
    }
    if (!$with_ops and $filepath =~ /ops/) {
        print "no ops: skipping $filepath\n";
        return;
    }
    if (!$with_pmc and $filepath =~ /pmc/) {
        print "no pmc: skipping $filepath\n";
        return;
    }
    if (!$with_ops and!$with_pmc and $filepath =~ /dynext/) {
        print "no dynext: skipping $filepath\n";
        return;
    }
    my ($volume, $dir, $base) = File::Spec->splitpath($filepath);
    my $filedir = File::Spec->catpath($volume, $dir);
    unless (-d $filedir) {
        print "creating $filedir\n";
        mkpath( [ $filedir ], 0, 0777 );
    }
    print "creating $filepath\n";
    open $fh, '>', $filepath;
}



###  The section below contains the text of the files to be created.
###  The name of the file to be created is given as C<__filepath__>,
###  and all subsequent lines up to the next C<__filepath__> are
###  placed in the file (performing substitutions on @lang@, @lclang@,
###  @UCLANG@, and @Id@ as appropriate).

__DATA__
__README__
Language '@lang@' was created with @script@, r@rev@.

See doc/@lang@.pod for the documentation, and
doc/running.pod for the command-line options.

__Configure.pir__
#! /usr/local/bin/parrot
# @Id@

.include 'sysinfo.pasm'
.include 'iglobals.pasm'

.sub 'main' :main
    load_bytecode 'Configure.pbc'

    # Wave to the friendly users
    print "Hello, I'm Configure. My job is to poke and prod\n"
    print "your system to figure out how to build @lang@.\n"

    .local pmc config
    $P0 = getinterp
    config = $P0[.IGLOBALS_CONFIG_HASH]
    .local string OS
    OS = sysinfo .SYSINFO_PARROT_OS

    # Here, do the job
    push_eh _handler
    genfile('Makefile.in', 'Makefile', config)
@no_ops@    genfile('src/ops/Makefile.in', 'src/ops/Makefile', config)
@no_pmc@    genfile('src/pmc/Makefile.in', 'src/pmc/Makefile', config)
    pop_eh

    # Give the user a hint of next action
    .local string make
    make = config['make']
    print "Configure completed for platform '"
    print OS
    print "'.\n"
    print "You can now type '"
    print make
    print "' to build @lclang@.\n"
    print "You may also type '"
    print make
    print " test' to run the @lclang@ test suite.\n"
    print "\nHappy Hacking.\n"
    end

  _handler:
    .local pmc e
    .local string msg
    .get_results (e)
    printerr "\n"
    msg = e
    printerr msg
    printerr "\n"
    end
.end

# Local Variables:
#   mode: pir
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4 ft=pir:

__setup.pir__
#! /usr/local/bin/parrot
# @Id@

=head1 NAME

setup.pir - Python distutils style

=head1 DESCRIPTION

No Configure step, no Makefile generated.

=head1 USAGE

    $ parrot setup.pir build
    $ parrot setup.pir test
    $ sudo parrot setup.pir install

=cut

.sub 'main' :main
    .param pmc args
    $S0 = shift args
    load_bytecode 'distutils.pbc'

    # build
    $P0 = new 'Hash'
@no_ops@    $P1 = new 'Hash'
@no_ops@    $P1['xyz_ops'] = 'src/ops/xyz.ops'
@no_ops@    $P0['dynops'] = $P1

@no_pmc@    $P2 = new 'Hash'
@no_pmc@    $P3 = split ' ', 'src/pmc/xyz.pmc'
@no_pmc@    $P2['xyz_group'] = $P3
@no_pmc@    $P0['dynpmc'] = $P2

    $P4 = new 'Hash'
    $P5 = split ' ', 'src/parser/grammar.pg src/parser/grammar-oper.pg'
    $P4['src/gen_grammar.pir'] = $P5
    $P0['pir_pge'] = $P4

    $P6 = new 'Hash'
    $P6['src/gen_actions.pir'] = 'src/parser/actions.pm'
    $P0['pir_nqp'] = $P6

    $P7 = new 'Hash'
    $P8 = split "\n", <<'SOURCES'
src/xyz.pir
src/gen_grammar.pir
src/gen_actions.pir
src/builtins.pir
src/builtins/say.pir
SOURCES
    $S0 = pop $P8
    $P7['xyz/xyz.pbc'] = $P8
    $P7['xyz.pbc'] = 'xyz.pir'
    $P0['pbc_pir'] = $P7

    $P9 = new 'Hash'
    $P9['parrot-xyz'] = 'xyz.pbc'
    $P0['installable_pbc'] = $P9

    # install
    $P0['inst_lang'] = 'xyz/xyz.pbc'

    .tailcall setup(args :flat, $P0 :flat :named)
.end


# Local Variables:
#   mode: pir
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4 ft=pir:

__PARROT_REVISION__
@rev@
__src/ops/Makefile.in__
## @Id@

# values from parrot_config
VERSION_DIR   := @versiondir@
INCLUDE_DIR   := @includedir@$(VERSION_DIR)
LIB_DIR       := @libdir@$(VERSION_DIR)
STAGING_DIR   := ../../dynext
#INSTALL_DIR   := $(LIB_DIR)/languages/@lclang@/dynext
INSTALL_DIR   := $(LIB_DIR)/dynext

# Set up extensions
LOAD_EXT      := @load_ext@
O             := @o@

# Setup some commands
PERL          := @perl@
RM_F          := @rm_f@
MKPATH        := @mkpath@
CHMOD         := @chmod@
CP            := @cp@
CC            := @cc@ -c
LD            := @ld@
LDFLAGS       := @ldflags@ @ld_debug@ @rpath_blib@ @linkflags@
LD_LOAD_FLAGS := @ld_load_flags@
CFLAGS        := @ccflags@ @cc_shared@ @cc_debug@ @ccwarn@ @cc_hasjit@ @cg_flag@ @gc_flag@
CC_OUT        := @cc_o_out@
LD_OUT        := @ld_out@
LIBPARROT     := @inst_libparrot_ldflags@
PARROT        := $(BIN_DIR)/parrot@exe@

OPS2C           := $(PERL) $(LIB_DIR)/tools/build/ops2c.pl

INCLUDES        := -I$(INCLUDE_DIR) -I$(INCLUDE_DIR)/pmc
LINKARGS        := $(LDFLAGS) $(LD_LOAD_FLAGS) $(LIBPARROT)

OPS_FILE := @lclang@.ops

CLEANUPS := \
  "*$(LOAD_EXT)" \
  "*$(O)" \
  "*.c" \
  "*.h" \
  "$(STAGING_DIR)/@lclang@_ops*$(LOAD_EXT)"


all: staging

generate: $(OPS_FILE)
	$(OPS2C) C --dynamic $(OPS_FILE)
	$(OPS2C) CSwitch --dynamic $(OPS_FILE)
#IF(cg_flag):	$(OPS2C) CGoto --dynamic $(OPS_FILE)
#IF(cg_flag):	$(OPS2C) CGP --dynamic $(OPS_FILE)

compile: generate
	$(CC) $(CC_OUT)@lclang@_ops$(O) $(INCLUDES) $(CFLAGS) @lclang@_ops.c
	$(CC) $(CC_OUT)@lclang@_ops_switch$(O) $(INCLUDES) $(CFLAGS) @lclang@_ops_switch.c
#IF(cg_flag):	$(CC) $(CC_OUT)@lclang@_ops_cg$(O) $(INCLUDES) $(CFLAGS) @lclang@_ops_cg.c
#IF(cg_flag):	$(CC) $(CC_OUT)@lclang@_ops_cgp$(O) $(INCLUDES) $(CFLAGS) @lclang@_ops_cgp.c

linklibs: compile
	$(LD) $(LD_OUT)@lclang@_ops$(LOAD_EXT) @lclang@_ops$(O) $(LINKARGS)
	$(LD) $(LD_OUT)@lclang@_ops_switch$(LOAD_EXT) @lclang@_ops_switch$(O) $(LINKARGS)
#IF(cg_flag):	$(LD) $(LD_OUT)@lclang@_ops_cg$(LOAD_EXT) @lclang@_ops_cg$(O) $(LINKARGS)
#IF(cg_flag):	$(LD) $(LD_OUT)@lclang@_ops_cgp$(LOAD_EXT) @lclang@_ops_cgp$(O) $(LINKARGS)

staging: linklibs
#IF(cygwin or hpux):	CHMOD 0775 "*$(LOAD_EXT)"
	$(CP) "*$(LOAD_EXT)" $(STAGING_DIR)

install:
#IF(cygwin or hpux):	CHMOD 0775 "*$(LOAD_EXT)"
	$(MKPATH) $(INSTALL_DIR)
	$(CP) "*$(LOAD_EXT)" $(INSTALL_DIR)

uninstall:
	$(RM_F) "$(INSTALL_DIR)/@lclang@_ops*$(LOAD_EXT)"

Makefile: Makefile.in
	cd ../.. && $(PARROT) Configure.pir

clean:
	$(RM_F) $(CLEANUPS)

realclean:
	$(RM_F) $(CLEANUPS) Makefile

# Local variables:
#   mode: makefile
# End:
# vim: ft=make:

__src/pmc/Makefile.in__
## @Id@

# values from parrot_config
VERSION_DIR   := @versiondir@
INCLUDE_DIR   := @includedir@$(VERSION_DIR)
LIB_DIR       := @libdir@$(VERSION_DIR)
SRC_DIR       := @srcdir@$(VERSION_DIR)
TOOLS_DIR     := @libdir@$(VERSION_DIR)/tools/lib
STAGING_DIR   := ../../dynext
#INSTALL_DIR   := $(LIB_DIR)/languages/@lclang@/dynext
INSTALL_DIR   := $(LIB_DIR)/dynext

# Set up extensions
LOAD_EXT      := @load_ext@
O             := @o@

# Setup some commands
PERL          := @perl@
RM_F          := @rm_f@
MKPATH        := @mkpath@
CHMOD         := @chmod@
CP            := @cp@
CC            := @cc@ -c
LD            := @ld@
LDFLAGS       := @ldflags@ @ld_debug@
LD_LOAD_FLAGS := @ld_load_flags@
CFLAGS        := @ccflags@ @cc_shared@ @cc_debug@ @ccwarn@ @cc_hasjit@ @cg_flag@ @gc_flag@
CC_OUT        := @cc_o_out@
LD_OUT        := @ld_out@
LIBPARROT     := @inst_libparrot_ldflags@
PARROT        := $(BIN_DIR)/parrot@exe@

PMC2C_INCLUDES  := --include $(SRC_DIR) --include $(SRC_DIR)/pmc
PMC2C           := $(PERL) $(LIB_DIR)/tools/build/pmc2c.pl
PMC2CD          := $(PMC2C) --dump $(PMC2C_INCLUDES)
PMC2CC          := $(PMC2C) --c $(PMC2C_INCLUDES)

INCLUDES        := -I$(INCLUDE_DIR) -I$(INCLUDE_DIR)/pmc
LINKARGS        := $(LDFLAGS) $(LD_LOAD_FLAGS) $(LIBPARROT)

@uclang@_GROUP := @lclang@_group

PMC_SOURCES := \
  @lclang@.pmc

OBJS := \
  lib-$(@uclang@_GROUP)$(O) \
  @lclang@$(O)

CLEANUPS := \
  "*$(LOAD_EXT)" \
  "*$(O)" \
  "*.c" \
  "*.h" \
  "*.dump" \
#IF(win32):  "*.exp" \
#IF(win32):  "*.ilk" \
#IF(win32):  "*.manifext" \
#IF(win32):  "*.pdb" \
#IF(win32):  "*.lib" \
  $(STAGING_DIR)/$(@uclang@_GROUP)$(LOAD_EXT)


all: staging

generate: $(PMC_SOURCES)
	$(PMC2CD) @lclang@.pmc
	$(PMC2CC) @lclang@.pmc
	$(PMC2C) --library $(@uclang@_GROUP) --c $(PMC_SOURCES)

compile: generate
	$(CC) $(CC_OUT)@lclang@$(O) $(INCLUDES) $(CFLAGS) @lclang@.c
	$(CC) $(CC_OUT)lib-$(@uclang@_GROUP)$(O) $(INCLUDES) $(CFLAGS) $(@uclang@_GROUP).c

linklibs: compile
	$(LD) $(LD_OUT)$(@uclang@_GROUP)$(LOAD_EXT) $(OBJS) $(LINKARGS)

staging: linklibs
#IF(cygwin or hpux):	CHMOD 0775 "*$(LOAD_EXT)"
	$(CP) "*$(LOAD_EXT)" $(STAGING_DIR)

install:
#IF(cygwin or hpux):	CHMOD 0775 "*$(LOAD_EXT)"
	$(MKPATH) $(INSTALL_DIR)
	$(CP) "*$(LOAD_EXT)" $(INSTALL_DIR)

uninstall:
	$(RM_F) $(INSTALL_DIR)/$(@uclang@_GROUP)$(LOAD_EXT)

Makefile: Makefile.in
	cd ../.. && $(PARROT) Configure.pir

clean:
	$(RM_F) $(CLEANUPS)

realclean:
	$(RM_F) $(CLEANUPS) Makefile

# Local variables:
#   mode: makefile
# End:
# vim: ft=make:

__Makefile.in__
## @Id@

## arguments we want to run parrot with
PARROT_ARGS   :=

## configuration settings
VERSION       := @versiondir@
BIN_DIR       := @bindir@
LIB_DIR       := @libdir@$(VERSION)
DOC_DIR       := @docdir@$(VERSION)
MANDIR        := @mandir@$(VERSION)

# Set up extensions
LOAD_EXT      := @load_ext@
O             := @o@

# Various paths
PERL6GRAMMAR  := $(LIB_DIR)/library/PGE/Perl6Grammar.pbc
NQP           := $(LIB_DIR)/languages/nqp/nqp.pbc
PCT           := $(LIB_DIR)/library/PCT.pbc
PMC_DIR       := src/pmc
OPS_DIR       := src/ops

## Setup some commands
MAKE          := @make_c@
PERL          := @perl@
CAT           := @cat@
CHMOD         := @chmod@
CP            := @cp@
MKPATH        := @mkpath@
RM_F          := @rm_f@
RM_RF         := @rm_rf@
POD2MAN       := pod2man
PARROT        := $(BIN_DIR)/parrot@exe@
PBC_TO_EXE    := $(BIN_DIR)/pbc_to_exe@exe@
#IF(darwin):
#IF(darwin):# MACOSX_DEPLOYMENT_TARGET must be defined for OS X compilation/linking
#IF(darwin):export MACOSX_DEPLOYMENT_TARGET := @osx_version@

@UCLANG@_GROUP := $(PMC_DIR)/@lclang@_group$(LOAD_EXT)
@UCLANG@_OPS := $(OPS_DIR)/@lclang@_ops$(LOAD_EXT)

@no_pmc@PMC_DEPS := src/pmc/Makefile.in $(PMC_DIR)/@lclang@.pmc
@no_ops@OPS_DEPS := src/ops/Makefile.in $(OPS_DIR)/@lclang@.ops

SOURCES := \
  src/@lclang@.pir \
  src/gen_grammar.pir \
  src/gen_actions.pir \
  src/builtins.pir \
  src/builtins/say.pir

DOCS := README

BUILD_CLEANUPS := \
  @lclang@.pbc \
  @lclang@/@lclang@.pbc \
  "src/gen_*.pir" \
  "*.c" \
  "*$(O)" \
#IF(win32):  parrot-@lclang@.exe \
#IF(win32):  parrot-@lclang@.iss \
#IF(win32):  "setup-parrot-*.exe" \
  installable_@lclang@@exe@

TEST_CLEANUPS :=

# the default target
build: \
  $(@UCLANG@_OPS) \
  $(@UCLANG@_GROUP) \
  @lclang@/@lclang@.pbc \
  @lclang@.pbc

all: build installable

@lclang@.pbc: @lclang@.pir
	$(PARROT) $(PARROT_ARGS) -o @lclang@.pbc @lclang@.pir

@lclang@/@lclang@.pbc: $(SOURCES)
	$(PARROT) $(PARROT_ARGS) -o @lclang@/@lclang@.pbc src/@lclang@.pir

src/gen_grammar.pir: $(PERL6GRAMMAR) src/parser/grammar.pg src/parser/grammar-oper.pg
	$(PARROT) $(PARROT_ARGS) $(PERL6GRAMMAR) \
	    --output=src/gen_grammar.pir \
	    src/parser/grammar.pg \
	    src/parser/grammar-oper.pg

src/gen_actions.pir: $(NQP) src/parser/actions.pm
	$(PARROT) $(PARROT_ARGS) $(NQP) --output=src/gen_actions.pir \
	    --target=pir src/parser/actions.pm

$(@UCLANG@_GROUP): $(PMC_DEPS)
@no_pmc@	$(MAKE) $(PMC_DIR)

$(@UCLANG@_OPS): $(OPS_DEPS)
@no_ops@	$(MAKE) $(OPS_DIR)

installable: installable_@lclang@@exe@

installable_@lclang@@exe@: @lclang@.pbc
	$(PBC_TO_EXE) @lclang@.pbc --install

Makefile: Makefile.in
	$(PARROT) Configure.pir

# This is a listing of all targets, that are meant to be called by users
help:
	@echo ""
	@echo "Following targets are available for the user:"
	@echo ""
	@echo "  build:             @lclang@.pbc"
	@echo "                     This is the default."
	@echo "  @lclang@@exe@      Self-hosting binary not to be installed."
	@echo "  all:               @lclang@.pbc @lclang@@exe@ installable"
	@echo "  installable:       Create libs and self-hosting binaries to be installed."
	@echo "  install:           Install the installable targets and docs."
	@echo ""
	@echo "Testing:"
	@echo "  test:              Run the test suite."
	@echo "  test-installable:  Test self-hosting targets."
	@echo "  testclean:         Clean up test results."
	@echo ""
	@echo "Cleaning:"
	@echo "  clean:             Basic cleaning up."
	@echo "  realclean:         Removes also files generated by 'Configure.pl'"
	@echo "  distclean:         Removes also anything built, in theory"
	@echo ""
	@echo "Misc:"
	@echo "  help:              Print this help message."
	@echo ""

test: build
	$(PERL) -I$(LIB_DIR)/tools/lib t/harness --bindir=$(BIN_DIR)

# basic run for missing libs
test-installable: installable
	echo "1" | ./installable_@lclang@@exe@

install: installable
@no_ops@	$(MAKE) $(OPS_DIR) install
@no_pmc@	$(MAKE) $(PMC_DIR) install
	$(CP) installable_@lclang@@exe@ $(BIN_DIR)/parrot-@lclang@@exe@
	$(CHMOD) 0755 $(BIN_DIR)/parrot-@lclang@@exe@
	-$(MKPATH) $(LIB_DIR)/languages/@lclang@
	$(CP) @lclang@/@lclang@.pbc $(LIB_DIR)/languages/@lclang@/@lclang@.pbc
@no_doc@	-$(MKPATH) $(MANDIR)/man1
@no_doc@	$(POD2MAN) doc/running.pod > $(MANDIR)/man1/parrot-@lclang@.1
@no_doc@	-$(MKPATH) $(DOC_DIR)/languages/@lclang@
@no_doc@	$(CP) $(DOCS) $(DOC_DIR)/languages/@lclang@

uninstall:
@no_ops@	$(MAKE) $(OPS_DIR) uninstall
@no_pmc@	$(MAKE) $(PMC_DIR) uninstall
	$(RM_F) $(BIN_DIR)/parrot-@lclang@@exe@
	$(RM_RF) $(LIB_DIR)/languages/@lclang@
@no_doc@	$(RM_F) $(MANDIR)/man1/parrot-@lclang@.1
@no_doc@	$(RM_RF) $(DOC_DIR)/languages/@lclang@

win32-inno-installer: installable
@no_doc@	-$(MKPATH) man/man1
@no_doc@	$(POD2MAN) doc/running.pod > man/man1/parrot-@lclang@.1
@no_doc@	-$(MKPATH) man/html
@no_doc@	pod2html --infile doc/running.pod --outfile man/html/parrot-@lclang@.html
	$(CP) installable_@lclang@@exe@ parrot-@lclang@.exe
	$(PERL) -I$(LIB_DIR)/tools/lib $(LIB_DIR)/tools/dev/mk_inno_language.pl @lclang@
	iscc parrot-@lclang@.iss

testclean:
	$(RM_F) $(TEST_CLEANUPS)

clean:
@no_ops@	$(MAKE) $(OPS_DIR) clean
@no_pmc@	$(MAKE) $(PMC_DIR) clean
	$(RM_F) $(TEST_CLEANUPS) $(BUILD_CLEANUPS)

realclean:
@no_ops@	$(MAKE) $(OPS_DIR) realclean
@no_pmc@	$(MAKE) $(PMC_DIR) realclean
	$(RM_F) $(TEST_CLEANUPS) $(BUILD_CLEANUPS) Makefile

distclean: realclean

# Local variables:
#   mode: makefile
# End:
# vim: ft=make:

__doc/@lang@.pod__
# @Id@

=head1 @lang@

=head1 Design

=head1 SEE ALSO

=cut

# Local Variables:
#   fill-column:78
# End:
# vim: expandtab shiftwidth=4:
__doc/running.pod__
# @Id@

=head1 Running

This document describes how to use the command line @lclang@ program, which
...

=head2 Usage

  parrot @lclang@.pbc [OPTIONS] <input>

or

  parrot-@lclang@@exe [OPTIONS] <input>

A number of additional options are available:

  -q  Quiet mode; suppress output of summary at the end.

=cut

# Local Variables:
#   fill-column:78
# End:
# vim: expandtab shiftwidth=4:

__dynext/.ignore__

__@lclang@/.ignore__

__@lclang@.pir__
# @Id@

=head1 TITLE

@lclang@.pir - A @lang@ compiler.

=head2 Description

This is the entry point for the @lang@ compiler.

=head2 Functions

=over 4

=item main(args :slurpy)  :main

Start compilation by passing any command line C<args>
to the @lang@ compiler.

=cut

.sub 'main' :main
    .param pmc args

    load_language '@lclang@'

    $P0 = compreg '@lang@'
    $P1 = $P0.'command_line'(args)
.end

=back

=cut

# Local Variables:
#   mode: pir
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4 ft=pir:

__src/@lclang@.pir__
# @Id@

=head1 TITLE

@lclang@.pir - A @lang@ compiler.

=head2 Description

This is the base file for the @lang@ compiler.

This file includes the parsing and grammar rules from
the src/ directory, loads the relevant PGE libraries,
and registers the compiler under the name '@lang@'.

=head2 Functions

=over 4

=item onload()

Creates the @lang@ compiler using a C<PCT::HLLCompiler>
object.

=cut

.namespace [ '@lang@::Compiler' ]

@no_pmc@.loadlib '@lclang@_group'

.sub 'onload' :anon :load :init
    load_bytecode 'PCT.pbc'

    $P0 = get_hll_global ['PCT'], 'HLLCompiler'
    $P1 = $P0.'new'()
    $P1.'language'('@lang@')
    $P1.'parsegrammar'('@lang@::Grammar')
    $P1.'parseactions'('@lang@::Grammar::Actions')
.end

.include 'src/builtins.pir'
.include 'src/gen_grammar.pir'
.include 'src/gen_actions.pir'

=back

=cut

# Local Variables:
#   mode: pir
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4 ft=pir:

__src/parser/grammar.pg__
# @Id@

=begin overview

This is the grammar for @lang@ written as a sequence of Perl 6 rules.

=end overview

grammar @lang@::Grammar is PCT::Grammar;

rule TOP {
    <statement>*
    [ $ || <panic: 'Syntax error'> ]
    {*}
}

##  this <ws> rule treats # as "comment to eol"
##  you may want to replace it with something appropriate
token ws {
    <!ww>
    [ '#' \N* \n? | \s+ ]*
}

rule statement {
    'say' <expression> [ ',' <expression> ]* ';'
    {*}
}

rule value {
    | <integer> {*}                              #= integer
    | <quote> {*}                                #= quote
}

token integer { \d+ {*} }

token quote {
    [ \' <string_literal: '\'' > \' | \" <string_literal: '"' > \" ]
    {*}
}

##  terms
token term {
    | <value> {*}                                #= value
}

rule expression is optable { ... }

__src/parser/grammar-oper.pg__
# @Id@

##  expressions and operators
proto 'term:'     is precedence('=')     is parsed(&term)      { ... }

## multiplicative operators
proto infix:<*>   is looser(term:)       is pirop('mul')     { ... }
proto infix:</>   is equiv(infix:<*>)    is pirop('div')     { ... }

## additive operators
proto infix:<+>   is looser(infix:<*>)   is pirop('add')     { ... }
proto infix:<->   is equiv(infix:<+>)    is pirop('sub')     { ... }

__src/parser/actions.pm__
# @Id@

=begin comments

@lang@::Grammar::Actions - ast transformations for @lang@

This file contains the methods that are used by the parse grammar
to build the PAST representation of an @lang@ program.
Each method below corresponds to a rule in F<src/parser/grammar.pg>,
and is invoked at the point where C<{*}> appears in the rule,
with the current match object as the first argument.  If the
line containing C<{*}> also has a C<#= key> comment, then the
value of the comment is passed as the second argument to the method.

=end comments

class @lang@::Grammar::Actions;

method TOP($/) {
    my $past := PAST::Block.new( :blocktype('declaration'), :node( $/ ) );
    for $<statement> {
        $past.push( $( $_ ) );
    }
    make $past;
}


method statement($/) {
    my $past := PAST::Op.new( :name('say'), :pasttype('call'), :node( $/ ) );
    for $<expression> {
        $past.push( $( $_ ) );
    }
    make $past;
}

##  expression:
##    This is one of the more complex transformations, because
##    our grammar is using the operator precedence parser here.
##    As each node in the expression tree is reduced by the
##    parser, it invokes this method with the operator node as
##    the match object and a $key of 'reduce'.  We then build
##    a PAST::Op node using the information provided by the
##    operator node.  (Any traits for the node are held in $<top>.)
##    Finally, when the entire expression is parsed, this method
##    is invoked with the expression in $<expr> and a $key of 'end'.
method expression($/, $key) {
    if ($key eq 'end') {
        make $($<expr>);
    }
    else {
        my $past := PAST::Op.new( :name($<type>),
                                  :pasttype($<top><pasttype>),
                                  :pirop($<top><pirop>),
                                  :lvalue($<top><lvalue>),
                                  :node($/)
                                );
        for @($/) {
            $past.push( $($_) );
        }
        make $past;
    }
}


##  term:
##    Like 'statement' above, the $key has been set to let us know
##    which term subrule was matched.
method term($/, $key) {
    make $( $/{$key} );
}


method value($/, $key) {
    make $( $/{$key} );
}


method integer($/) {
    make PAST::Val.new( :value( ~$/ ), :returns('Integer'), :node($/) );
}


method quote($/) {
    make PAST::Val.new( :value( $($<string_literal>) ), :node($/) );
}


# Local Variables:
#   mode: cperl
#   cperl-indent-level: 4
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4:

__src/pmc/@lclang@.pmc__
/*
Copyright (C) 20xx, Parrot Foundation.
@Id@

=head1 NAME

src/pmc/@lang@.pmc - @lang@

=head1 DESCRIPTION

These are the vtable functions for the @lang@ class.

=cut

=head2 Helper functions

=over 4

=item INTVAL size(INTERP, PMC, PMC)

*/

#include "parrot/parrot.h"

static INTVAL
size(Interp *interp, PMC* self, PMC* obj)
{
    INTVAL retval;
    INTVAL dimension;
    INTVAL length;
    INTVAL pos;

    if (!obj || PMC_IS_NULL(obj)) {
        /* not set, so a simple 1D */
        return VTABLE_get_integer(interp, self);
    }

    retval = 1;
    dimension = VTABLE_get_integer(interp, obj);
    for (pos = 0; pos < dimension; pos++)
    {
        length = VTABLE_get_integer_keyed_int(interp, obj, pos);
        retval *= length;
    }
    return retval;
}

/*

=back

=head2 Methods

=over 4

=cut

*/

pmclass @lang@
    extends ResizablePMCArray
    provides array
    group   @lclang@_group

    dynpmc
    {
/*

=item C<void class_init()>

initialize the pmc class. Store some constants, etc.

=cut

*/

    /* RT#48194: move any constant string declarations here so we just do them once. */
    void class_init() {
    }


/*

=item C<PMC* init()>

initialize the instance.

=cut

*/

void init() {
    SUPER();
};

=item C<PMC* get()>

Returns a vector-like PMC.

=cut

*/

    METHOD PMC* get() {
        PMC* property;
        INTVAL array_t;
        STRING* property_name;

        property_name = string_from_literal(INTERP, "property");
        shape = VTABLE_getprop(INTERP, SELF, property_name);
        if (PMC_IS_NULL(property)) {
           /*
            * No property has been set yet. This means that we are
            * a simple vector
            *
            * we use our own type here. Perhaps a better way to
            * specify it?
            */
            /*
            array_t = pmc_type(INTERP,
                string_from_literal(INTERP, "@lang@"));
            */
            property = pmc_new(INTERP, VTABLE_type(INTERP, SELF));

            VTABLE_set_integer_native(INTERP, property, 1);
            VTABLE_set_integer_keyed_int(INTERP, property, 0,
                VTABLE_get_integer(INTERP, SELF));
            VTABLE_setprop(INTERP, SELF, property_name, property);
        }
        RETURN(PMC* property);
    }

/*

=item C<PMC* set()>

Change the existing @lang@ by passing in an existing vector.

If the new property is larger than our old property, pad the end of the vector
with elements from the beginning.

If the new property is shorter than our old property, truncate elements from
the end of the vector.

=cut

*/

    METHOD set(PMC *new_property) {
        STRING* property_name;
        PMC*    old_property;
        INTVAL  old_size, new_size, pos;

        /* save the old property momentarily, set the new property */
        property_name = string_from_literal(INTERP, "property");
        old_property = VTABLE_getprop(INTERP, SELF, property_name);
        VTABLE_setprop(INTERP, SELF, property_name, new_property);

        /* how big are these property? */
        old_size = size(INTERP, SELF, old_property);
        new_size = size(INTERP, SELF, new_property);

        if (old_size > new_size) {
            for (; new_size != old_size; new_size++) {
                VTABLE_pop_pmc(INTERP, SELF);
            }
        } else if (new_size > old_size) {
            pos = 0;
            for (; new_size != old_size; old_size++, pos++) {
                /* RT#48196 clone this? */
                VTABLE_push_pmc(INTERP, SELF,
                    VTABLE_get_pmc_keyed_int(INTERP, SELF, pos));
            }
        }
    }

/*

=back

=cut

*/

}

/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4:
 */
__src/ops/@lclang@.ops__
/*
 * @id@
 * Copyright (C) 20xx, Parrot Foundation.
 */

BEGIN_OPS_PREAMBLE

#include "parrot/dynext.h"

END_OPS_PREAMBLE

/* Op to get the address of a PMC. */
inline op @lclang@_pmc_addr(out INT, invar PMC) :base_core {
    $1 = (int) $2;
    goto NEXT();
}

/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4:
 */
__src/builtins.pir__
# @Id@

.include 'src/builtins/say.pir'

# Local Variables:
#   mode: pir
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4 ft=pir:

__src/builtins/say.pir__
# @Id@

=head1

say.pir -- simple implementation of a say function

=cut

.namespace []

.sub 'say'
    .param pmc args            :slurpy
    .local pmc it
    it = iter args
  iter_loop:
    unless it goto iter_end
    $P0 = shift it
    print $P0
    goto iter_loop
  iter_end:
    print "\n"
    .return ()
.end


# Local Variables:
#   mode: pir
#   fill-column: 100
# End:
# vim: expandtab shiftwidth=4 ft=pir:

__t/harness__
#! perl

# @Id@

# pragmata
use strict;
use warnings;
use Getopt::Long;
use 5.008;

our %harness_args = (
    language  => '@lang@',
    verbosity => 0,
);

GetOptions(
        'verbosity=i'       => \$harness_args{verbosity},
        'bindir=s'          => \my $bindir,
        # A sensible default is num_cores + 1.
        # Many people have two cores these days.
        'jobs:3'            => \$harness_args{jobs},
);

if ($bindir) {
    $harness_args{exec} = [$bindir.'/parrot', '@lclang@.pbc'];
}
else {
    $harness_args{compiler} = '@lclang@.pbc';
}

eval 'use Parrot::Test::Harness %harness_args';

__t/00-sanity.t__
# This just checks that the basic parsing and call to builtin say() works.
say '1..4';
say 'ok 1';
say 'ok ', 2;
say 'ok ', 2 + 1;
say 'ok', ' ', 4;
__DATA__


# Local Variables:
# mode: cperl
# cperl-indent-level: 4
# fill-column: 100
# End:
# vim: expandtab shiftwidth=4:

