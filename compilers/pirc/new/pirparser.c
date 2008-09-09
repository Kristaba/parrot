/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_NL = 258,
     TK_HLL = 259,
     TK_HLL_MAP = 260,
     TK_LOADLIB = 261,
     TK_SUB = 262,
     TK_END = 263,
     TK_PARAM = 264,
     TK_LEX = 265,
     TK_LOCAL = 266,
     TK_NAMESPACE = 267,
     TK_INVOCANT = 268,
     TK_METH_CALL = 269,
     TK_GLOBALCONST = 270,
     TK_CONST = 271,
     TK_RETURN = 272,
     TK_YIELD = 273,
     TK_SET_YIELD = 274,
     TK_SET_RETURN = 275,
     TK_BEGIN_YIELD = 276,
     TK_END_YIELD = 277,
     TK_BEGIN_RETURN = 278,
     TK_END_RETURN = 279,
     TK_BEGIN_CALL = 280,
     TK_END_CALL = 281,
     TK_GET_RESULTS = 282,
     TK_CALL = 283,
     TK_SET_ARG = 284,
     TK_GET_RESULT = 285,
     TK_NCI_CALL = 286,
     TK_TAILCALL = 287,
     TK_LABEL = 288,
     TK_IDENT = 289,
     TK_INT = 290,
     TK_NUM = 291,
     TK_PMC = 292,
     TK_STRING = 293,
     TK_IF = 294,
     TK_UNLESS = 295,
     TK_NULL = 296,
     TK_GOTO = 297,
     TK_STRINGC = 298,
     TK_INTC = 299,
     TK_NUMC = 300,
     TK_PREG = 301,
     TK_NREG = 302,
     TK_SREG = 303,
     TK_IREG = 304,
     TK_ARROW = 305,
     TK_NE = 306,
     TK_EQ = 307,
     TK_LT = 308,
     TK_LE = 309,
     TK_GT = 310,
     TK_GE = 311,
     TK_USHIFT = 312,
     TK_RSHIFT = 313,
     TK_LSHIFT = 314,
     TK_FDIV = 315,
     TK_OR = 316,
     TK_AND = 317,
     TK_XOR = 318,
     TK_CONC = 319,
     TK_ASSIGN_USHIFT = 320,
     TK_ASSIGN_RSHIFT = 321,
     TK_ASSIGN_LSHIFT = 322,
     TK_ASSIGN_INC = 323,
     TK_ASSIGN_DEC = 324,
     TK_ASSIGN_MUL = 325,
     TK_ASSIGN_MOD = 326,
     TK_ASSIGN_POW = 327,
     TK_ASSIGN_DIV = 328,
     TK_ASSIGN_BOR = 329,
     TK_ASSIGN_BAND = 330,
     TK_ASSIGN_FDIV = 331,
     TK_ASSIGN_BNOT = 332,
     TK_ASSIGN_CONC = 333,
     TK_FLAG_INIT = 334,
     TK_FLAG_LOAD = 335,
     TK_FLAG_MAIN = 336,
     TK_FLAG_ANON = 337,
     TK_FLAG_METHOD = 338,
     TK_FLAG_OUTER = 339,
     TK_FLAG_VTABLE = 340,
     TK_FLAG_LEX = 341,
     TK_FLAG_MULTI = 342,
     TK_FLAG_POSTCOMP = 343,
     TK_FLAG_IMMEDIATE = 344,
     TK_FLAG_LEXID = 345,
     TK_INSTANCEOF = 346,
     TK_FLAG_UNIQUE_REG = 347,
     TK_FLAG_NAMED = 348,
     TK_FLAG_SLURPY = 349,
     TK_FLAG_FLAT = 350,
     TK_FLAG_OPTIONAL = 351,
     TK_FLAG_OPT_FLAG = 352,
     TK_FLAG_INVOCANT = 353
   };
#endif
/* Tokens.  */
#define TK_NL 258
#define TK_HLL 259
#define TK_HLL_MAP 260
#define TK_LOADLIB 261
#define TK_SUB 262
#define TK_END 263
#define TK_PARAM 264
#define TK_LEX 265
#define TK_LOCAL 266
#define TK_NAMESPACE 267
#define TK_INVOCANT 268
#define TK_METH_CALL 269
#define TK_GLOBALCONST 270
#define TK_CONST 271
#define TK_RETURN 272
#define TK_YIELD 273
#define TK_SET_YIELD 274
#define TK_SET_RETURN 275
#define TK_BEGIN_YIELD 276
#define TK_END_YIELD 277
#define TK_BEGIN_RETURN 278
#define TK_END_RETURN 279
#define TK_BEGIN_CALL 280
#define TK_END_CALL 281
#define TK_GET_RESULTS 282
#define TK_CALL 283
#define TK_SET_ARG 284
#define TK_GET_RESULT 285
#define TK_NCI_CALL 286
#define TK_TAILCALL 287
#define TK_LABEL 288
#define TK_IDENT 289
#define TK_INT 290
#define TK_NUM 291
#define TK_PMC 292
#define TK_STRING 293
#define TK_IF 294
#define TK_UNLESS 295
#define TK_NULL 296
#define TK_GOTO 297
#define TK_STRINGC 298
#define TK_INTC 299
#define TK_NUMC 300
#define TK_PREG 301
#define TK_NREG 302
#define TK_SREG 303
#define TK_IREG 304
#define TK_ARROW 305
#define TK_NE 306
#define TK_EQ 307
#define TK_LT 308
#define TK_LE 309
#define TK_GT 310
#define TK_GE 311
#define TK_USHIFT 312
#define TK_RSHIFT 313
#define TK_LSHIFT 314
#define TK_FDIV 315
#define TK_OR 316
#define TK_AND 317
#define TK_XOR 318
#define TK_CONC 319
#define TK_ASSIGN_USHIFT 320
#define TK_ASSIGN_RSHIFT 321
#define TK_ASSIGN_LSHIFT 322
#define TK_ASSIGN_INC 323
#define TK_ASSIGN_DEC 324
#define TK_ASSIGN_MUL 325
#define TK_ASSIGN_MOD 326
#define TK_ASSIGN_POW 327
#define TK_ASSIGN_DIV 328
#define TK_ASSIGN_BOR 329
#define TK_ASSIGN_BAND 330
#define TK_ASSIGN_FDIV 331
#define TK_ASSIGN_BNOT 332
#define TK_ASSIGN_CONC 333
#define TK_FLAG_INIT 334
#define TK_FLAG_LOAD 335
#define TK_FLAG_MAIN 336
#define TK_FLAG_ANON 337
#define TK_FLAG_METHOD 338
#define TK_FLAG_OUTER 339
#define TK_FLAG_VTABLE 340
#define TK_FLAG_LEX 341
#define TK_FLAG_MULTI 342
#define TK_FLAG_POSTCOMP 343
#define TK_FLAG_IMMEDIATE 344
#define TK_FLAG_LEXID 345
#define TK_INSTANCEOF 346
#define TK_FLAG_UNIQUE_REG 347
#define TK_FLAG_NAMED 348
#define TK_FLAG_SLURPY 349
#define TK_FLAG_FLAT 350
#define TK_FLAG_OPTIONAL 351
#define TK_FLAG_OPT_FLAG 352
#define TK_FLAG_INVOCANT 353




/* Copy the first part of user declarations.  */
#line 1 "pir.y"


/*
 * $Id$
 * Copyright (C) 2007-2008, The Perl Foundation.
 */

/*

=head1 NAME

pir.y - Bison specification for the PIR assembly language parser.

=head1 DESCRIPTION

This file implements the parser for the PIR assembly language. During the
parsing phase, data structures are created that represent the input. These
data structures are defined in C<pircompunit.h>.

The parser implements strength reduction and constant folding. Strength
reduction refers to the selection of instructions that have the same
effect as the instruction written by the PIR programmer, but are more
efficient. For instance:

 add $P0, $P0, $P1

can be reduced to:

 add $P0, $P1

as C<$P0> was an IN/OUT operand.

Constant folding refers to the compile-time evaluation of expressions,
if possible. For instance:

 add $I0, 10, 20

can be written as:

 set $I0, 30

as we can evaluate this result during compile time. Likewise, conditional
branch instructions may become unconditional branch instructions (if the
condition evaluates to I<true> during compile time) or it may become a C<noop>
(no op) instruction (if the condition evaluates to I<false> during compile time).

=cut

TODO:
1. improve memory management (free it!)
2. test the parser.
3. generate PBC, using Parrot_PackFile (and related) data structures.
4. handle branch/invoke instructions to calculate offsets etc.
5. handle freezing of PMC constants (representing subs)

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "pirparser.h"
#include "pircompiler.h"
#include "pircompunit.h"
#include "pirsymbol.h"


/* prevent inclusion of <unistd.h> on windows */
#define YY_NO_UNISTD_H

/* define YY_DECL, so that in "pirlexer.h" it won't be defined */
#define YY_DECL int yylex(YYSTYPE *yylval, yyscan_t yyscanner)

/* include "pirlexer.h" before "piryy.h" */
#include "pirlexer.h"
#include "piryy.h"

/* declare yylex(); do this I<after> including "pirlexer.h" */
extern YY_DECL;



/* Enumeration of mathematical operator types; these are used to index the opnames array. */
typedef enum pir_math_operators {
    OP_ADD = 0, /* make sure counting starts at 0 */
    OP_INC,     /* special case for OP_ADD; must be 1 position after OP_ADD */
    OP_SUB,
    OP_DEC,     /* special case for OP_DEC; must be 1 position after OP_SUB */
    OP_DIV,
    OP_MUL,
    OP_MOD,
    OP_BOR,
    OP_BAND,
    OP_BXOR,
    OP_POW,
    OP_CONCAT,
    OP_LSR,
    OP_SHR,
    OP_SHL,
    OP_OR,
    OP_AND,
    OP_FDIV,
    OP_XOR,
    OP_ISEQ,
    OP_ISLE,
    OP_ISLT,
    OP_ISGE,
    OP_ISGT,
    OP_ISNE

} pir_math_operator;

/* relational operator types */
typedef enum pir_rel_operators {
    OP_NE = OP_ISNE + 1,   /* continue after OP_ISNE in pir_math_operator. */
    OP_EQ,
    OP_LT,
    OP_LE,
    OP_GT,
    OP_GE

} pir_rel_operator;

/* names of the binary operators */
static char * const opnames[] = {
    "add",
    "inc", /* use this when "add"ing 1 */
    "sub",
    "dec", /* use this when "sub"ing 1 */
    "div",
    "mul",
    "mod",
    "bor",
    "band",
    "bxor",
    "pow",
    "concat",
    "lsr",
    "shr",
    "shl",
    "or",
    "and",
    "fdiv",
    "xor",
    "iseq",
    "isle",
    "islt",
    "isge",
    "isgt",
    "isne",
    /* note that from here on it's rel. ops; see pir_rel_operator enumeration */
    "ne",
    "eq",
    "lt",
    "le",
    "gt",
    "ge"
};

/* prototypes for constant folding and compile-time evaluation functions */
static constant *fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b);
static constant *fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b);
static constant *fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b);
static constant *fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b);
static constant *fold_s_s(yyscan_t yyscanner, char *a, pir_math_operator op, char *b);

static int evaluate_i_i(int a, pir_rel_operator op, int b);
static int evaluate_n_n(double a, pir_rel_operator op, double b);
static int evaluate_i_n(int a, pir_rel_operator op, double b);
static int evaluate_n_i(double a, pir_rel_operator op, int b);
static int evaluate_s_s(char * const a, pir_rel_operator op, char * const b);

static int evaluate_s(char * const s);
static int evaluate_c(constant * const c);

static char *concat_strings(char *a, char *b);

static void create_if_instr(yyscan_t yyscanner, lexer_state * const lexer, int invert,
                            int hasnull, char * const name, char * const label);

static void do_strength_reduction(lexer_state * const lexer);
static int check_value(constant * const c, int val);


/* enable debugging of generated parser */
#define YYDEBUG         1

/* enable slightly more helpful error messages */
#define YYERROR_VERBOSE 1

/* keep MSVC happy */
#ifndef YYENABLE_NLS
#  define YYENABLE_NLS 0
#endif

/* keep MSVC happy */
#ifndef YYLTYPE_IS_TRIVIAL
#  define YYLTYPE_IS_TRIVIAL 0
#endif


/* the parser aborts if there are more than 10 errors */
#define MAX_NUM_ERRORS  10




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 212 "pir.y"
{
    double              dval;
    int                 ival;
    char               *sval;
    struct constant    *cval;
    struct instruction *instr;
    struct expression  *expr;
    struct target      *targ;
    struct argument    *argm;
    struct invocation  *invo;
    struct key         *key;
    struct symbol      *symb;
}
/* Line 187 of yacc.c.  */
#line 514 "pirparser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 527 "pirparser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   842

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNRULES -- Number of states.  */
#define YYNSTATES  518

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   354

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   108,     2,     2,     2,   113,   115,     2,
     103,   104,   112,   110,   105,   107,   106,   111,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   102,
       2,    99,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   100,     2,   101,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   114,     2,   109,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   116
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    10,    12,    16,    18,    20,
      22,    24,    26,    28,    31,    34,    39,    44,    45,    47,
      49,    53,    55,    62,    65,    67,    69,    70,    73,    75,
      77,    79,    81,    83,    85,    87,    89,    91,    96,    99,
     102,   105,   107,   109,   111,   112,   115,   120,   123,   124,
     127,   129,   131,   136,   137,   140,   141,   144,   147,   150,
     152,   154,   156,   158,   160,   162,   164,   166,   168,   170,
     172,   174,   176,   178,   181,   185,   189,   192,   195,   197,
     199,   201,   202,   204,   206,   210,   214,   216,   218,   220,
     223,   227,   229,   233,   236,   240,   244,   248,   252,   256,
     263,   268,   273,   280,   285,   290,   294,   298,   302,   306,
     310,   314,   318,   323,   329,   334,   339,   343,   347,   351,
     355,   359,   363,   367,   371,   374,   380,   386,   392,   398,
     404,   410,   416,   422,   428,   433,   438,   443,   448,   453,
     458,   463,   468,   473,   478,   483,   488,   493,   497,   501,
     505,   509,   513,   517,   521,   525,   529,   531,   533,   535,
     537,   541,   546,   548,   552,   555,   557,   558,   560,   566,
     568,   570,   579,   580,   582,   584,   587,   591,   595,   598,
     604,   605,   608,   609,   611,   613,   616,   620,   622,   625,
     629,   633,   635,   637,   639,   644,   647,   649,   651,   653,
     655,   657,   659,   661,   663,   667,   668,   670,   672,   676,
     679,   680,   683,   685,   687,   689,   691,   694,   696,   698,
     700,   702,   706,   710,   714,   718,   719,   721,   723,   727,
     729,   731,   735,   738,   740,   746,   752,   753,   755,   757,
     760,   764,   765,   767,   769,   772,   776,   777,   780,   782,
     785,   786,   788,   792,   795,   797,   799,   802,   805,   810,
     815,   820,   825,   827,   829,   831,   833,   835,   837,   839,
     841,   843,   845,   847,   849,   851,   853,   855,   857,   859,
     861,   863,   865,   867,   869,   871,   873,   875,   877,   879,
     881,   883,   885,   887,   889,   891,   893,   895,   897,   899,
     901,   903,   905,   907,   909,   911,   913,   915,   917,   919,
     921,   923,   925,   927,   929,   931,   933,   935,   937,   939,
     941,   943,   945,   947,   949,   951,   953,   955,   957,   959,
     961
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     118,     0,    -1,   119,   120,   119,    -1,    -1,     3,    -1,
     121,    -1,   120,     3,   121,    -1,   129,    -1,   224,    -1,
     125,    -1,   123,    -1,   124,    -1,   122,    -1,     6,    43,
      -1,     4,    43,    -1,     5,    43,    99,    43,    -1,    12,
     100,   126,   101,    -1,    -1,   127,    -1,   128,    -1,   127,
     102,   128,    -1,    43,    -1,   130,   132,     3,   135,   141,
       8,    -1,     7,   131,    -1,   233,    -1,    43,    -1,    -1,
     132,   133,    -1,    82,    -1,    79,    -1,    80,    -1,    81,
      -1,    83,    -1,    86,    -1,    88,    -1,    89,    -1,    87,
      -1,    84,   103,   131,   104,    -1,    85,   220,    -1,    90,
     221,    -1,    91,   221,    -1,   233,    -1,    43,    -1,   158,
      -1,    -1,   135,   136,    -1,     9,   137,   138,     3,    -1,
     230,   233,    -1,    -1,   138,   139,    -1,   198,    -1,   140,
      -1,    98,   103,   134,   104,    -1,    -1,   141,   142,    -1,
      -1,   143,   144,    -1,    33,     3,    -1,    33,   145,    -1,
     145,    -1,   163,    -1,   168,    -1,   169,    -1,   174,    -1,
     222,    -1,   199,    -1,   200,    -1,   175,    -1,   160,    -1,
     149,    -1,   148,    -1,   147,    -1,   146,    -1,     1,     3,
      -1,    41,   231,     3,    -1,    27,   193,     3,    -1,   150,
       3,    -1,   151,   152,    -1,    34,    -1,   153,    -1,   155,
      -1,    -1,   154,    -1,   156,    -1,   154,   105,   156,    -1,
     158,    99,   227,    -1,   227,    -1,   158,    -1,   157,    -1,
     192,   158,    -1,   100,   159,   101,    -1,   227,    -1,   159,
     102,   227,    -1,   161,     3,    -1,   231,    99,    44,    -1,
     231,    99,    45,    -1,   231,    99,    43,    -1,   231,    99,
     162,    -1,   231,    99,   151,    -1,   231,    99,   151,   227,
     105,   154,    -1,   231,    99,   151,   227,    -1,   231,    99,
     151,   158,    -1,   231,    99,   151,   158,   105,   154,    -1,
     231,    99,   234,   158,    -1,   231,    99,    46,   158,    -1,
     231,   237,   227,    -1,   231,    68,    44,    -1,   231,    68,
      45,    -1,   231,    69,    44,    -1,   231,    69,    45,    -1,
     231,    68,   231,    -1,   231,    69,   231,    -1,   231,    99,
     235,   227,    -1,   231,    99,   231,   236,   231,    -1,   234,
     158,    99,   227,    -1,    46,   158,    99,   227,    -1,    44,
     236,   231,    -1,    45,   236,   231,    -1,    43,   236,   231,
      -1,    43,   236,    43,    -1,    44,   236,    44,    -1,    45,
     236,    45,    -1,    44,   236,    45,    -1,    45,   236,    44,
      -1,   164,     3,    -1,   166,    41,    34,    42,   233,    -1,
     166,    41,    35,    42,   233,    -1,   166,    41,    36,    42,
     233,    -1,   166,    41,    37,    42,   233,    -1,   166,    41,
      38,    42,   233,    -1,   166,    41,    39,    42,   233,    -1,
     166,    41,    40,    42,   233,    -1,   166,    41,    42,    42,
     233,    -1,   166,    41,    41,    42,   233,    -1,   166,   228,
     167,   233,    -1,   166,    34,   167,   233,    -1,   166,    35,
     167,   233,    -1,   166,    36,   167,   233,    -1,   166,    37,
     167,   233,    -1,   166,    38,   167,   233,    -1,   166,    39,
     167,   233,    -1,   166,    40,   167,   233,    -1,   166,    42,
      42,   233,    -1,   166,    42,   105,   233,    -1,   166,    41,
      42,   233,    -1,   166,    41,   105,   233,    -1,   166,   165,
      42,   233,    -1,   231,   229,   227,    -1,    44,   229,   231,
      -1,    45,   229,   231,    -1,    43,   229,   231,    -1,    44,
     229,    44,    -1,    44,   229,    45,    -1,    45,   229,    44,
      -1,    45,   229,    45,    -1,    43,   229,    43,    -1,    39,
      -1,    40,    -1,    42,    -1,   105,    -1,    42,   233,     3,
      -1,    11,   230,   170,     3,    -1,   171,    -1,   170,   105,
     171,    -1,   172,   173,    -1,   233,    -1,    -1,    92,    -1,
      10,    43,   105,   192,     3,    -1,   176,    -1,   185,    -1,
      25,     3,   177,   180,     3,   182,    26,     3,    -1,    -1,
     178,    -1,   179,    -1,   178,   179,    -1,    29,   208,     3,
      -1,    28,   192,   181,    -1,    31,   192,    -1,    13,   192,
       3,    14,   191,    -1,    -1,   105,   192,    -1,    -1,   183,
      -1,   184,    -1,   183,   184,    -1,    30,   196,     3,    -1,
     169,    -1,   186,     3,    -1,   193,    99,   187,    -1,   231,
      99,   187,    -1,   187,    -1,   189,    -1,   188,    -1,   192,
     106,   191,   203,    -1,   190,   203,    -1,   192,    -1,    43,
      -1,   233,    -1,    46,    -1,    48,    -1,    43,    -1,   233,
      -1,    46,    -1,   103,   194,   104,    -1,    -1,   195,    -1,
     196,    -1,   195,   105,   196,    -1,   231,   197,    -1,    -1,
     197,   198,    -1,    96,    -1,    97,    -1,    94,    -1,    92,
      -1,    93,   220,    -1,   201,    -1,   210,    -1,   202,    -1,
     211,    -1,    17,   203,     3,    -1,    32,   187,     3,    -1,
      18,   203,     3,    -1,   103,   204,   104,    -1,    -1,   205,
      -1,   206,    -1,   205,   105,   206,    -1,   208,    -1,   207,
      -1,    43,    50,   209,    -1,   209,   218,    -1,   227,    -1,
      23,     3,   215,    24,     3,    -1,    21,     3,   212,    22,
       3,    -1,    -1,   213,    -1,   214,    -1,   213,   214,    -1,
      19,   208,     3,    -1,    -1,   216,    -1,   217,    -1,   216,
     217,    -1,    20,   208,     3,    -1,    -1,   218,   219,    -1,
      95,    -1,    93,   220,    -1,    -1,   221,    -1,   103,    43,
     104,    -1,   223,     3,    -1,   224,    -1,   225,    -1,    16,
     226,    -1,    15,   226,    -1,    35,   233,    99,    44,    -1,
      36,   233,    99,    45,    -1,    38,   233,    99,    43,    -1,
      37,   233,    99,    43,    -1,   231,    -1,   228,    -1,    43,
      -1,    44,    -1,    45,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    56,    -1,    55,    -1,    35,    -1,    36,
      -1,    37,    -1,    38,    -1,   232,    -1,    46,    -1,    47,
      -1,    49,    -1,    48,    -1,   233,    -1,    34,    -1,   234,
      -1,    39,    -1,    40,    -1,    42,    -1,    35,    -1,    36,
      -1,    38,    -1,    37,    -1,    41,    -1,   107,    -1,   108,
      -1,   109,    -1,   110,    -1,   107,    -1,   111,    -1,   112,
      -1,   113,    -1,   114,    -1,   115,    -1,   109,    -1,   116,
      -1,    64,    -1,    57,    -1,    58,    -1,    59,    -1,    61,
      -1,    62,    -1,    60,    -1,    63,    -1,    52,    -1,    54,
      -1,    53,    -1,    56,    -1,    55,    -1,    51,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    76,    -1,    74,
      -1,    75,    -1,    77,    -1,    78,    -1,    66,    -1,    67,
      -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   456,   456,   461,   462,   465,   466,   469,   470,   471,
     472,   473,   474,   477,   483,   487,   491,   496,   497,   501,
     503,   507,   511,   517,   521,   522,   525,   526,   529,   531,
     533,   535,   537,   539,   541,   543,   545,   547,   549,   551,
     553,   557,   558,   559,   562,   563,   566,   569,   574,   575,
     579,   580,   583,   589,   590,   594,   594,   598,   600,   602,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   621,   631,   635,   639,   642,   645,   654,
     664,   667,   668,   671,   672,   675,   706,   708,   710,   714,
     744,   748,   750,   755,   758,   765,   772,   774,   776,   790,
     800,   809,   832,   837,   854,   860,   862,   871,   880,   889,
     898,   900,   902,   904,   911,   929,   962,   964,   966,   968,
     970,   972,   974,   976,   981,   989,   991,   993,   995,   997,
     999,  1001,  1003,  1005,  1007,  1017,  1019,  1021,  1023,  1025,
    1027,  1029,  1031,  1033,  1035,  1037,  1039,  1065,  1070,  1075,
    1080,  1085,  1087,  1089,  1091,  1093,  1097,  1098,  1101,  1102,
    1105,  1109,  1113,  1115,  1119,  1123,  1132,  1133,  1136,  1155,
    1156,  1159,  1171,  1172,  1176,  1178,  1182,  1186,  1188,  1190,
    1196,  1197,  1202,  1203,  1207,  1209,  1213,  1215,  1219,  1223,
    1225,  1227,  1231,  1232,  1235,  1255,  1262,  1264,  1268,  1284,
    1286,  1288,  1292,  1294,  1299,  1304,  1305,  1309,  1311,  1315,
    1320,  1321,  1325,  1327,  1329,  1331,  1333,  1343,  1344,  1347,
    1348,  1351,  1356,  1366,  1373,  1378,  1379,  1383,  1385,  1389,
    1390,  1393,  1397,  1401,  1405,  1414,  1424,  1425,  1430,  1432,
    1437,  1442,  1443,  1447,  1449,  1453,  1459,  1460,  1464,  1466,
    1474,  1475,  1479,  1483,  1486,  1487,  1490,  1494,  1498,  1500,
    1502,  1504,  1521,  1522,  1526,  1527,  1528,  1531,  1532,  1533,
    1534,  1535,  1536,  1539,  1540,  1541,  1542,  1550,  1553,  1554,
    1555,  1556,  1557,  1571,  1572,  1575,  1576,  1577,  1578,  1579,
    1580,  1581,  1582,  1585,  1586,  1587,  1590,  1591,  1592,  1593,
    1594,  1595,  1596,  1597,  1598,  1599,  1600,  1601,  1602,  1603,
    1604,  1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,  1618,
    1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1628,
    1629
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"\\n\"", "\".HLL\"", "\".HLL_map\"",
  "\".loadlib\"", "\".sub\"", "\".end\"", "\".param\"", "\".lex\"",
  "\".local\"", "\".namespace\"", "\".invocant\"", "\".meth_call\"",
  "\".globalconst\"", "\".const\"", "\".return\"", "\".yield\"",
  "\".set_yield\"", "\".set_return\"", "\".begin_yield\"",
  "\".end_yield\"", "\".begin_return\"", "\".end_return\"",
  "\".begin_call\"", "\".end_call\"", "\".get_results\"", "\".call\"",
  "\".set_arg\"", "\".get_result\"", "\".nci_call\"", "\".tailcall\"",
  "\"label\"", "\"identifier\"", "\"int\"", "\"num\"", "\"pmc\"",
  "\"string\"", "\"if\"", "\"unless\"", "\"null\"", "\"goto\"",
  "\"string constant\"", "\"integer constant\"", "\"number constant\"",
  "\"PMC register\"", "\"number register\"", "\"string register\"",
  "\"integer register\"", "\"=>\"", "\"!=\"", "\"==\"", "\"<\"", "\"<=\"",
  "\">\"", "\">=\"", "\">>>\"", "\">>\"", "\"<<\"", "\"//\"", "\"||\"",
  "\"&&\"", "\"~~\"", "\".\"", "\">>>=\"", "\">>=\"", "\"<<=\"", "\"+=\"",
  "\"-=\"", "\"*=\"", "\"%=\"", "\"**=\"", "\"/=\"", "\"|=\"", "\"&=\"",
  "\"//=\"", "\"~=\"", "\".=\"", "\":init\"", "\":load\"", "\":main\"",
  "\":anon\"", "\":method\"", "\":outer\"", "\":vtable\"", "\":lex\"",
  "\":multi\"", "\":postcomp\"", "\":immediate\"", "\":lexid\"",
  "\":instanceof\"", "\":unique_reg\"", "\":named\"", "\":slurpy\"",
  "\":flat\"", "\":optional\"", "\":opt_flag\"", "\":invocant\"", "'='",
  "'['", "']'", "';'", "'('", "')'", "','", "'.'", "'-'", "'!'", "'~'",
  "'+'", "'/'", "'*'", "'%'", "'|'", "'&'", "\"**\"", "$accept", "TOP",
  "opt_nl", "pir_chunks", "pir_chunk", "loadlib", "hll_specifier",
  "hll_mapping", "namespace_decl", "opt_namespace", "namespace",
  "namespace_slice", "sub_def", "sub_head", "sub_id", "sub_flags",
  "sub_flag", "multi_type", "parameters", "parameter", "param",
  "param_flags", "param_flag", "invocant_param", "instructions",
  "instruction", "@1", "instr", "statement", "error_stat", "null_stat",
  "getresults_stat", "parrot_stat", "parrot_instruction", "parrot_op",
  "opt_op_args", "op_args", "parrot_op_args", "keylist_assignment",
  "op_arg", "keyaccess", "keylist", "keys", "assignment_stat",
  "assignment", "binary_expr", "conditional_stat", "conditional_instr",
  "condition", "if_unless", "then", "goto_stat", "local_decl",
  "local_id_list", "local_id", "local_var_name", "has_unique_reg",
  "lex_decl", "invocation_stat", "long_invocation_stat",
  "opt_long_arguments", "long_arguments", "long_argument",
  "long_invocation", "opt_ret_cont", "opt_long_results", "long_results",
  "long_result", "short_invocation_stat", "short_invocation",
  "simple_invocation", "methodcall", "subcall", "sub", "method",
  "pmc_object", "opt_target_list", "opt_list", "target_list",
  "result_target", "target_flags", "target_flag", "return_stat",
  "yield_stat", "short_return_stat", "short_yield_stat", "arguments",
  "opt_arguments_list", "arguments_list", "argument", "named_arg",
  "short_arg", "arg", "long_return_stat", "long_yield_stat",
  "opt_yield_expressions", "yield_expressions", "yield_expression",
  "opt_return_expressions", "return_expressions", "return_expression",
  "arg_flags", "arg_flag", "opt_paren_string", "paren_string",
  "const_decl_stat", "const_stat", "const_decl", "globalconst_decl",
  "const_tail", "expression", "constant", "rel_op", "type", "target",
  "symbol", "identifier", "keyword", "unop", "binop", "augmented_op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,    61,
      91,    93,    59,    40,    41,    44,    46,    45,    33,   126,
      43,    47,    42,    37,   124,    38,   354
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   117,   118,   119,   119,   120,   120,   121,   121,   121,
     121,   121,   121,   122,   123,   124,   125,   126,   126,   127,
     127,   128,   129,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   134,   135,   135,   136,   137,   138,   138,
     139,   139,   140,   141,   141,   143,   142,   144,   144,   144,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   146,   147,   148,   149,   150,   151,   152,
     152,   153,   153,   154,   154,   155,   156,   156,   156,   157,
     158,   159,   159,   160,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   163,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   166,   166,   167,   167,
     168,   169,   170,   170,   171,   172,   173,   173,   174,   175,
     175,   176,   177,   177,   178,   178,   179,   180,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   184,   185,   186,
     186,   186,   187,   187,   188,   189,   190,   190,   191,   191,
     191,   191,   192,   192,   193,   194,   194,   195,   195,   196,
     197,   197,   198,   198,   198,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   203,   204,   204,   205,   205,   206,
     206,   207,   208,   209,   210,   211,   212,   212,   213,   213,
     214,   215,   215,   216,   216,   217,   218,   218,   219,   219,
     220,   220,   221,   222,   223,   223,   224,   225,   226,   226,
     226,   226,   227,   227,   228,   228,   228,   229,   229,   229,
     229,   229,   229,   230,   230,   230,   230,   231,   232,   232,
     232,   232,   232,   233,   233,   234,   234,   234,   234,   234,
     234,   234,   234,   235,   235,   235,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     4,     0,     1,     1,
       3,     1,     6,     2,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     2,
       2,     1,     1,     1,     0,     2,     4,     2,     0,     2,
       1,     1,     4,     0,     2,     0,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     2,     2,     1,     1,
       1,     0,     1,     1,     3,     3,     1,     1,     1,     2,
       3,     1,     3,     2,     3,     3,     3,     3,     3,     6,
       4,     4,     6,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     4,     5,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       3,     4,     1,     3,     2,     1,     0,     1,     5,     1,
       1,     8,     0,     1,     1,     2,     3,     3,     2,     5,
       0,     2,     0,     1,     1,     2,     3,     1,     2,     3,
       3,     1,     1,     1,     4,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     1,     3,     2,
       0,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     3,     3,     3,     3,     0,     1,     1,     3,     1,
       1,     3,     2,     1,     5,     5,     0,     1,     1,     2,
       3,     0,     1,     1,     2,     3,     0,     2,     1,     2,
       0,     1,     3,     2,     1,     1,     2,     2,     4,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     4,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     3,     5,    12,    10,    11,     9,     7,    26,     8,
      14,     0,    13,   283,   288,   289,   291,   290,   285,   286,
     292,   287,    25,    23,    24,   284,    17,     0,     0,     0,
       0,   256,     4,     2,     0,     0,    21,     0,    18,    19,
       0,     0,     0,     0,     6,    44,    29,    30,    31,    28,
      32,     0,   250,    33,    36,    34,    35,     0,     0,    27,
      15,    16,     0,     0,     0,     0,     0,    53,     0,     0,
      38,   251,    39,    40,    20,   258,   259,   261,   260,     0,
      45,    55,     0,     0,   273,   274,   275,   276,    48,     0,
      22,    54,     0,    37,   252,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
     285,   286,   292,   287,   197,   278,   279,   281,   280,   205,
      56,    59,    72,    71,    70,    69,     0,    81,    68,     0,
      60,     0,     0,    61,    62,    63,    67,   169,   170,     0,
     191,   193,   192,     0,   196,     0,    65,    66,   217,   219,
     218,   220,    64,     0,   254,   255,     0,   277,   282,   284,
      46,   215,   250,   214,   212,   213,     0,    49,    51,    50,
      73,     0,     0,   257,   225,     0,     0,   236,   241,   172,
       0,   203,     0,   202,    57,    58,   278,     0,   282,     0,
       0,     0,     0,   206,   207,   210,    76,   264,   265,   266,
     278,    77,    79,    82,    80,    83,    88,    87,     0,    86,
     263,   262,    93,   124,   283,   288,   289,   291,   290,   285,
     286,   292,   287,   264,   265,   266,     0,     0,     0,   188,
     195,     0,     0,   253,   330,   328,   329,     0,     0,   319,
     320,   321,   322,   324,   325,   323,   326,   327,     0,     0,
       0,   216,     0,     0,     0,   162,   166,   165,   264,     0,
     226,   227,   230,   229,   246,   233,   221,   223,     0,     0,
     237,   238,     0,     0,   242,   243,     0,     0,   173,   174,
      75,   222,    74,   160,     0,    91,     0,   204,     0,   209,
       0,     0,    89,   158,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,   268,   269,   270,   272,   271,
       0,     0,     0,     0,     0,     0,   201,   199,   200,     0,
     198,   189,   106,   107,   110,   108,   109,   111,    96,    94,
      95,   278,   293,   294,   295,    98,    97,   190,     0,   284,
       0,   105,     0,    42,     0,    43,    41,     0,   161,     0,
     167,   164,     0,   224,     0,   232,     0,     0,   239,     0,
       0,   244,     0,     0,     0,     0,     0,   175,    90,     0,
     115,   208,   211,    84,    87,    85,   135,   136,   137,   138,
     139,   140,   141,     0,     0,     0,     0,     0,     0,     0,
       0,   287,   144,   145,   142,   143,   155,   150,   151,   152,
     148,   153,   154,   149,   146,   134,   147,   194,   318,   313,
     315,   314,   317,   316,   306,   307,   308,   311,   309,   310,
     312,   305,   297,   303,   296,   298,   299,   300,   301,   302,
     304,     0,     0,     0,   104,   101,   100,     0,   103,   112,
     114,    52,   168,   163,   231,   228,   250,   248,   247,   240,
     235,   245,   234,   176,     0,   180,   178,   182,    92,   125,
     126,   127,   128,   129,   130,   131,   133,   132,   119,   118,
     120,   122,   116,   123,   121,   117,     0,     0,   113,   249,
       0,     0,   177,     0,   187,     0,   183,   184,   102,    99,
       0,   181,     0,     0,   185,   179,   186,   171
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    11,    12,    13,    14,    15,    16,    47,
      48,    49,    17,    18,    33,    44,    69,   364,    77,    90,
      98,   105,   177,   178,    91,   101,   102,   130,   131,   132,
     133,   134,   135,   136,   137,   211,   212,   213,   214,   215,
     216,   394,   294,   138,   139,   356,   140,   141,   236,   142,
     305,   143,   144,   264,   265,   266,   371,   145,   146,   147,
     287,   288,   289,   386,   502,   505,   506,   507,   148,   149,
     150,   151,   152,   153,   339,   154,   155,   202,   203,   204,
     299,   179,   156,   157,   158,   159,   185,   269,   270,   271,
     272,   273,   274,   160,   161,   279,   280,   281,   283,   284,
     285,   375,   468,    80,    81,   162,   163,    19,   165,    41,
     275,   220,   330,    99,   221,   167,   198,    35,   360,   451,
     259
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -466
static const yytype_int16 yypact[] =
{
      39,  -466,    68,   131,  -466,    26,    41,    43,   473,   -18,
     140,    85,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,    -7,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,    52,   791,   791,   791,
     791,  -466,   131,  -466,    37,    58,  -466,    -4,     3,  -466,
       9,    12,    13,    33,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,    10,    31,  -466,  -466,  -466,  -466,    31,    31,  -466,
    -466,  -466,    52,    95,    96,    97,   101,   136,   473,   103,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,   169,
    -466,   142,    44,    51,  -466,  -466,  -466,  -466,  -466,   791,
    -466,  -466,   306,  -466,  -466,     6,  -466,   153,   115,   169,
     140,    56,    56,   158,   161,   168,    69,   227,   403,   419,
     552,   584,   760,   791,  -466,   -10,  -466,  -466,  -466,   760,
    -466,  -466,  -466,  -466,  -466,  -466,   170,   435,  -466,   177,
    -466,   178,   600,  -466,  -466,  -466,  -466,  -466,  -466,   179,
    -466,  -466,  -466,    56,   119,   102,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,   199,  -466,  -466,   209,  -466,    54,   126,
    -466,  -466,    31,  -466,  -466,  -466,   124,  -466,  -466,  -466,
    -466,   123,   791,  -466,   616,   228,   229,   211,   219,   212,
     239,  -466,   243,  -466,  -466,  -466,  -466,   244,  -466,   246,
     632,   157,   167,   152,  -466,  -466,  -466,  -466,  -466,  -466,
     188,  -466,  -466,   184,  -466,  -466,  -466,   191,   126,  -466,
    -466,  -466,  -466,  -466,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,    25,   -31,   443,   443,   443,   249,   -32,   443,  -466,
    -466,   776,   227,  -466,  -466,  -466,  -466,   175,   648,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,   151,   632,
     194,  -466,    14,   347,     1,  -466,   202,  -466,   254,   192,
     200,  -466,  -466,  -466,  -466,  -466,  -466,  -466,   632,   284,
     211,  -466,   632,   285,   219,  -466,   632,     8,   212,  -466,
    -466,  -466,  -466,  -466,   -83,  -466,   632,  -466,   760,    73,
     435,   632,  -466,  -466,  -466,   791,   791,   791,   791,   791,
     791,   791,   268,   269,   276,   277,   278,   286,   288,   290,
     800,   791,   791,   791,  -466,  -466,  -466,  -466,  -466,  -466,
     728,   664,   680,   791,   791,   632,  -466,  -466,  -466,    56,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,   469,   501,
     501,   -10,  -466,  -466,  -466,   502,  -466,  -466,   501,   126,
     632,  -466,   632,  -466,   230,  -466,  -466,   332,  -466,   791,
    -466,  -466,   632,  -466,   616,   -80,   333,   334,  -466,   348,
     356,  -466,   357,   347,   347,   347,   360,  -466,  -466,   632,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,   791,   791,   791,   791,   791,   791,   791,
     791,   791,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,   744,   696,   712,  -466,   245,   261,   760,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,    31,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,   364,   263,  -466,     5,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,   435,   435,  -466,  -466,
     358,   347,  -466,   760,  -466,   344,     5,  -466,   184,   184,
     776,  -466,   368,   370,  -466,  -466,  -466,  -466
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -466,  -466,   363,  -466,   336,  -466,  -466,  -466,  -466,  -466,
    -466,   318,  -466,  -466,   313,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,   274,  -466,
    -466,  -466,  -466,  -466,   147,  -466,  -466,  -452,  -466,    94,
    -466,  -111,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -150,  -466,  -465,  -466,    38,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,   122,  -466,  -466,  -466,  -466,   -94,  -466,  -466,
    -109,  -466,  -466,  -466,   -99,  -132,   299,  -466,  -466,  -295,
    -466,   117,  -466,  -466,  -466,  -466,  -110,  -466,  -466,    49,
    -466,  -197,    45,  -466,  -466,  -466,  -466,   145,  -466,  -466,
     143,  -466,  -466,  -171,     4,  -466,  -466,   -85,  -466,   319,
    -117,   289,  -210,   323,   -95,  -466,    -8,   -96,  -466,  -312,
    -466
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -204
static const yytype_int16 yytable[] =
{
      34,   261,   186,   391,   368,   218,   169,   166,   192,   170,
     303,   322,   504,   466,   201,   467,   109,   164,   388,   389,
     219,   383,   169,   166,   331,   332,   217,   197,   335,    50,
      51,    52,    53,   164,   205,   503,   384,   452,   453,   385,
      55,   504,     1,   240,   508,   509,   457,   238,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   363,   260,   312,
     313,   314,   315,   316,   317,   318,   319,   320,     4,    20,
      34,    82,    83,   304,   323,   306,   307,   308,   309,   310,
     311,   376,    36,   295,    21,   379,    22,   334,    42,   382,
     200,   106,    45,  -203,   168,    46,  -203,    71,   171,   172,
     173,    70,   174,   175,   176,    72,   369,   302,    73,   193,
     168,    74,    75,    78,   200,   199,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   168,
     321,   367,    76,   341,    79,     5,     6,     7,     8,    85,
      87,    86,   361,     9,    88,    89,    93,    10,   103,   357,
     100,   365,   344,   347,  -202,   104,   180,  -202,   181,   184,
    -202,   187,   359,   358,   188,   171,   172,   173,   218,   174,
     175,   189,   129,   206,   267,    37,    38,    39,    40,   390,
     222,   223,   239,   219,   395,   119,    24,    25,    26,    27,
      28,    29,    30,    31,   348,   349,   350,   351,   126,   127,
     128,   242,   243,   205,    94,    95,    96,    97,   512,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   426,   342,
     343,   196,   126,   127,   128,   241,   200,   262,   263,   427,
     278,   276,   277,   340,   193,   417,   420,   423,   456,   282,
     454,   286,   290,   459,   455,   460,   291,   292,   458,   293,
     168,   474,   475,   476,   366,   193,   296,   298,   352,   353,
     354,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     124,   297,   478,   191,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,  -203,   300,
     301,   333,   168,   362,   370,   499,   373,   396,   397,   398,
     399,   400,   401,   402,   372,   374,   377,   107,   258,   380,
     403,   404,   412,   413,   414,   415,   108,   109,   405,   406,
     407,   110,    10,   111,   112,   424,   425,   113,   408,   114,
     409,   115,   410,   116,   461,   462,   469,   470,   117,   118,
     119,    24,    25,    26,    27,   120,   121,   122,   123,   124,
     496,   471,   125,   126,   127,   128,   489,   492,   495,   472,
     473,   267,   498,   477,   218,   218,   497,   500,   501,   511,
     513,   516,   510,   517,    43,   193,   193,   193,    54,   219,
     219,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      84,    92,   195,   191,   393,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   107,   355,   194,   463,   205,   129,
     387,   515,   514,   108,   109,   190,   392,   464,   110,    10,
     111,   112,   -78,   465,   113,   378,   114,   381,   115,   183,
     116,   237,   182,     0,     0,   117,     0,   119,    24,    25,
      26,    27,   120,   121,   122,   123,   124,     0,     0,   125,
     126,   127,   128,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   207,   208,
     209,   210,   126,   127,   128,     0,     0,     0,   168,   168,
       0,     0,     0,   193,   324,   325,   326,   327,   328,   329,
       0,     0,   340,     0,     0,     0,   129,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     0,     0,   -78,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,     0,   200,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   207,   208,   209,   196,   126,
     127,   128,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,     0,     0,     0,     0,
       0,     0,  -197,     0,     0,     0,   442,     0,   443,   444,
     445,   446,   447,   448,   449,   450,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,   200,     0,     0,     0,     0,     0,   442,     0,
     443,   444,   445,   446,   447,   448,   449,   450,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   196,   126,   127,   128,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   268,
     208,   209,   196,   126,   127,   128,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   207,   208,   209,   196,   126,
     127,   128,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     0,   345,   346,   196,   126,   127,   128,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,   418,   419,
     196,   126,   127,   128,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     0,   421,   422,   196,   126,   127,   128,
      23,    24,    25,    26,    27,    28,    29,    30,    31,     0,
     490,   491,   196,   126,   127,   128,    23,    24,    25,    26,
      27,    28,    29,    30,    31,     0,   493,   494,   196,   126,
     127,   128,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   416,     0,     0,   196,   126,   127,   128,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   488,     0,     0,
     196,   126,   127,   128,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     0,     0,     0,   196,   126,   127,   128,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   336,
       0,     0,   337,     0,   338,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    23,    24,    25,    26,    27,    28,
      29,    30,   411
};

static const yytype_int16 yycheck[] =
{
       8,   172,   112,   298,     3,   137,   102,   102,   117,     3,
      42,    42,   477,    93,   125,    95,    11,   102,   101,   102,
     137,    13,   118,   118,   234,   235,   137,   122,   238,    37,
      38,    39,    40,   118,   129,    30,    28,   349,   350,    31,
       3,   506,     3,   153,   496,   497,   358,   142,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   169,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    43,
      78,    67,    68,   105,   105,   225,   226,   227,   228,   229,
     230,   278,   100,   200,    43,   282,    43,   237,     3,   286,
     100,    99,    99,   103,   102,    43,   106,   101,    92,    93,
      94,    43,    96,    97,    98,   102,   105,   218,    99,   117,
     118,    99,    99,   103,   100,   123,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   137,
     105,   263,    99,   242,   103,     4,     5,     6,     7,    44,
      43,    45,   259,    12,    43,     9,    43,    16,   104,   258,
       8,   262,   247,   248,   100,   104,     3,   103,    43,   103,
     106,     3,   258,   258,     3,    92,    93,    94,   300,    96,
      97,     3,   103,     3,   182,    35,    36,    37,    38,   296,
       3,     3,     3,   300,   301,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    99,     3,   298,    35,    36,    37,    38,   503,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   335,    44,
      45,    46,    47,    48,    49,   106,   100,   103,   105,   339,
      19,     3,     3,   241,   242,   330,   331,   332,   355,    20,
     351,    29,     3,   360,   355,   362,     3,     3,   359,     3,
     258,   383,   384,   385,   262,   263,    99,   105,   107,   108,
     109,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   104,   389,    46,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,   100,   105,
      99,    42,   300,    99,    92,   466,   104,   305,   306,   307,
     308,   309,   310,   311,    50,   105,    22,     1,    99,    24,
      42,    42,   320,   321,   322,   323,    10,    11,    42,    42,
      42,    15,    16,    17,    18,   333,   334,    21,    42,    23,
      42,    25,    42,    27,   104,     3,     3,     3,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     105,     3,    46,    47,    48,    49,   451,   452,   453,     3,
       3,   369,   457,     3,   496,   497,   105,     3,   105,   501,
      26,     3,    14,     3,    11,   383,   384,   385,    42,   496,
     497,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      72,    78,   118,    46,   300,   403,   404,   405,   406,   407,
     408,   409,   410,   411,     1,   258,     3,   369,   503,   103,
     288,   510,   506,    10,    11,   116,   299,   372,    15,    16,
      17,    18,     3,   374,    21,   280,    23,   284,    25,   110,
      27,   142,   109,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
      47,    48,    49,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,   496,   497,
      -1,    -1,    -1,   501,    51,    52,    53,    54,    55,    56,
      -1,    -1,   510,    -1,    -1,    -1,   103,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,   100,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,   100,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,   115,   116,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   100,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    49,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    49,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    47,    48,    49,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      46,    47,    48,    49,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    46,    47,    48,    49,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    46,    -1,    48,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    34,    35,    36,    37,    38,    39,
      40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   118,   119,     0,     4,     5,     6,     7,    12,
      16,   120,   121,   122,   123,   124,   125,   129,   130,   224,
      43,    43,    43,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,   131,   233,   234,   100,    35,    36,    37,
      38,   226,     3,   119,   132,    99,    43,   126,   127,   128,
     233,   233,   233,   233,   121,     3,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   133,
      43,   101,   102,    99,    99,    99,    99,   135,   103,   103,
     220,   221,   221,   221,   128,    44,    45,    43,    43,     9,
     136,   141,   131,    43,    35,    36,    37,    38,   137,   230,
       8,   142,   143,   104,   104,   138,   233,     1,    10,    11,
      15,    17,    18,    21,    23,    25,    27,    32,    33,    34,
      39,    40,    41,    42,    43,    46,    47,    48,    49,   103,
     144,   145,   146,   147,   148,   149,   150,   151,   160,   161,
     163,   164,   166,   168,   169,   174,   175,   176,   185,   186,
     187,   188,   189,   190,   192,   193,   199,   200,   201,   202,
     210,   211,   222,   223,   224,   225,   231,   232,   233,   234,
       3,    92,    93,    94,    96,    97,    98,   139,   140,   198,
       3,    43,   230,   226,   103,   203,   203,     3,     3,     3,
     193,    46,   187,   233,     3,   145,    46,   231,   233,   233,
     100,   158,   194,   195,   196,   231,     3,    43,    44,    45,
      46,   152,   153,   154,   155,   156,   157,   158,   192,   227,
     228,   231,     3,     3,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,   165,   228,   231,     3,
     203,   106,    99,     3,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    99,   237,
     158,   220,   103,   105,   170,   171,   172,   233,    43,   204,
     205,   206,   207,   208,   209,   227,     3,     3,    19,   212,
     213,   214,    20,   215,   216,   217,    29,   177,   178,   179,
       3,     3,     3,     3,   159,   227,    99,   104,   105,   197,
     105,    99,   158,    42,   105,   167,   167,   167,   167,   167,
     167,   167,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   105,    42,   105,    51,    52,    53,    54,    55,    56,
     229,   229,   229,    42,   167,   229,    43,    46,    48,   191,
     233,   187,    44,    45,   231,    44,    45,   231,    43,    44,
      45,    46,   107,   108,   109,   151,   162,   187,   231,   234,
     235,   227,    99,    43,   134,   158,   233,   192,     3,   105,
      92,   173,    50,   104,   105,   218,   208,    22,   214,   208,
      24,   217,   208,    13,    28,    31,   180,   179,   101,   102,
     227,   196,   198,   156,   158,   227,   233,   233,   233,   233,
     233,   233,   233,    42,    42,    42,    42,    42,    42,    42,
      42,    42,   233,   233,   233,   233,    43,   231,    44,    45,
     231,    44,    45,   231,   233,   233,   227,   203,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,   107,   109,   110,   111,   112,   113,   114,   115,
     116,   236,   236,   236,   158,   158,   227,   236,   158,   227,
     227,   104,     3,   171,   209,   206,    93,    95,   219,     3,
       3,     3,     3,     3,   192,   192,   192,     3,   227,   233,
     233,   233,   233,   233,   233,   233,   233,   233,    43,   231,
      44,    45,   231,    44,    45,   231,   105,   105,   231,   220,
       3,   105,   181,    30,   169,   182,   183,   184,   154,   154,
      14,   192,   196,    26,   184,   191,     3,     3
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (yyscanner, lexer, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, yyscanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, yyscanner, lexer); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, lexer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yyscanner);
  YYUSE (lexer);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yyscanner, lexer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, lexer);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_reduce_print (yyvsp, yyrule, yyscanner, lexer)
    YYSTYPE *yyvsp;
    int yyrule;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , yyscanner, lexer);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, yyscanner, lexer); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yyscanner, lexer)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yyscanner);
  YYUSE (lexer);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (yyscan_t yyscanner, struct lexer_state * const lexer);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (yyscan_t yyscanner, struct lexer_state * const lexer)
#else
int
yyparse (yyscanner, lexer)
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 13:
#line 478 "pir.y"
    { load_library(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 14:
#line 484 "pir.y"
    { set_hll(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 15:
#line 488 "pir.y"
    { set_hll_map(lexer, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 16:
#line 492 "pir.y"
    { set_namespace(lexer, (yyvsp[(3) - (4)].key)); ;}
    break;

  case 17:
#line 496 "pir.y"
    { (yyval.key) = NULL; ;}
    break;

  case 18:
#line 498 "pir.y"
    { (yyval.key) = (yyvsp[(1) - (1)].key); ;}
    break;

  case 19:
#line 502 "pir.y"
    { (yyval.key) = new_key((yyvsp[(1) - (1)].expr)); ;}
    break;

  case 20:
#line 504 "pir.y"
    { (yyval.key) = add_key((yyvsp[(1) - (3)].key), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 21:
#line 508 "pir.y"
    { (yyval.expr) = expr_from_const(new_const(STRING_TYPE, (yyvsp[(1) - (1)].sval))); ;}
    break;

  case 23:
#line 518 "pir.y"
    { new_subr(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 28:
#line 530 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_ANON);;}
    break;

  case 29:
#line 532 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_INIT); ;}
    break;

  case 30:
#line 534 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_LOAD); ;}
    break;

  case 31:
#line 536 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_MAIN); ;}
    break;

  case 32:
#line 538 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_METHOD); ;}
    break;

  case 33:
#line 540 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_LEX); ;}
    break;

  case 34:
#line 542 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_POSTCOMP); ;}
    break;

  case 35:
#line 544 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_IMMEDIATE); ;}
    break;

  case 36:
#line 546 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_MULTI); ;}
    break;

  case 37:
#line 548 "pir.y"
    { set_sub_outer(lexer, (yyvsp[(3) - (4)].sval)); ;}
    break;

  case 38:
#line 550 "pir.y"
    { set_sub_vtable(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 39:
#line 552 "pir.y"
    { set_sub_lexid(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 40:
#line 554 "pir.y"
    { set_sub_instanceof(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 47:
#line 570 "pir.y"
    { add_param(lexer, (yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 48:
#line 574 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 49:
#line 576 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 52:
#line 584 "pir.y"
    { (yyval.ival) = TARGET_FLAG_INVOCANT; ;}
    break;

  case 55:
#line 594 "pir.y"
    { new_statement(lexer); ;}
    break;

  case 57:
#line 599 "pir.y"
    { set_label(lexer, (yyvsp[(1) - (2)].sval)); ;}
    break;

  case 58:
#line 601 "pir.y"
    { set_label(lexer, (yyvsp[(1) - (2)].sval)); ;}
    break;

  case 73:
#line 622 "pir.y"
    {
                           if (lexer->parse_errors > MAX_NUM_ERRORS) {
                               fprintf(stderr, "Too many errors. Compilation aborted.\n");
                               exit(EXIT_FAILURE); /* fix: bail out and free() all memory */
                           }
                           yyerrok;
                         ;}
    break;

  case 74:
#line 632 "pir.y"
    { set_instrf(lexer, "null", "%T", (yyvsp[(2) - (3)].targ)); ;}
    break;

  case 75:
#line 636 "pir.y"
    { set_instrf(lexer, "get_results", "%T", (yyvsp[(2) - (3)].targ)); ;}
    break;

  case 78:
#line 646 "pir.y"
    { /* at this point, TK_IDENT may in fact be a symbol identifier,
                            * not an op, so don't do any checks like is_parrot_op() just yet.
                            */
                           set_instr(lexer, (yyvsp[(1) - (1)].sval));
                           (yyval.sval) = (yyvsp[(1) - (1)].sval);
                         ;}
    break;

  case 79:
#line 655 "pir.y"
    { /* when this rule is activated, the initial identifier must
                           * be a parrot op. Check that, and if not, emit an error message.
                           */
                          char * const instr = get_instr(lexer);
                          if (!is_parrot_op(lexer, instr))
                              yyerror(yyscanner, lexer, "'%s' is not a parrot instruction", instr);
                          else
                              do_strength_reduction(lexer);
                        ;}
    break;

  case 85:
#line 676 "pir.y"
    {
                         /* the "instruction" that was set now appears to be
                          * an identifier; get the name, and check its type.
                          */
                         char * const instr = get_instr(lexer);
                         symbol *sym = find_symbol(lexer, instr);
                         target *obj;

                         /* find the symbol for the object being indexed;
                          * it must have been declared
                          */
                         if (sym == NULL) {
                            yyerror(yyscanner, lexer,
                                    "indexed object '%s' not declared", instr);
                            sym = new_symbol(instr, PMC_TYPE);
                         }
                         else if (sym->type != PMC_TYPE) /* found symbol, now check it's a PMC */
                            yyerror(yyscanner, lexer,
                                    "indexed object '%s' must be of type 'pmc'", instr);

                         /* convert the symbol into a target */
                         obj = target_from_symbol(sym);

                         /* set the key on the target */
                         set_target_key(obj, (yyvsp[(1) - (3)].key));
                         /* indexed operation is a "set" opcode */
                         set_instrf(lexer, "set", "%T%E", obj, (yyvsp[(3) - (3)].expr));
                       ;}
    break;

  case 86:
#line 707 "pir.y"
    { push_operand(lexer, (yyvsp[(1) - (1)].expr)); ;}
    break;

  case 87:
#line 709 "pir.y"
    { push_operand(lexer, expr_from_key((yyvsp[(1) - (1)].key))); ;}
    break;

  case 88:
#line 711 "pir.y"
    { push_operand(lexer, expr_from_target((yyvsp[(1) - (1)].targ))); ;}
    break;

  case 89:
#line 715 "pir.y"
    {
                           /* if $1 is a register, just return that */
                           if (TEST_FLAG((yyvsp[(1) - (2)].targ)->flags, TARGET_FLAG_IS_REG))
                               (yyval.targ) = (yyvsp[(1) - (2)].targ);
                           else { /* it's not a register, so it must be a declared symbol */
                               symbol *sym = find_symbol(lexer, target_name((yyvsp[(1) - (2)].targ)));
                               if (sym == NULL) {
                                   yyerror(yyscanner, lexer,
                                           "indexed object '%s' not declared", target_name((yyvsp[(1) - (2)].targ)));
                                   /* make sure sym is a valid pointer */
                                   sym = new_symbol(target_name((yyvsp[(1) - (2)].targ)), PMC_TYPE);
                               }
                               else if (sym->type != PMC_TYPE)
                                   yyerror(yyscanner, lexer,
                                           "indexed object '%s' is not of type 'pmc'",
                                           target_name((yyvsp[(1) - (2)].targ)));

                               /* create a target node based on the symbol node;
                                * sym already has a PASM register, so through
                                * this the target will get that too.
                                */
                               (yyval.targ) = target_from_symbol(sym);
                           }

                           /* in both cases (register or symbol), set the key on this target */
                           set_target_key((yyval.targ), (yyvsp[(2) - (2)].key));
                         ;}
    break;

  case 90:
#line 745 "pir.y"
    { (yyval.key) = (yyvsp[(2) - (3)].key); ;}
    break;

  case 91:
#line 749 "pir.y"
    { (yyval.key) = new_key((yyvsp[(1) - (1)].expr)); ;}
    break;

  case 92:
#line 751 "pir.y"
    { (yyval.key) = add_key((yyvsp[(1) - (3)].key), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 94:
#line 759 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instrf(lexer, "null", "%T", (yyvsp[(1) - (3)].targ));
                          else
                              set_instrf(lexer, "set", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));
                        ;}
    break;

  case 95:
#line 766 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instrf(lexer, "null", "%T", (yyvsp[(1) - (3)].targ));
                          else
                              set_instrf(lexer, "set", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));
                        ;}
    break;

  case 96:
#line 773 "pir.y"
    { set_instrf(lexer, "set", "%T%s", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 97:
#line 775 "pir.y"
    { unshift_operand(lexer, expr_from_target((yyvsp[(1) - (3)].targ))); ;}
    break;

  case 98:
#line 777 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (3)].sval));
                          if (sym == NULL) {
                              if (!is_parrot_op(lexer, (yyvsp[(3) - (3)].sval)))
                                  yyerror(yyscanner, lexer, "'%s' is neither a declared symbol "
                                                            "nor a parrot opcode", (yyvsp[(3) - (3)].sval));
                              else /* handle it as an op */
                                  unshift_operand(lexer, expr_from_target((yyvsp[(1) - (3)].targ)));
                          }
                          else /* handle it as a symbol */
                              set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (3)].targ), target_from_symbol(sym));

                        ;}
    break;

  case 99:
#line 791 "pir.y"
    {
                          if (!is_parrot_op(lexer, (yyvsp[(3) - (6)].sval)))
                              yyerror(yyscanner, lexer, "'%s' is not a parrot op", (yyvsp[(3) - (6)].sval));
                          else {
                              unshift_operand(lexer, (yyvsp[(4) - (6)].expr));
                              unshift_operand(lexer, expr_from_target((yyvsp[(1) - (6)].targ)));
                              do_strength_reduction(lexer);
                          }
                        ;}
    break;

  case 100:
#line 801 "pir.y"
    {
                          if (!is_parrot_op(lexer, (yyvsp[(3) - (4)].sval)))
                              yyerror(yyscanner, lexer, "'%s' is not a parrot op", (yyvsp[(3) - (4)].sval));
                          else {
                              set_instrf(lexer, (yyvsp[(3) - (4)].sval), "%T%E", (yyvsp[(1) - (4)].targ), (yyvsp[(4) - (4)].expr));
                              do_strength_reduction(lexer);
                          }
                        ;}
    break;

  case 101:
#line 810 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (4)].sval));
                          target *t;
                          if (sym == NULL) {
                              if (is_parrot_op(lexer, (yyvsp[(3) - (4)].sval)))
                                  set_instrf(lexer, (yyvsp[(3) - (4)].sval), "%T%E", (yyvsp[(1) - (4)].targ), expr_from_key((yyvsp[(4) - (4)].key)));
                              else
                                  yyerror(yyscanner, lexer, "indexed object '%s' not declared", (yyvsp[(3) - (4)].sval));

                              /* create a symbol node anyway, so we can continue with instr. gen. */
                              sym = new_symbol((yyvsp[(3) - (4)].sval), PMC_TYPE);
                          }
                          /* at this point, sym is not NULL, even if there was an error */
                          if (sym->type != PMC_TYPE)
                              yyerror(yyscanner, lexer,
                                      "indexed object '%s' must be of type 'pmc'", (yyvsp[(3) - (4)].sval));

                          t = target_from_symbol(sym);
                          set_target_key(t, (yyvsp[(4) - (4)].key));
                          set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (4)].targ), t);

                        ;}
    break;

  case 102:
#line 833 "pir.y"
    {
                          unshift_operand(lexer, expr_from_key((yyvsp[(4) - (6)].key)));
                          unshift_operand(lexer, expr_from_target((yyvsp[(1) - (6)].targ)));
                        ;}
    break;

  case 103:
#line 838 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (4)].sval));
                          target *t;

                          if (sym == NULL) {
                              yyerror(yyscanner, lexer, "indexed object '%s' not declared", (yyvsp[(3) - (4)].sval));
                              sym = new_symbol((yyvsp[(3) - (4)].sval), PMC_TYPE);
                          }
                          else if (sym->type != PMC_TYPE)
                              yyerror(yyscanner, lexer,
                                      "indexed object '%s' must be of type 'pmc'", (yyvsp[(3) - (4)].sval));

                          t = target_from_symbol(sym);
                          set_target_key(t, (yyvsp[(4) - (4)].key));
                          set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (4)].targ), t);
                        ;}
    break;

  case 104:
#line 855 "pir.y"
    {
                          target *preg = reg(lexer, PMC_TYPE, (yyvsp[(3) - (4)].ival));
                          set_target_key(preg, (yyvsp[(4) - (4)].key));
                          set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (4)].targ), preg);
                        ;}
    break;

  case 105:
#line 861 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%T%E", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 106:
#line 863 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 1)
                              set_instrf(lexer, "inc", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "add", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));
                        ;}
    break;

  case 107:
#line 872 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 1.0)
                              set_instrf(lexer, "inc", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "add", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));
                        ;}
    break;

  case 108:
#line 881 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 1)
                              set_instrf(lexer, "dec", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "sub", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));
                        ;}
    break;

  case 109:
#line 890 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 1.0)
                              set_instrf(lexer, "dec", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "sub", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));
                        ;}
    break;

  case 110:
#line 899 "pir.y"
    { set_instrf(lexer, "add", "%T%T", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 111:
#line 901 "pir.y"
    { set_instrf(lexer, "sub", "%T%T", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 112:
#line 903 "pir.y"
    { set_instrf(lexer, (yyvsp[(3) - (4)].sval), "%T%E", (yyvsp[(1) - (4)].targ), (yyvsp[(4) - (4)].expr)); ;}
    break;

  case 113:
#line 905 "pir.y"
    {
                          if (targets_equal((yyvsp[(1) - (5)].targ), (yyvsp[(3) - (5)].targ))) /* $P0 = $P0 + $P1 ==> $P0 += $P1 */
                              set_instrf(lexer, opnames[(yyvsp[(4) - (5)].ival)], "%T%T", (yyvsp[(1) - (5)].targ), (yyvsp[(5) - (5)].targ));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(4) - (5)].ival)], "%T%T%T", (yyvsp[(1) - (5)].targ), (yyvsp[(3) - (5)].targ), (yyvsp[(5) - (5)].targ));
                        ;}
    break;

  case 114:
#line 912 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(1) - (4)].sval));
                          target *t;

                          if (sym == NULL) {
                              yyerror(yyscanner, lexer, "indexed object '%s' not declared", (yyvsp[(1) - (4)].sval));
                              /* create a dummy symbol so we can continue without seg. faults */
                              sym = new_symbol((yyvsp[(1) - (4)].sval), PMC_TYPE);
                          }
                          else if (sym->type != PMC_TYPE)
                              yyerror(yyscanner, lexer,
                                      "indexed object '%s' must be of type 'pmc'", (yyvsp[(1) - (4)].sval));
                          /* at this point sym is a valid (possibly dummy) object for sure */
                          t = target_from_symbol(sym);
                          set_target_key(t, (yyvsp[(2) - (4)].key));
                          set_instrf(lexer, "set", "%T%E", t, (yyvsp[(4) - (4)].expr));
                      ;}
    break;

  case 115:
#line 930 "pir.y"
    {
                          target *preg = reg(lexer, PMC_TYPE, (yyvsp[(1) - (4)].ival));
                          set_target_key(preg, (yyvsp[(2) - (4)].key));
                          set_instrf(lexer, "set", "%T%E", preg, (yyvsp[(4) - (4)].expr));
                        ;}
    break;

  case 116:
#line 963 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%i%T", (yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 117:
#line 965 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%n%T", (yyvsp[(1) - (3)].dval), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 118:
#line 967 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%s%T", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 119:
#line 969 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_s_s(yyscanner, (yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].sval))); ;}
    break;

  case 120:
#line 971 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_i_i(yyscanner, (yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival))); ;}
    break;

  case 121:
#line 973 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_n_n(yyscanner, (yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval))); ;}
    break;

  case 122:
#line 975 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_i_n(yyscanner, (yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval))); ;}
    break;

  case 123:
#line 977 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_n_i(yyscanner, (yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival))); ;}
    break;

  case 125:
#line 990 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, (yyvsp[(3) - (5)].sval), (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 126:
#line 992 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "int", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 127:
#line 994 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "num", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 128:
#line 996 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "pmc", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 129:
#line 998 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "string", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 130:
#line 1000 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "if", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 131:
#line 1002 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "unless", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 132:
#line 1004 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "goto", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 133:
#line 1006 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "null", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 134:
#line 1008 "pir.y"
    {
                          int istrue = evaluate_c((yyvsp[(2) - (4)].cval));
                          /* if "unless", invert the true-ness */
                          istrue = (yyvsp[(1) - (4)].ival) ? !istrue : istrue;
                          if (istrue)
                              set_instrf(lexer, "branch", "%I", (yyvsp[(4) - (4)].sval));
                          else
                              set_instr(lexer, "noop");
                        ;}
    break;

  case 135:
#line 1018 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 136:
#line 1020 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "int", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 137:
#line 1022 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "num", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 138:
#line 1024 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "pmc", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 139:
#line 1026 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "string", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 140:
#line 1028 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "if", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 141:
#line 1030 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "unless", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 142:
#line 1032 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "goto", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 143:
#line 1034 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "goto", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 144:
#line 1036 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "null", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 145:
#line 1038 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "null", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 146:
#line 1040 "pir.y"
    {
                          if ((yyvsp[(2) - (4)].ival) == -1) { /* -1 means the condition is evaluated during runtime */
                             if ((yyvsp[(1) - (4)].ival)) /* "unless"? if so, invert the instruction. */
                                 invert_instr(lexer);

                             push_operand(lexer, expr_from_ident((yyvsp[(4) - (4)].sval)));
                          }
                          else { /* evaluation during compile time */
                             /* if the result was false but the instr. was "unless", or,
                              * if the result was true and the instr. was "if",
                              * do an unconditional jump.
                              */
                             if ( (((yyvsp[(2) - (4)].ival) == 0) && (yyvsp[(1) - (4)].ival)) || (((yyvsp[(2) - (4)].ival) == 1) && !(yyvsp[(1) - (4)].ival)) )
                                set_instrf(lexer, "branch", "%I", (yyvsp[(4) - (4)].sval));
                             else
                                set_instr(lexer, "noop");

                          }
                        ;}
    break;

  case 147:
#line 1066 "pir.y"
    {
                          set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%T%E", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].expr));
                          (yyval.ival) = -1;  /* -1 indicates this is evaluated at runtime */
                        ;}
    break;

  case 148:
#line 1071 "pir.y"
    {
                          set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%i%T", (yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].targ));
                          (yyval.ival) = -1;
                        ;}
    break;

  case 149:
#line 1076 "pir.y"
    {
                          set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%n%T", (yyvsp[(1) - (3)].dval), (yyvsp[(3) - (3)].targ));
                          (yyval.ival) = -1;
                        ;}
    break;

  case 150:
#line 1081 "pir.y"
    {
                          set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%s%T", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].targ));
                          (yyval.ival) = -1;
                        ;}
    break;

  case 151:
#line 1086 "pir.y"
    { (yyval.ival) = evaluate_i_i((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival)); ;}
    break;

  case 152:
#line 1088 "pir.y"
    { (yyval.ival) = evaluate_i_n((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval)); ;}
    break;

  case 153:
#line 1090 "pir.y"
    { (yyval.ival) = evaluate_n_i((yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival)); ;}
    break;

  case 154:
#line 1092 "pir.y"
    { (yyval.ival) = evaluate_n_n((yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval)); ;}
    break;

  case 155:
#line 1094 "pir.y"
    { (yyval.ival) = evaluate_s_s((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 156:
#line 1097 "pir.y"
    { (yyval.ival) = 0; /* no need to invert */ ;}
    break;

  case 157:
#line 1098 "pir.y"
    { (yyval.ival) = 1; /* yes, invert opname */ ;}
    break;

  case 160:
#line 1106 "pir.y"
    { set_instrf(lexer, "branch", "%I", (yyvsp[(2) - (3)].sval)); ;}
    break;

  case 161:
#line 1110 "pir.y"
    { declare_local(lexer, (yyvsp[(2) - (4)].ival), (yyvsp[(3) - (4)].symb)); ;}
    break;

  case 162:
#line 1114 "pir.y"
    { (yyval.symb) = (yyvsp[(1) - (1)].symb); ;}
    break;

  case 163:
#line 1116 "pir.y"
    { (yyval.symb) = add_local((yyvsp[(1) - (3)].symb), (yyvsp[(3) - (3)].symb)); ;}
    break;

  case 164:
#line 1120 "pir.y"
    { (yyval.symb) = new_local((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 165:
#line 1124 "pir.y"
    { /* try to find symbol for this id; if found, it was already declared */
                          symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                          if (sym)
                              yyerror(yyscanner, lexer, "symbol '%s' is already declared", (yyvsp[(1) - (1)].sval));
                          (yyval.sval) = (yyvsp[(1) - (1)].sval);
                        ;}
    break;

  case 166:
#line 1132 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 167:
#line 1133 "pir.y"
    { (yyval.ival) = 1; ;}
    break;

  case 168:
#line 1137 "pir.y"
    { /* if $4 is not a register, it must be a declared symbol */
                          if (!TEST_FLAG((yyvsp[(4) - (5)].targ)->flags, TARGET_FLAG_IS_REG)) {
                              symbol *sym = find_symbol(lexer, target_name((yyvsp[(4) - (5)].targ)));

                              if (sym == NULL) /* check declaration */
                                  yyerror(yyscanner, lexer, "lexical '%s' is not declared",
                                          target_name((yyvsp[(4) - (5)].targ)));
                              else if (sym->type != PMC_TYPE) /* a .lex must be a PMC */
                                  yyerror(yyscanner, lexer, "lexical '%s' must be of type 'pmc'",
                                          target_name((yyvsp[(4) - (5)].targ)));
                          }
                          set_lex_flag((yyvsp[(4) - (5)].targ), (yyvsp[(2) - (5)].sval));
                        ;}
    break;

  case 171:
#line 1164 "pir.y"
    { /* $4 contains an invocation object */
                              set_invocation_args((yyvsp[(4) - (8)].invo), (yyvsp[(3) - (8)].argm));
                              set_invocation_results((yyvsp[(4) - (8)].invo), (yyvsp[(6) - (8)].targ));
                            ;}
    break;

  case 172:
#line 1171 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 173:
#line 1173 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 174:
#line 1177 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 175:
#line 1179 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 176:
#line 1183 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 177:
#line 1187 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_PCC, (yyvsp[(2) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 178:
#line 1189 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_NCI, (yyvsp[(2) - (2)].targ)); ;}
    break;

  case 179:
#line 1192 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_METHOD, (yyvsp[(2) - (5)].targ), (yyvsp[(5) - (5)].targ)); ;}
    break;

  case 180:
#line 1196 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 181:
#line 1198 "pir.y"
    { (yyval.targ) = (yyvsp[(2) - (2)].targ); ;}
    break;

  case 182:
#line 1202 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 183:
#line 1204 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 184:
#line 1208 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 185:
#line 1210 "pir.y"
    { (yyval.targ) = add_target(lexer, (yyvsp[(1) - (2)].targ), (yyvsp[(2) - (2)].targ)); ;}
    break;

  case 186:
#line 1214 "pir.y"
    { (yyval.targ) = (yyvsp[(2) - (3)].targ); ;}
    break;

  case 187:
#line 1216 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 189:
#line 1224 "pir.y"
    { set_invocation_results((yyvsp[(3) - (3)].invo), (yyvsp[(1) - (3)].targ)); ;}
    break;

  case 190:
#line 1226 "pir.y"
    { set_invocation_results((yyvsp[(3) - (3)].invo), (yyvsp[(1) - (3)].targ)); ;}
    break;

  case 191:
#line 1228 "pir.y"
    { set_invocation_results((yyvsp[(1) - (1)].invo), NULL); ;}
    break;

  case 194:
#line 1236 "pir.y"
    {
                             /* if $1 is not a register, check whether the symbol was declared */
                             if (!TEST_FLAG((yyvsp[(1) - (4)].targ)->flags, TARGET_FLAG_IS_REG)) {
                                 symbol *sym = find_symbol(lexer, target_name((yyvsp[(1) - (4)].targ)));
                                 if (sym == NULL)
                                     yyerror(yyscanner, lexer, "object '%s' not declared",
                                             target_name((yyvsp[(1) - (4)].targ)));

                                 else if (sym->type != PMC_TYPE)
                                     yyerror(yyscanner, lexer,
                                             "cannot invoke method: '%s' is not of type 'pmc'",
                                             target_name((yyvsp[(1) - (4)].targ)));
                             }

                             (yyval.invo) = invoke(lexer, CALL_METHOD, (yyvsp[(1) - (4)].targ), (yyvsp[(3) - (4)].targ));
                             set_invocation_args((yyval.invo), (yyvsp[(4) - (4)].argm));
                           ;}
    break;

  case 195:
#line 1256 "pir.y"
    {
                             (yyval.invo) = invoke(lexer, CALL_PCC, (yyvsp[(1) - (2)].targ), NULL);
                             set_invocation_args((yyval.invo), (yyvsp[(2) - (2)].argm));
                           ;}
    break;

  case 196:
#line 1263 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 197:
#line 1265 "pir.y"
    { (yyval.targ) = target_from_string((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 198:
#line 1269 "pir.y"
    { /* check that this identifier was declared */
                             symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));

                             if (sym == NULL) {
                                yyerror(yyscanner, lexer,
                                        "method identifier '%s' not declared", (yyvsp[(1) - (1)].sval));
                                /* make sure sym is not NULL */
                                sym = new_symbol((yyvsp[(1) - (1)].sval), PMC_TYPE);
                             }
                             else if (sym->type != PMC_TYPE && sym->type != STRING_TYPE)
                                 yyerror(yyscanner, lexer,
                                         "method '%s' must be of type 'pmc' or 'string'", (yyvsp[(1) - (1)].sval));

                             (yyval.targ) = target_from_symbol(sym);
                           ;}
    break;

  case 199:
#line 1285 "pir.y"
    { (yyval.targ) = reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 200:
#line 1287 "pir.y"
    { (yyval.targ) = reg(lexer, STRING_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 201:
#line 1289 "pir.y"
    { (yyval.targ) = target_from_string((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 202:
#line 1293 "pir.y"
    { (yyval.targ) = target_from_ident(PMC_TYPE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 203:
#line 1295 "pir.y"
    { (yyval.targ) = reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 204:
#line 1300 "pir.y"
    { (yyval.targ) = (yyvsp[(2) - (3)].targ); ;}
    break;

  case 205:
#line 1304 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 206:
#line 1306 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 207:
#line 1310 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 208:
#line 1312 "pir.y"
    { (yyval.targ) = add_target(lexer, (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 209:
#line 1316 "pir.y"
    { (yyval.targ) = set_param_flag((yyvsp[(1) - (2)].targ), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 210:
#line 1320 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 211:
#line 1322 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 212:
#line 1326 "pir.y"
    { (yyval.ival) = TARGET_FLAG_OPTIONAL; ;}
    break;

  case 213:
#line 1328 "pir.y"
    { (yyval.ival) = TARGET_FLAG_OPT_FLAG; ;}
    break;

  case 214:
#line 1330 "pir.y"
    { (yyval.ival) = TARGET_FLAG_SLURPY; ;}
    break;

  case 215:
#line 1332 "pir.y"
    { (yyval.ival) = TARGET_FLAG_UNIQUE_REG; ;}
    break;

  case 216:
#line 1334 "pir.y"
    {
                             (yyval.ival) = TARGET_FLAG_NAMED;
                             set_param_alias(lexer, (yyvsp[(2) - (2)].sval));
                           ;}
    break;

  case 221:
#line 1352 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_RETURN);
                              set_invocation_args((yyval.invo), (yyvsp[(2) - (3)].argm));
                            ;}
    break;

  case 222:
#line 1357 "pir.y"
    { /* was the invocation a method call? then it becomes a method tail call,
                               * otherwise it's just a normal (sub) tail call.
                               */
                              set_invocation_type((yyvsp[(2) - (3)].invo), ((yyvsp[(2) - (3)].invo)->type == CALL_METHOD)
                                                      ? CALL_METHOD_TAILCALL
                                                      : CALL_TAILCALL);
                            ;}
    break;

  case 223:
#line 1367 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_YIELD);
                              set_invocation_args((yyval.invo), (yyvsp[(2) - (3)].argm));
                            ;}
    break;

  case 224:
#line 1374 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 225:
#line 1378 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 226:
#line 1380 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 227:
#line 1384 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 228:
#line 1386 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (3)].argm), (yyvsp[(3) - (3)].argm)); ;}
    break;

  case 231:
#line 1394 "pir.y"
    { (yyval.argm) = set_arg_alias(lexer, (yyvsp[(1) - (3)].sval)); ;}
    break;

  case 232:
#line 1398 "pir.y"
    { (yyval.argm) = set_arg_flag((yyval.argm), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 233:
#line 1402 "pir.y"
    { (yyval.argm) = set_curarg(lexer, new_argument((yyvsp[(1) - (1)].expr)));  ;}
    break;

  case 234:
#line 1408 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_RETURN);
                              set_invocation_args((yyval.invo), (yyvsp[(3) - (5)].argm));
                            ;}
    break;

  case 235:
#line 1417 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_YIELD);
                              set_invocation_args((yyval.invo), (yyvsp[(3) - (5)].argm));
                            ;}
    break;

  case 236:
#line 1424 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 237:
#line 1426 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 238:
#line 1431 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 239:
#line 1433 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 240:
#line 1438 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 241:
#line 1442 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 242:
#line 1444 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 243:
#line 1448 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 244:
#line 1450 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 245:
#line 1454 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 246:
#line 1459 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 247:
#line 1461 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 248:
#line 1465 "pir.y"
    { (yyval.ival) = ARG_FLAG_FLAT; ;}
    break;

  case 249:
#line 1467 "pir.y"
    {
                               (yyval.ival) = ARG_FLAG_NAMED;
                               set_arg_alias(lexer, (yyvsp[(2) - (2)].sval));
                             ;}
    break;

  case 250:
#line 1474 "pir.y"
    { (yyval.sval) = NULL; ;}
    break;

  case 251:
#line 1476 "pir.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 252:
#line 1480 "pir.y"
    { (yyval.sval) = (yyvsp[(2) - (3)].sval); ;}
    break;

  case 256:
#line 1491 "pir.y"
    { store_global_const(lexer, (yyvsp[(2) - (2)].cval)); ;}
    break;

  case 257:
#line 1495 "pir.y"
    { /* XXX is .globalconst to be kept? */ ;}
    break;

  case 258:
#line 1499 "pir.y"
    { (yyval.cval) = new_named_const(INT_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].ival)); ;}
    break;

  case 259:
#line 1501 "pir.y"
    { (yyval.cval) = new_named_const(NUM_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].dval)); ;}
    break;

  case 260:
#line 1503 "pir.y"
    { (yyval.cval) = new_named_const(STRING_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 261:
#line 1505 "pir.y"
    { (yyval.cval) = new_named_const(PMC_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 262:
#line 1521 "pir.y"
    { (yyval.expr) = expr_from_target((yyvsp[(1) - (1)].targ)); ;}
    break;

  case 263:
#line 1522 "pir.y"
    { (yyval.expr) = expr_from_const((yyvsp[(1) - (1)].cval)); ;}
    break;

  case 264:
#line 1526 "pir.y"
    { (yyval.cval) = new_const(STRING_TYPE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 265:
#line 1527 "pir.y"
    { (yyval.cval) = new_const(INT_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 266:
#line 1528 "pir.y"
    { (yyval.cval) = new_const(NUM_TYPE, (yyvsp[(1) - (1)].dval)); ;}
    break;

  case 267:
#line 1531 "pir.y"
    { (yyval.ival) = OP_NE; ;}
    break;

  case 268:
#line 1532 "pir.y"
    { (yyval.ival) = OP_EQ; ;}
    break;

  case 269:
#line 1533 "pir.y"
    { (yyval.ival) = OP_LT; ;}
    break;

  case 270:
#line 1534 "pir.y"
    { (yyval.ival) = OP_LE; ;}
    break;

  case 271:
#line 1535 "pir.y"
    { (yyval.ival) = OP_GE; ;}
    break;

  case 272:
#line 1536 "pir.y"
    { (yyval.ival) = OP_GT; ;}
    break;

  case 273:
#line 1539 "pir.y"
    { (yyval.ival) = INT_TYPE; ;}
    break;

  case 274:
#line 1540 "pir.y"
    { (yyval.ival) = NUM_TYPE; ;}
    break;

  case 275:
#line 1541 "pir.y"
    { (yyval.ival) = PMC_TYPE; ;}
    break;

  case 276:
#line 1542 "pir.y"
    { (yyval.ival) = STRING_TYPE; ;}
    break;

  case 277:
#line 1550 "pir.y"
    { set_curtarget(lexer, (yyvsp[(1) - (1)].targ));  ;}
    break;

  case 278:
#line 1553 "pir.y"
    { (yyval.targ) = reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 279:
#line 1554 "pir.y"
    { (yyval.targ) = reg(lexer, NUM_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 280:
#line 1555 "pir.y"
    { (yyval.targ) = reg(lexer, INT_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 281:
#line 1556 "pir.y"
    { (yyval.targ) = reg(lexer, STRING_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 282:
#line 1557 "pir.y"
    { /* a symbol must have been declared; check that at this point. */
                           symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                           if (sym == NULL) {
                               yyerror(yyscanner, lexer, "symbol '%s' not declared", (yyvsp[(1) - (1)].sval));

                               /* make sure sym is not NULL */
                               sym = new_symbol((yyvsp[(1) - (1)].sval), UNKNOWN_TYPE);
                           }
                           (yyval.targ) = target_from_symbol(sym);

                         ;}
    break;

  case 285:
#line 1575 "pir.y"
    { (yyval.sval) = "if"; ;}
    break;

  case 286:
#line 1576 "pir.y"
    { (yyval.sval) = "unless"; ;}
    break;

  case 287:
#line 1577 "pir.y"
    { (yyval.sval) = "goto"; ;}
    break;

  case 288:
#line 1578 "pir.y"
    { (yyval.sval) = "int"; ;}
    break;

  case 289:
#line 1579 "pir.y"
    { (yyval.sval) = "num"; ;}
    break;

  case 290:
#line 1580 "pir.y"
    { (yyval.sval) = "string"; ;}
    break;

  case 291:
#line 1581 "pir.y"
    { (yyval.sval) = "pmc"; ;}
    break;

  case 292:
#line 1582 "pir.y"
    { (yyval.sval) = "null"; ;}
    break;

  case 293:
#line 1585 "pir.y"
    { (yyval.sval) = "neg"; ;}
    break;

  case 294:
#line 1586 "pir.y"
    { (yyval.sval) = "not"; ;}
    break;

  case 295:
#line 1587 "pir.y"
    { (yyval.sval) = "bnot"; ;}
    break;

  case 296:
#line 1590 "pir.y"
    { (yyval.ival) = OP_ADD; ;}
    break;

  case 297:
#line 1591 "pir.y"
    { (yyval.ival) = OP_SUB; ;}
    break;

  case 298:
#line 1592 "pir.y"
    { (yyval.ival) = OP_DIV; ;}
    break;

  case 299:
#line 1593 "pir.y"
    { (yyval.ival) = OP_MUL; ;}
    break;

  case 300:
#line 1594 "pir.y"
    { (yyval.ival) = OP_MOD; ;}
    break;

  case 301:
#line 1595 "pir.y"
    { (yyval.ival) = OP_BOR; ;}
    break;

  case 302:
#line 1596 "pir.y"
    { (yyval.ival) = OP_BAND; ;}
    break;

  case 303:
#line 1597 "pir.y"
    { (yyval.ival) = OP_BXOR; ;}
    break;

  case 304:
#line 1598 "pir.y"
    { (yyval.ival) = OP_POW; ;}
    break;

  case 305:
#line 1599 "pir.y"
    { (yyval.ival) = OP_CONCAT; ;}
    break;

  case 306:
#line 1600 "pir.y"
    { (yyval.ival) = OP_LSR; ;}
    break;

  case 307:
#line 1601 "pir.y"
    { (yyval.ival) = OP_SHR; ;}
    break;

  case 308:
#line 1602 "pir.y"
    { (yyval.ival) = OP_SHL; ;}
    break;

  case 309:
#line 1603 "pir.y"
    { (yyval.ival) = OP_OR; ;}
    break;

  case 310:
#line 1604 "pir.y"
    { (yyval.ival) = OP_AND; ;}
    break;

  case 311:
#line 1605 "pir.y"
    { (yyval.ival) = OP_FDIV; ;}
    break;

  case 312:
#line 1606 "pir.y"
    { (yyval.ival) = OP_XOR; ;}
    break;

  case 313:
#line 1607 "pir.y"
    { (yyval.ival) = OP_ISEQ; ;}
    break;

  case 314:
#line 1608 "pir.y"
    { (yyval.ival) = OP_ISLE; ;}
    break;

  case 315:
#line 1609 "pir.y"
    { (yyval.ival) = OP_ISLT; ;}
    break;

  case 316:
#line 1610 "pir.y"
    { (yyval.ival) = OP_ISGE; ;}
    break;

  case 317:
#line 1611 "pir.y"
    { (yyval.ival) = OP_ISGT; ;}
    break;

  case 318:
#line 1612 "pir.y"
    { (yyval.ival) = OP_ISNE; ;}
    break;

  case 319:
#line 1618 "pir.y"
    { (yyval.ival) = OP_MUL; ;}
    break;

  case 320:
#line 1619 "pir.y"
    { (yyval.ival) = OP_MOD; ;}
    break;

  case 321:
#line 1620 "pir.y"
    { (yyval.ival) = OP_POW; ;}
    break;

  case 322:
#line 1621 "pir.y"
    { (yyval.ival) = OP_DIV; ;}
    break;

  case 323:
#line 1622 "pir.y"
    { (yyval.ival) = OP_FDIV; ;}
    break;

  case 324:
#line 1623 "pir.y"
    { (yyval.ival) = OP_BOR; ;}
    break;

  case 325:
#line 1624 "pir.y"
    { (yyval.ival) = OP_BAND; ;}
    break;

  case 326:
#line 1625 "pir.y"
    { (yyval.ival) = OP_BXOR; ;}
    break;

  case 327:
#line 1626 "pir.y"
    { (yyval.ival) = OP_CONCAT; ;}
    break;

  case 328:
#line 1627 "pir.y"
    { (yyval.ival) = OP_SHR; ;}
    break;

  case 329:
#line 1628 "pir.y"
    { (yyval.ival) = OP_SHL; ;}
    break;

  case 330:
#line 1629 "pir.y"
    { (yyval.ival) = OP_LSR; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3997 "pirparser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (yyscanner, lexer, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yyscanner, lexer, yymsg);
	  }
	else
	  {
	    yyerror (yyscanner, lexer, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, yyscanner, lexer);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yyscanner, lexer);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (yyscanner, lexer, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, yyscanner, lexer);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yyscanner, lexer);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1632 "pir.y"


#include <math.h>
#include <assert.h>

/*

=head1 FUNCTIONS

=over 4

=item C<static constant *
fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b)>

Evaluates the expression C<a op b> and returns a constant node
containing the result value. Both C<a> and C<b> are integer values.

=cut

*/
static constant *
fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b) {
    int result;

    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yyerror(yyscanner, yyget_extra(yyscanner), "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
            result = a % b;
            break;
        case OP_BOR:
            result = (a | b);
            break;
        case OP_BAND:
            result = (a & b);
            break;
        case OP_BXOR:
            result = (a ^ b);
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_CONCAT:
            yyerror(yyscanner, yyget_extra(yyscanner),
                    "cannot concatenate operands of type 'int' and 'int'");
            break;
        case OP_LSR:
            /* from bits.ops: $1 = (INTVAL)((UINTVAL)$2 >> $3); */
            result = (int)((unsigned)a >> b);
            break;
        case OP_SHR:
            result = a >> b;
            break;
        case OP_SHL:
            result = a << b;
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            /* 7 // 2 -> 3, this is what integer division does (rounding down to whole integers) */
            result = a / b;
            break;
        case OP_XOR:
            result = a ^ b;
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        case OP_INC:
        case OP_DEC:
            panic("detected 'inc' or 'dec' in fold_i_i()");
            break;
    }
    return new_const(INT_TYPE, result);
}

/*

=item C<static constant *
fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b)>

Same as C<fold_i_i>, except C<a> is of type double.

=cut

*/
static constant *
fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b) {
    double result;
    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yyerror(yyscanner, yyget_extra(yyscanner), "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_SHR:
        case OP_SHL:
        case OP_LSR:
        case OP_XOR:
        case OP_CONCAT:
            yyerror(yyscanner, yyget_extra(yyscanner),
                    "cannot apply binary operator '%s' to types 'num' and 'int'", opnames[op]);
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        case OP_INC:
        case OP_DEC:
            panic("detected 'inc' or 'dec' in fold_n_i()");
            break;
    }
    return new_const(NUM_TYPE, result);
}

/*

=item C<static constant *
fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b)>

Same as C<fold_i_i>, except C<b> is of type double.

=cut

*/
static constant *
fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b) {
    double result;

    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yyerror(yyscanner, yyget_extra(yyscanner), "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
        case OP_CONCAT:
            yyerror(yyscanner, yyget_extra(yyscanner),
                    "cannot apply binary operator '%s' to types 'int' and 'num'", opnames[op]);
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        case OP_INC:
        case OP_DEC:
            panic("detected 'inc' or 'dec' in fold_i_n()");
            break;
    }
    return new_const(NUM_TYPE, result);
}

/*

=item C<static constant *
fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b)>

Same as C<fold_i_i>, except that both C<a> and C<b> are of type double.

=cut

*/
static constant *
fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b) {
    double result;
    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0) /* throw exception ? */
                yyerror(yyscanner, yyget_extra(yyscanner), "cannot divide by 0");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_CONCAT:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
            yyerror(yyscanner, yyget_extra(yyscanner),
                    "cannot apply binary operator '%s' to arguments of type number", opnames[op]);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            if (b == 0)
                yyerror(yyscanner, yyget_extra(yyscanner), "cannot divide by 0");
            else
                result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        case OP_INC:
        case OP_DEC:
            break;
    }
    return new_const(NUM_TYPE, result);
}

/*

=item C<static constant *
fold_s_s(yyscan_t yyscanner, char *a, pir_math_operator op, char *b)>

Evaluate the expression C<a op b>, where both C<a> and C<b> are
strings. Only the concatenation and comparison operators are implemented;
other operators will result in an error.

=cut

*/
static constant *
fold_s_s(yyscan_t yyscanner, char *a, pir_math_operator op, char *b) {
    switch (op) {
        case OP_CONCAT:
            return new_const(STRING_TYPE, concat_strings(a, b));

        case OP_ADD:
        case OP_SUB:
        case OP_DIV:
        case OP_MUL:
        case OP_POW:
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
        case OP_OR:
        case OP_AND:
        case OP_FDIV:
            yyerror(yyscanner, yyget_extra(yyscanner),
                    "cannot apply binary operator '%s' to arguments of type number", opnames[op]);
            return new_const(STRING_TYPE, a);

        case OP_ISEQ:
        case OP_ISLE:
        case OP_ISLT:
        case OP_ISGE:
        case OP_ISGT:
        case OP_ISNE:
            return new_const(INT_TYPE, (1 == evaluate_s_s(a, op, b)));


        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        case OP_INC:
        case OP_DEC:
            panic("detected 'inc' or 'dec' in fold_s_s()");
            break;
    }
    return NULL;
}

/*

=item C<static int
evaluate_i_i(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
static int
evaluate_i_i(int a, pir_rel_operator op, int b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_n_i(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
static int
evaluate_n_i(double a, pir_rel_operator op, int b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_i_n(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
static int
evaluate_i_n(int a, pir_rel_operator op, double b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_n_n(double a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
C<op> can be C<<!=>>, C<<==>>, C<< < >>, C<< <= >>, C<< > >> or C<< >= >>.

=cut

*/
static int
evaluate_n_n(double a, pir_rel_operator op, double b) {
    switch (op) {
        case OP_NE:
            return (a != b);
        case OP_EQ:
            return (a == b);
        case OP_LT:
            return (a < b);
        case OP_LE:
            return (a <= b);
        case OP_GT:
            return (a > b);
        case OP_GE:
            return (a >= b);
        default:
            return 0;
    }
}

/*

=item C<static int
evaluate_s_s(char *a, pir_rel_operator op, char *b)>

Compare string C<a> with string C<b> using the operator C<op>.
The function uses C's C<strcmp> function. Based on that result,
which can be -1 (smaller), 0 (equal) or 1 (larger), a boolean
result is returned.

=cut

*/
static int
evaluate_s_s(char * const a, pir_rel_operator op, char * const b) {
    int result = strcmp(a, b);

    switch (op) {
        case OP_NE:
            return (result != 0);
        case OP_EQ:
            return (result == 0);
        case OP_LT:
            return (result < 0);
        case OP_LE:
            return (result <= 0);
        case OP_GT:
            return (result > 0);
        case OP_GE:
            return (result >= 0);
        default:
            return -1;
    }
}

/*

=item C<static int
evaluate_s(char * const s)>

Evaluate a string in boolean context; if the string's length is 0, it's false.
If the string equals "0", ".0", "0." or "0.0", it's false.
Otherwise, it's true.

=cut

*/
static int
evaluate_s(char * const s) {
    int strlen_s = strlen(s);

    if (strlen_s > 0) {
        if (strlen_s <= 3) { /* if strlen > 3, (max. nr of characters to represent "0")
                                no need to do expensive string comparison; it must be true. */
            if ((strcmp(s, "0") == 0) || (strcmp(s, ".0") == 0)
                || (strcmp(s, "0.") == 0) || (strcmp(s, "0.0") == 0)) {
                return 0;
            }
            else  /* short string but not equal to "0.0" or a variant */
                return 1;
        }
        else /* strlen > 3, so does not contain "0.0" or a variant */
            return 1;
    }
    return 0; /* strlen is not larger than 0 */
}

/*

=item C<static int
evaluate_c(constant * const c)>

Evaluate a constant node in boolean context; if the constant is numeric,
it must be non-zero to be true; if it's a string, C<evaluate_s> is invoked
to evaluate the string.

=cut

*/
static int
evaluate_c(constant * const c) {
    switch (c->type) {
        case INT_TYPE:
            return (c->val.ival != 0);
        case NUM_TYPE:
            return (c->val.nval != 0);
        case STRING_TYPE:
            return evaluate_s(c->val.sval);
        case PMC_TYPE:
        case UNKNOWN_TYPE:
            panic("impossible constant type in evaluate_c()");
            break;
    }
    return 0; /* keep compiler happy; will never happen. */
}

/*

=item C<static char *
concat_strings(char *a, char *b)>

Concatenates two strings into a new buffer; frees all memory
of the old strings. The new string is returned.

=cut

*/
static char *
concat_strings(char *a, char *b) {
    int strlen_a = strlen(a);
    char *newstr = (char *)calloc(strlen_a + strlen(b) + 1, sizeof (char));
    assert(newstr != NULL);
    strcpy(newstr, a);
    strcpy(newstr + strlen_a, b);
    free(a);
    free(b);
    a = b = NULL;
    return newstr;
}

/*

=item C<static int
is_parrot_op(lexer_state * const lexer, char const * const spelling)>

=cut

*/
/*
static int
is_parrot_op(lexer_state * const lexer, char const * const spelling)
{
    char const * ops[] = {
        "print",
        "new",
        "newclass",
        "end",
        "set",
        "find_global",
        "set_hll_global",
        "get_hll_global",
        "setfile",
        "setline",
        "add",
        "sub",
        NULL
    };


    char const **iter = ops;

    while (*iter != NULL) {
        if (strcmp(spelling, *iter) == 0)
            return 1;
        iter++;
    }

    return 0;
}
*/

/*

=item C<static void
create_if_instr(yyscan_t yyscanner, lexer_state *lexer, int invert, int hasnull,
                char * const name, char * const label)>

Create an C<if> or C<unless> instruction; if C<invert> is non-zero (true), the
C<if> instruction is inverted, effectively becoming C<unless>.

If C<hasnull> is non-zero (true), the C<if> instruction becomes C<if_null>; again,
if C<invert> is non-zero, the instruction becomes C<unless_null>.

C<name> is the name of the variable that is checked during this instruction

=cut

*/
static void
create_if_instr(yyscan_t yyscanner, lexer_state * const lexer, int invert, int hasnull,
                char * const name,
                char * const label)
{
    /* try to find the symbol; if it was declared it will be found; otherwise emit an error. */
    symbol *sym = find_symbol(lexer, name);
    if (sym == NULL) {
        sym = new_symbol(name, UNKNOWN_TYPE);
        yyerror(yyscanner, lexer, "symbol '%s' not declared'", name);
    }
    /* if there was a keyword "null", use the if/unless_null instruction variants. */
    if (hasnull)
        set_instrf(lexer, invert ? "unless_null" : "if_null", "%T%I", target_from_symbol(sym),
                   label);
    else
        set_instrf(lexer, invert ? "unless" : "if", "%T%I", target_from_symbol(sym), label);
}

/*

=item C<static int
check_value(constant * const c, int val)>

Check whether the current value of the constant C<c> equals C<val>.
For our purposes, it is sufficient to check for integer values (including
a check against 1.0 or 0.0). If the values are indeed equal, true is returned,
false otherwise. If the constant is not numeric, it returns always false.

=cut

*/
static int
check_value(constant * const c, int val) {
    switch(c->type) {
        case INT_TYPE:
            return (c->val.ival == val);
        case NUM_TYPE:
            return (c->val.nval == val);
        default:
            break;
    }
    return 0;
}

/*

=item C<static void
do_strength_reduction(lexer_state * const lexer)>

Implement strength reduction for the math operators C<add>, C<sub>, C<mul>, C<div> and C<fdiv>.
If the current instruction is any of these, then the first two operands are checked; if both
are targets and are equal, the second operand is removed; this means that the first operand
will be an IN/OUT operand. For instance:

 add $I0, $I0, $I1

becomes:

 add $I0, $I1

and

 add $I0, 1

becomes:

 inc $I0

=cut

*/
static void
do_strength_reduction(lexer_state * const lexer) {
    char * const instr         = get_instr(lexer);
    int          op            = -1;
    int          num_operands;
    expression  *arg1, *arg2;

    /* if the instruction is "add", "sub", "mul", "div" or "fdiv", do continue... */
    if (strcmp(instr, "add") == 0)
        op = OP_ADD;
    else if (strcmp(instr, "sub") == 0)
        op = OP_SUB;
    else if (strcmp(instr, "mul") == 0)
        op = OP_MUL;
    else if (strcmp(instr, "div") == 0)
        op = OP_DIV;
    else if (strcmp(instr, "fdiv") == 0)
        op = OP_FDIV;
    else
        return;

    num_operands = get_operand_count(lexer);
    if (num_operands > 2) {
        /* get the operands */
        expression *op1, *op2;
        get_operands(lexer, 2, &op1, &op2);

        /* check whether operands are in fact targets */
        if ((op1->type == EXPR_TARGET) && (op2->type == EXPR_TARGET)) {

            /* check whether targets are equal */
            if (targets_equal(op1->expr.t, op2->expr.t)) {
                /* in that case, remove the second one */
                remove_operand(lexer, 2);
                free(op2);
                --num_operands;
            }
        }
    }

    /* don't even try to change "add $I0, 1" into "inc $I0" if number of operands is not 2 */
    if (num_operands != 2)
        return;

    arg1 = arg2 = NULL;
    get_operands(lexer, 2, &arg1, &arg2);
    assert(arg1);
    assert(arg2);

    switch (op) {
        case OP_ADD:
        case OP_SUB:
            if (arg2->type == EXPR_CONSTANT) {
                if (check_value(arg2->expr.c, 0)) {
                    update_instr(lexer, "noop");
                    remove_all_operands(lexer);
                }
                else if (check_value(arg2->expr.c, 1)) {
                    update_instr(lexer, opnames[op + 1]);
                    remove_operand(lexer, 2);
                }
            }
            break;
        case OP_MUL:
            if (arg2->type == EXPR_CONSTANT) {
                if (check_value(arg2->expr.c, 0)) {
                    update_instr(lexer, "null");
                    remove_operand(lexer, 2);
                }
                else if (check_value(arg2->expr.c, 1)) {
                    update_instr(lexer, "noop");
                    remove_all_operands(lexer);
                }
            }
            break;
        case OP_DIV:
        case OP_FDIV:
            if (arg2->type == EXPR_CONSTANT) {
                if (check_value(arg2->expr.c, 0))
                    pirerror(lexer, "cannot divide by 0");
                else if (check_value(arg2->expr.c, 1)) {
                    update_instr(lexer, "noop");
                    remove_all_operands(lexer);
                }
            }
            break;
        default:
            break;
    }
}



/*

=back

=cut

*/


/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4:
 */


