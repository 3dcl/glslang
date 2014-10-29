/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 41 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:339  */


/* Based on:
ANSI C Yacc grammar

In 1985, Jeff Lee published his Yacc grammar (which is accompanied by a
matching Lex specification) for the April 30, 1985 draft version of the
ANSI C standard.  Tom Stockfisch reposted it to net.sources in 1987; that
original, as mentioned in the answer to question 17.25 of the comp.lang.c
FAQ, can be ftp'ed from ftp.uu.net, file usenet/net.sources/ansi.c.grammar.Z.

I intend to keep this version as close to the current C Standard grammar as
possible; please let me know if you discover discrepancies.

Jutta Degener, 1995
*/

#include "SymbolTable.h"
#include "ParseHelper.h"
#include "../Public/ShaderLang.h"

using namespace glslang;


#line 91 "glslang.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "glslang.tab.h".  */
#ifndef YY_YY_GLSLANG_TAB_H_INCLUDED
# define YY_YY_GLSLANG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ATTRIBUTE = 258,
    VARYING = 259,
    CONST = 260,
    BOOL = 261,
    FLOAT = 262,
    DOUBLE = 263,
    INT = 264,
    UINT = 265,
    BREAK = 266,
    CONTINUE = 267,
    DO = 268,
    ELSE = 269,
    FOR = 270,
    IF = 271,
    DISCARD = 272,
    RETURN = 273,
    SWITCH = 274,
    CASE = 275,
    DEFAULT = 276,
    SUBROUTINE = 277,
    BVEC2 = 278,
    BVEC3 = 279,
    BVEC4 = 280,
    IVEC2 = 281,
    IVEC3 = 282,
    IVEC4 = 283,
    UVEC2 = 284,
    UVEC3 = 285,
    UVEC4 = 286,
    VEC2 = 287,
    VEC3 = 288,
    VEC4 = 289,
    MAT2 = 290,
    MAT3 = 291,
    MAT4 = 292,
    CENTROID = 293,
    IN = 294,
    OUT = 295,
    INOUT = 296,
    UNIFORM = 297,
    PATCH = 298,
    SAMPLE = 299,
    BUFFER = 300,
    SHARED = 301,
    COHERENT = 302,
    VOLATILE = 303,
    RESTRICT = 304,
    READONLY = 305,
    WRITEONLY = 306,
    DVEC2 = 307,
    DVEC3 = 308,
    DVEC4 = 309,
    DMAT2 = 310,
    DMAT3 = 311,
    DMAT4 = 312,
    NOPERSPECTIVE = 313,
    FLAT = 314,
    SMOOTH = 315,
    LAYOUT = 316,
    MAT2X2 = 317,
    MAT2X3 = 318,
    MAT2X4 = 319,
    MAT3X2 = 320,
    MAT3X3 = 321,
    MAT3X4 = 322,
    MAT4X2 = 323,
    MAT4X3 = 324,
    MAT4X4 = 325,
    DMAT2X2 = 326,
    DMAT2X3 = 327,
    DMAT2X4 = 328,
    DMAT3X2 = 329,
    DMAT3X3 = 330,
    DMAT3X4 = 331,
    DMAT4X2 = 332,
    DMAT4X3 = 333,
    DMAT4X4 = 334,
    ATOMIC_UINT = 335,
    SAMPLER1D = 336,
    SAMPLER2D = 337,
    SAMPLER3D = 338,
    SAMPLERCUBE = 339,
    SAMPLER1DSHADOW = 340,
    SAMPLER2DSHADOW = 341,
    SAMPLERCUBESHADOW = 342,
    SAMPLER1DARRAY = 343,
    SAMPLER2DARRAY = 344,
    SAMPLER1DARRAYSHADOW = 345,
    SAMPLER2DARRAYSHADOW = 346,
    ISAMPLER1D = 347,
    ISAMPLER2D = 348,
    ISAMPLER3D = 349,
    ISAMPLERCUBE = 350,
    ISAMPLER1DARRAY = 351,
    ISAMPLER2DARRAY = 352,
    USAMPLER1D = 353,
    USAMPLER2D = 354,
    USAMPLER3D = 355,
    USAMPLERCUBE = 356,
    USAMPLER1DARRAY = 357,
    USAMPLER2DARRAY = 358,
    SAMPLER2DRECT = 359,
    SAMPLER2DRECTSHADOW = 360,
    ISAMPLER2DRECT = 361,
    USAMPLER2DRECT = 362,
    SAMPLERBUFFER = 363,
    ISAMPLERBUFFER = 364,
    USAMPLERBUFFER = 365,
    SAMPLERCUBEARRAY = 366,
    SAMPLERCUBEARRAYSHADOW = 367,
    ISAMPLERCUBEARRAY = 368,
    USAMPLERCUBEARRAY = 369,
    SAMPLER2DMS = 370,
    ISAMPLER2DMS = 371,
    USAMPLER2DMS = 372,
    SAMPLER2DMSARRAY = 373,
    ISAMPLER2DMSARRAY = 374,
    USAMPLER2DMSARRAY = 375,
    IMAGE1D = 376,
    IIMAGE1D = 377,
    UIMAGE1D = 378,
    IMAGE2D = 379,
    IIMAGE2D = 380,
    UIMAGE2D = 381,
    IMAGE3D = 382,
    IIMAGE3D = 383,
    UIMAGE3D = 384,
    IMAGE2DRECT = 385,
    IIMAGE2DRECT = 386,
    UIMAGE2DRECT = 387,
    IMAGECUBE = 388,
    IIMAGECUBE = 389,
    UIMAGECUBE = 390,
    IMAGEBUFFER = 391,
    IIMAGEBUFFER = 392,
    UIMAGEBUFFER = 393,
    IMAGE1DARRAY = 394,
    IIMAGE1DARRAY = 395,
    UIMAGE1DARRAY = 396,
    IMAGE2DARRAY = 397,
    IIMAGE2DARRAY = 398,
    UIMAGE2DARRAY = 399,
    IMAGECUBEARRAY = 400,
    IIMAGECUBEARRAY = 401,
    UIMAGECUBEARRAY = 402,
    IMAGE2DMS = 403,
    IIMAGE2DMS = 404,
    UIMAGE2DMS = 405,
    IMAGE2DMSARRAY = 406,
    IIMAGE2DMSARRAY = 407,
    UIMAGE2DMSARRAY = 408,
    STRUCT = 409,
    VOID = 410,
    WHILE = 411,
    IDENTIFIER = 412,
    TYPE_NAME = 413,
    FLOATCONSTANT = 414,
    DOUBLECONSTANT = 415,
    INTCONSTANT = 416,
    UINTCONSTANT = 417,
    BOOLCONSTANT = 418,
    FIELD_SELECTION = 419,
    LEFT_OP = 420,
    RIGHT_OP = 421,
    INC_OP = 422,
    DEC_OP = 423,
    LE_OP = 424,
    GE_OP = 425,
    EQ_OP = 426,
    NE_OP = 427,
    AND_OP = 428,
    OR_OP = 429,
    XOR_OP = 430,
    MUL_ASSIGN = 431,
    DIV_ASSIGN = 432,
    ADD_ASSIGN = 433,
    MOD_ASSIGN = 434,
    LEFT_ASSIGN = 435,
    RIGHT_ASSIGN = 436,
    AND_ASSIGN = 437,
    XOR_ASSIGN = 438,
    OR_ASSIGN = 439,
    SUB_ASSIGN = 440,
    LEFT_PAREN = 441,
    RIGHT_PAREN = 442,
    LEFT_BRACKET = 443,
    RIGHT_BRACKET = 444,
    LEFT_BRACE = 445,
    RIGHT_BRACE = 446,
    DOT = 447,
    COMMA = 448,
    COLON = 449,
    EQUAL = 450,
    SEMICOLON = 451,
    BANG = 452,
    DASH = 453,
    TILDE = 454,
    PLUS = 455,
    STAR = 456,
    SLASH = 457,
    PERCENT = 458,
    LEFT_ANGLE = 459,
    RIGHT_ANGLE = 460,
    VERTICAL_BAR = 461,
    CARET = 462,
    AMPERSAND = 463,
    QUESTION = 464,
    INVARIANT = 465,
    PRECISE = 466,
    HIGH_PRECISION = 467,
    MEDIUM_PRECISION = 468,
    LOW_PRECISION = 469,
    PRECISION = 470,
    PACKED = 471,
    RESOURCE = 472,
    SUPERP = 473
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 66 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:355  */

    struct {
        glslang::TSourceLoc loc;
        union {
            glslang::TString *string;
            int i;
            unsigned int u;
            bool b;
            double d;
        };
        glslang::TSymbol* symbol;
    } lex;
    struct {
        glslang::TSourceLoc loc;
        glslang::TOperator op;
        union {
            TIntermNode* intermNode;
            glslang::TIntermNodePair nodePair;
            glslang::TIntermTyped* intermTypedNode;
            glslang::TIntermAggregate* intermAggregate;
        };
        union {
            glslang::TPublicType type;
            glslang::TFunction* function;
            glslang::TParameter param;
            glslang::TTypeLoc typeLine;
            glslang::TTypeList* typeList;
            glslang::TArraySizes* arraySizes;
            glslang::TIdentifierList* identifierList;
        };
    } interm;

#line 383 "glslang.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);

#endif /* !YY_YY_GLSLANG_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 99 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:358  */


#define YYPARSE_PARAM voidParseContext
#define parseContext (*(TParseContext*)voidParseContext)
#define YYLEX_PARAM parseContext
#define yyerror(msg) parseContext.parserError(msg)

extern int yylex(YYSTYPE*, TParseContext&);


#line 407 "glslang.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  198
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4713

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  219
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  369
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  501

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   473

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   219,   219,   225,   228,   233,   239,   244,   250,   255,
     261,   264,   267,   270,   273,   282,   294,   301,   310,   316,
     320,   327,   330,   336,   343,   353,   361,   366,   399,   405,
     413,   421,   442,   443,   444,   445,   450,   451,   458,   465,
     475,   476,   483,   493,   494,   502,   513,   514,   523,   532,
     541,   553,   554,   564,   577,   578,   589,   590,   601,   602,
     613,   614,   626,   627,   639,   640,   652,   653,   665,   666,
     678,   679,   680,   681,   682,   683,   684,   688,   692,   696,
     700,   707,   710,   720,   727,   731,   736,   745,   749,   753,
     757,   761,   765,   773,   773,   782,   786,   793,   837,   840,
     847,   855,   875,   891,   906,   929,   937,   946,   954,   963,
     970,   973,   978,   992,  1016,  1034,  1039,  1048,  1064,  1090,
    1109,  1121,  1147,  1155,  1162,  1169,  1179,  1185,  1188,  1194,
    1198,  1202,  1206,  1214,  1220,  1223,  1233,  1236,  1239,  1242,
    1246,  1250,  1257,  1261,  1273,  1287,  1292,  1297,  1302,  1309,
    1314,  1319,  1324,  1329,  1336,  1340,  1344,  1348,  1352,  1356,
    1361,  1372,  1375,  1380,  1384,  1393,  1398,  1406,  1410,  1420,
    1424,  1428,  1433,  1437,  1442,  1446,  1451,  1456,  1461,  1467,
    1473,  1479,  1484,  1489,  1494,  1499,  1504,  1509,  1515,  1521,
    1527,  1532,  1537,  1542,  1547,  1552,  1557,  1562,  1567,  1572,
    1577,  1582,  1587,  1593,  1599,  1605,  1611,  1617,  1623,  1629,
    1635,  1641,  1647,  1653,  1659,  1664,  1669,  1674,  1679,  1684,
    1689,  1694,  1699,  1704,  1709,  1714,  1719,  1724,  1729,  1734,
    1739,  1744,  1749,  1754,  1759,  1764,  1769,  1774,  1779,  1784,
    1789,  1794,  1799,  1806,  1813,  1820,  1827,  1832,  1837,  1842,
    1847,  1852,  1857,  1862,  1867,  1872,  1877,  1882,  1887,  1892,
    1897,  1902,  1907,  1912,  1917,  1922,  1927,  1932,  1937,  1942,
    1947,  1952,  1957,  1962,  1967,  1972,  1977,  1982,  1987,  1992,
    1997,  2002,  2007,  2012,  2017,  2022,  2027,  2032,  2037,  2041,
    2057,  2063,  2069,  2078,  2078,  2088,  2088,  2098,  2101,  2114,
    2132,  2154,  2158,  2164,  2169,  2182,  2185,  2188,  2194,  2197,
    2204,  2208,  2209,  2215,  2216,  2217,  2218,  2219,  2220,  2221,
    2225,  2226,  2227,  2226,  2236,  2237,  2241,  2242,  2242,  2242,
    2246,  2249,  2257,  2265,  2276,  2277,  2281,  2288,  2292,  2300,
    2304,  2316,  2316,  2328,  2331,  2337,  2342,  2348,  2348,  2357,
    2357,  2363,  2363,  2380,  2383,  2389,  2392,  2398,  2402,  2409,
    2414,  2419,  2424,  2432,  2441,  2445,  2452,  2455,  2461,  2461
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ATTRIBUTE", "VARYING", "CONST", "BOOL",
  "FLOAT", "DOUBLE", "INT", "UINT", "BREAK", "CONTINUE", "DO", "ELSE",
  "FOR", "IF", "DISCARD", "RETURN", "SWITCH", "CASE", "DEFAULT",
  "SUBROUTINE", "BVEC2", "BVEC3", "BVEC4", "IVEC2", "IVEC3", "IVEC4",
  "UVEC2", "UVEC3", "UVEC4", "VEC2", "VEC3", "VEC4", "MAT2", "MAT3",
  "MAT4", "CENTROID", "IN", "OUT", "INOUT", "UNIFORM", "PATCH", "SAMPLE",
  "BUFFER", "SHARED", "COHERENT", "VOLATILE", "RESTRICT", "READONLY",
  "WRITEONLY", "DVEC2", "DVEC3", "DVEC4", "DMAT2", "DMAT3", "DMAT4",
  "NOPERSPECTIVE", "FLAT", "SMOOTH", "LAYOUT", "MAT2X2", "MAT2X3",
  "MAT2X4", "MAT3X2", "MAT3X3", "MAT3X4", "MAT4X2", "MAT4X3", "MAT4X4",
  "DMAT2X2", "DMAT2X3", "DMAT2X4", "DMAT3X2", "DMAT3X3", "DMAT3X4",
  "DMAT4X2", "DMAT4X3", "DMAT4X4", "ATOMIC_UINT", "SAMPLER1D", "SAMPLER2D",
  "SAMPLER3D", "SAMPLERCUBE", "SAMPLER1DSHADOW", "SAMPLER2DSHADOW",
  "SAMPLERCUBESHADOW", "SAMPLER1DARRAY", "SAMPLER2DARRAY",
  "SAMPLER1DARRAYSHADOW", "SAMPLER2DARRAYSHADOW", "ISAMPLER1D",
  "ISAMPLER2D", "ISAMPLER3D", "ISAMPLERCUBE", "ISAMPLER1DARRAY",
  "ISAMPLER2DARRAY", "USAMPLER1D", "USAMPLER2D", "USAMPLER3D",
  "USAMPLERCUBE", "USAMPLER1DARRAY", "USAMPLER2DARRAY", "SAMPLER2DRECT",
  "SAMPLER2DRECTSHADOW", "ISAMPLER2DRECT", "USAMPLER2DRECT",
  "SAMPLERBUFFER", "ISAMPLERBUFFER", "USAMPLERBUFFER", "SAMPLERCUBEARRAY",
  "SAMPLERCUBEARRAYSHADOW", "ISAMPLERCUBEARRAY", "USAMPLERCUBEARRAY",
  "SAMPLER2DMS", "ISAMPLER2DMS", "USAMPLER2DMS", "SAMPLER2DMSARRAY",
  "ISAMPLER2DMSARRAY", "USAMPLER2DMSARRAY", "IMAGE1D", "IIMAGE1D",
  "UIMAGE1D", "IMAGE2D", "IIMAGE2D", "UIMAGE2D", "IMAGE3D", "IIMAGE3D",
  "UIMAGE3D", "IMAGE2DRECT", "IIMAGE2DRECT", "UIMAGE2DRECT", "IMAGECUBE",
  "IIMAGECUBE", "UIMAGECUBE", "IMAGEBUFFER", "IIMAGEBUFFER",
  "UIMAGEBUFFER", "IMAGE1DARRAY", "IIMAGE1DARRAY", "UIMAGE1DARRAY",
  "IMAGE2DARRAY", "IIMAGE2DARRAY", "UIMAGE2DARRAY", "IMAGECUBEARRAY",
  "IIMAGECUBEARRAY", "UIMAGECUBEARRAY", "IMAGE2DMS", "IIMAGE2DMS",
  "UIMAGE2DMS", "IMAGE2DMSARRAY", "IIMAGE2DMSARRAY", "UIMAGE2DMSARRAY",
  "STRUCT", "VOID", "WHILE", "IDENTIFIER", "TYPE_NAME", "FLOATCONSTANT",
  "DOUBLECONSTANT", "INTCONSTANT", "UINTCONSTANT", "BOOLCONSTANT",
  "FIELD_SELECTION", "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "XOR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", "LEFT_PAREN",
  "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_BRACE",
  "RIGHT_BRACE", "DOT", "COMMA", "COLON", "EQUAL", "SEMICOLON", "BANG",
  "DASH", "TILDE", "PLUS", "STAR", "SLASH", "PERCENT", "LEFT_ANGLE",
  "RIGHT_ANGLE", "VERTICAL_BAR", "CARET", "AMPERSAND", "QUESTION",
  "INVARIANT", "PRECISE", "HIGH_PRECISION", "MEDIUM_PRECISION",
  "LOW_PRECISION", "PRECISION", "PACKED", "RESOURCE", "SUPERP", "$accept",
  "variable_identifier", "primary_expression", "postfix_expression",
  "integer_expression", "function_call", "function_call_or_method",
  "function_call_generic", "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "block_structure", "$@1",
  "identifier_list", "function_prototype", "function_declarator",
  "function_header_with_parameters", "function_header",
  "parameter_declarator", "parameter_declaration",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "invariant_qualifier", "interpolation_qualifier",
  "layout_qualifier", "layout_qualifier_id_list", "layout_qualifier_id",
  "precise_qualifier", "type_qualifier", "single_type_qualifier",
  "storage_qualifier", "type_name_list", "type_specifier",
  "array_specifier", "type_specifier_nonarray", "precision_qualifier",
  "struct_specifier", "$@2", "$@3", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "initializer", "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "$@4", "$@5",
  "statement_no_new_scope", "statement_scoped", "$@6", "$@7",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement", "$@8",
  "switch_statement_list", "case_label", "iteration_statement", "$@9",
  "$@10", "$@11", "for_init_statement", "conditionopt",
  "for_rest_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@12", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473
};
# endif

#define YYPACT_NINF -440

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-440)))

#define YYTABLE_NINF -28

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1945,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -160,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -152,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -138,  -440,  -440,  -440,  -440,  -440,  -440,  -440,   -78,
    -440,  -143,  -150,  -136,  -137,  3110,  -101,  -440,   -93,  -440,
    -440,  -440,  -440,  2337,  -440,  -440,  -440,  -120,  -440,  -440,
     484,  -440,  -440,   -33,   -37,   -96,  -440,  4555,  -149,  -440,
    -440,   -86,  -440,  3110,  -440,  -440,  -440,  3110,   -27,   -19,
    -440,  -164,  -161,  -440,  -440,  -440,  3459,   -38,  -440,  -440,
    -440,  -118,  -440,   -39,  -117,  -440,  -440,  3110,   -25,  -440,
    -147,   697,  -440,  -440,  -440,  -440,  -120,  -123,  -440,  3643,
    -122,  -440,    12,  -440,  -100,  -440,  -440,  -440,  -440,  -440,
    -440,  4193,  4193,  4193,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -131,  -440,  -440,  -440,   -15,   -84,  4374,   -13,  -440,
    4193,   -60,   -67,   -20,  -142,   -23,   -26,   -32,   -22,     1,
      10,  -159,  -440,    -1,  -440,  3828,  -440,    31,    -9,  -440,
     -37,  3110,  3110,    34,  2531,  -440,  -440,  -440,    -3,    -2,
    -440,     9,    11,     2,  4012,    13,  4193,     7,    14,    15,
    -440,  -440,   -94,  -440,  -440,   -74,  -440,  -150,    16,  -440,
    -440,  -440,  -440,   910,  -440,  -440,  -440,  -440,  -440,  -440,
     -38,  3643,  -121,  3643,  -440,  -440,  3643,  3110,  -440,    46,
    -440,  -440,  -440,   -81,  -440,  -440,  4193,    40,  -440,  -440,
    4193,    18,  -440,  -440,  -440,  4193,  4193,  4193,  4193,  4193,
    4193,  4193,  4193,  4193,  4193,  4193,  4193,  4193,  4193,  4193,
    4193,  4193,  4193,  4193,  4193,  -440,  -440,    19,  -440,  -440,
    -440,  -440,  2724,    34,  -120,   -70,  -440,  -440,  -440,  -440,
    -440,  1123,  -440,  4193,  -440,  -440,   -69,  4193,   -36,  -440,
    -440,  -440,  1123,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  4193,  4193,  -440,  -440,  -440,  -440,
    3643,  -440,   -54,  -440,  2917,  -440,  -440,    21,    20,  -440,
    -440,  -440,  -440,  -440,   -60,   -60,   -67,   -67,   -20,   -20,
     -20,   -20,  -142,  -142,   -23,   -26,   -32,   -22,     1,    10,
     -34,  -440,  -440,   -64,   -38,    34,  -440,    56,  1747,   -80,
    -440,   -79,  -440,  2139,  1123,  -440,  -440,  -440,  -440,  3273,
    -440,  -440,  4193,  -440,  -440,    30,  -440,  -440,  2139,    28,
    -440,    20,    62,  3110,    33,    32,  -440,  -440,  -440,  4193,
    -440,    25,    35,  -440,   210,  1549,  -440,    36,    39,  1336,
    -440,   -76,  4193,  1336,    28,  -440,  1123,  3643,  -440,  -440,
    -440,    29,    20,  -440,  -440,  -440,  1123,    37,  -440,  -440,
    -440
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   143,   144,   142,   174,   170,   171,   172,   173,   159,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   175,
     176,   177,   190,   191,   192,   148,   146,   147,   145,   151,
     149,   150,   152,   153,   154,   155,   156,   157,   158,   178,
     179,   180,   202,   203,   204,   125,   124,   123,     0,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   228,
     229,   230,   231,   232,   233,   235,   236,   237,   238,   239,
     240,   242,   243,   244,   245,   246,   247,   248,   226,   227,
     234,   241,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,     0,   169,   289,   122,   133,   290,   291,   292,     0,
     367,     0,   368,     0,    99,    98,     0,   110,   115,   140,
     139,   137,   141,     0,   134,   136,   120,   163,   138,   288,
       0,   364,   366,     0,     0,     0,   295,     0,     0,    87,
      84,     0,    97,     0,   106,   100,   108,     0,   109,     0,
      85,   116,     0,    90,   135,   121,     0,   164,     1,   365,
     161,     0,   132,   129,     0,   127,   293,     0,     0,    88,
       0,     0,   369,   101,   105,   107,   103,   111,   102,     0,
     117,    93,     0,    91,     0,     2,     6,     7,     4,     5,
       8,     0,     0,     0,   165,    34,    33,    35,    32,     3,
      10,    28,    12,    17,    18,     0,     0,    22,     0,    36,
       0,    40,    43,    46,    51,    54,    56,    58,    60,    62,
      64,    66,    83,     0,    26,     0,   160,     0,     0,   126,
       0,     0,     0,     0,     0,   297,    86,    89,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,   321,
     330,   334,    36,    68,    81,     0,   310,     0,   120,   313,
     332,   312,   311,     0,   314,   315,   316,   317,   318,   319,
     104,     0,   112,     0,   305,   119,     0,     0,    95,     0,
      92,    29,    30,     0,    14,    15,     0,     0,    20,    19,
       0,   169,    23,    25,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,     0,   162,   130,
     131,   128,     0,     0,   303,     0,   301,   296,   298,   360,
     359,     0,   351,     0,   363,   361,     0,     0,     0,   346,
     347,   320,     0,    71,    72,    74,    73,    76,    77,    78,
      79,    80,    75,    70,     0,     0,   335,   331,   333,   114,
       0,   308,     0,   118,     0,    96,     9,     0,    16,    13,
      24,    37,    38,    39,    42,    41,    44,    45,    49,    50,
      47,    48,    52,    53,    55,    57,    59,    61,    63,    65,
       0,   168,   294,     0,   304,     0,   299,     0,     0,     0,
     362,     0,   345,     0,   322,    69,    82,   113,   306,     0,
      94,    11,     0,   300,   302,     0,   354,   353,   356,   327,
     341,   339,     0,     0,     0,     0,   307,   309,    67,     0,
     355,     0,     0,   326,   338,     0,   336,     0,     0,     0,
     323,     0,   357,     0,   327,   328,   343,     0,   325,   348,
     324,     0,   358,   352,   337,   329,   344,     0,   340,   350,
     342
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,   -17,  -440,  -177,  -175,  -265,  -179,  -119,  -113,
    -111,  -124,  -115,  -112,  -440,  -184,  -214,  -440,  -226,   -35,
       6,  -440,  -440,  -440,     8,  -440,  -440,  -440,    44,    57,
      55,  -440,  -440,  -420,  -440,  -440,  -440,  -440,   -24,  -440,
    -153,  -162,  -440,  -440,     0,  -174,  -440,    95,  -440,  -440,
    -440,  -258,  -264,  -116,  -190,  -295,  -440,  -189,  -300,  -435,
    -439,  -440,  -440,  -233,  -232,  -440,  -440,    72,  -371,  -183,
    -440,  -440,  -204,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,    87,  -440,  -440
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   239,   240,   241,   407,   242,   243,   244,   245,   246,
     247,   248,   292,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   293,   294,   394,   295,   263,
     296,   151,   317,   224,   297,   153,   154,   155,   184,   185,
     186,   156,   157,   158,   159,   160,   161,   204,   205,   162,
     163,   164,   165,   201,   264,   197,   167,   168,   169,   271,
     207,   274,   275,   365,   366,   315,   402,   299,   300,   301,
     302,   382,   465,   489,   474,   475,   495,   490,   303,   304,
     305,   476,   464,   306,   477,   497,   307,   308,   443,   371,
     438,   458,   471,   472,   309,   170,   171,   172,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     166,   194,   187,   398,   210,   314,   150,   323,   152,   202,
     368,   444,   262,   362,   178,   353,   399,   220,   401,   175,
     473,   403,   218,   462,   196,   194,   173,   342,   343,   221,
     187,   219,   222,   332,   174,   223,   324,   325,   462,   196,
     485,   265,   310,   312,   488,   473,   180,   209,   488,   277,
     354,   182,   176,   179,   272,   -27,   183,   326,   376,   404,
     378,   327,   344,   345,   191,   196,   265,   265,   196,   266,
     269,   437,   311,   316,   400,   267,   270,   418,   419,   420,
     421,   262,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   189,   319,   206,   190,   320,   314,   368,   314,
     408,   393,   314,   329,   211,   447,   406,   459,   460,   330,
     194,   491,   395,   395,   395,   496,   410,   395,   272,   395,
     203,   272,   396,   435,   395,   200,   436,   440,   430,   435,
     216,   338,   453,   339,   146,   147,   148,   448,   217,   449,
     368,   335,   336,   337,   398,   340,   341,   439,   346,   347,
     265,   441,   359,   360,   467,   188,   268,   395,   442,   395,
     452,   414,   415,   195,   272,   416,   417,   422,   423,   318,
     166,   276,   328,   333,   351,   349,   150,   208,   152,   249,
     445,   446,   348,   188,   350,   352,   314,   188,   355,   358,
     434,   364,   498,   369,   370,   372,   398,   373,   374,   377,
     380,   379,   -26,   405,   409,   -21,   381,   273,   431,   272,
     451,   298,   455,   395,   321,   322,   469,   461,   289,   478,
     479,   482,   483,   480,   484,   499,   486,   427,   500,   424,
     357,   214,   461,   334,   487,   314,   425,   428,   468,   426,
     213,   429,   215,   481,   177,   454,   361,   433,   249,   456,
     493,   272,   494,   212,   470,   457,   492,   199,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,   363,   314,   273,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     463,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   194,     0,   298,     0,   463,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273,   411,   412,
     413,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     0,     0,     0,     0,     0,     0,     0,
       0,   298,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   298,     0,
       0,     0,     0,   298,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   298,     0,
       0,     0,     0,   195,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   298,     0,     0,     0,   298,
       0,     0,     0,   298,   198,     0,   298,     1,     2,     3,
       4,     5,     6,     7,     8,     0,   298,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,   146,   147,   148,   149,
       1,     2,     3,     4,     5,     6,     7,     8,   278,   279,
     280,     0,   281,   282,   283,   284,   285,   286,   287,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   288,   225,   143,   226,   227,   228,   229,
     230,     0,     0,     0,   231,   232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,     0,     0,   289,   290,     0,
       0,     0,     0,   291,   235,   236,   237,   238,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,   146,
     147,   148,   149,     1,     2,     3,     4,     5,     6,     7,
       8,   278,   279,   280,     0,   281,   282,   283,   284,   285,
     286,   287,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   288,   225,   143,   226,
     227,   228,   229,   230,     0,     0,     0,   231,   232,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,     0,     0,     0,
     289,   397,     0,     0,     0,     0,   291,   235,   236,   237,
     238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,   146,   147,   148,   149,     1,     2,     3,     4,
       5,     6,     7,     8,   278,   279,   280,     0,   281,   282,
     283,   284,   285,   286,   287,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   288,
     225,   143,   226,   227,   228,   229,   230,     0,     0,     0,
     231,   232,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,   289,     0,     0,     0,     0,     0,   291,
     235,   236,   237,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   147,   148,   149,     1,
       2,     3,     4,     5,     6,     7,     8,   278,   279,   280,
       0,   281,   282,   283,   284,   285,   286,   287,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   288,   225,   143,   226,   227,   228,   229,   230,
       0,     0,     0,   231,   232,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,     0,     0,     0,   211,     0,     0,     0,
       0,     0,   291,   235,   236,   237,   238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,   145,   146,   147,
     148,   149,     1,     2,     3,     4,     5,     6,     7,     8,
     278,   279,   280,     0,   281,   282,   283,   284,   285,   286,
     287,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   288,   225,   143,   226,   227,
     228,   229,   230,     0,     0,     0,   231,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   291,   235,   236,   237,   238,
       1,     2,     3,     4,     5,     6,     7,     8,     0,   144,
     145,   146,   147,   148,   149,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     0,   225,   143,   226,   227,   228,   229,
     230,     0,     0,     0,   231,   232,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   291,   235,   236,   237,   238,     1,     2,
       3,     4,     5,     6,     7,     8,     0,   144,   145,   146,
     147,   148,   149,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     0,   144,   145,   146,   147,   148,
     149,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   225,   143,   226,   227,
     228,   229,   230,     0,     0,     0,   231,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   235,   236,   237,   238,
       1,     2,     3,     4,     5,     6,     7,     8,     0,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     0,   192,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,     1,     2,     3,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     0,   144,   145,   146,
     147,   148,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,   144,   145,   146,   147,   148,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   432,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,   144,   145,   146,   147,   148,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   450,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     0,     0,   144,   145,   146,
     147,   148,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,   146,   147,   148,    39,    40,    41,    42,    43,
      44,     0,     0,     0,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     225,   143,   226,   227,   228,   229,   230,     0,     0,     0,
     231,   232,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,   313,   466,     4,     5,     6,     7,     8,
     235,   236,   237,   238,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,     0,     0,     0,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   225,   143,   226,   227,
     228,   229,   230,     0,     0,     0,   231,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   233,     0,     0,   234,     4,
       5,     6,     7,     8,     0,     0,   235,   236,   237,   238,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,     0,     0,     0,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     225,   143,   226,   227,   228,   229,   230,     0,     0,     0,
     231,   232,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,   313,     4,     5,     6,     7,     8,     0,
     235,   236,   237,   238,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   225,   143,   226,   227,   228,
     229,   230,     0,     0,     0,   231,   232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,     0,     0,   356,     4,     5,
       6,     7,     8,     0,     0,   235,   236,   237,   238,     0,
       0,     0,     0,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,     0,   225,
     143,   226,   227,   228,   229,   230,     0,     0,     0,   231,
     232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,     4,
       5,     6,     7,     8,     0,     0,     0,     0,   375,   235,
     236,   237,   238,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,     0,     0,     0,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     225,   143,   226,   227,   228,   229,   230,     0,     0,     0,
     231,   232,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
     235,   236,   237,   238,     0,     0,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   331,
       0,   225,   143,   226,   227,   228,   229,   230,     0,     0,
       0,   231,   232,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       0,   235,   236,   237,   238,     0,     0,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,     0,   143
};

static const yytype_int16 yycheck[] =
{
       0,   163,   155,   303,   178,   219,     0,   233,     0,    46,
     274,   382,   196,   271,   157,   174,   311,   191,   313,   157,
     459,   316,   186,   443,   188,   187,   186,   169,   170,   190,
     183,   195,   193,   247,   186,   196,   167,   168,   458,   188,
     475,   188,   216,   217,   479,   484,   196,   196,   483,   196,
     209,   187,   190,   196,   207,   186,   193,   188,   284,   317,
     286,   192,   204,   205,   157,   188,   188,   188,   188,   187,
     187,   371,   195,   195,   195,   193,   193,   342,   343,   344,
     345,   265,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   193,   193,   190,   196,   196,   311,   362,   313,
     326,   195,   316,   187,   190,   400,   187,   187,   187,   193,
     272,   187,   193,   193,   193,   486,   330,   193,   271,   193,
     157,   274,   196,   193,   193,   158,   196,   196,   354,   193,
     157,   198,   196,   200,   212,   213,   214,   191,   157,   193,
     404,   201,   202,   203,   444,   165,   166,   373,   171,   172,
     188,   377,   161,   162,   449,   155,   195,   193,   194,   193,
     194,   338,   339,   163,   317,   340,   341,   346,   347,   157,
     170,   196,   187,   186,   173,   207,   170,   177,   170,   196,
     394,   395,   208,   183,   206,   175,   400,   187,   189,   158,
     364,   157,   487,   196,   196,   186,   496,   186,   196,   186,
     186,   194,   186,   157,   164,   187,   191,   207,   189,   362,
     189,   211,   156,   193,   231,   232,   186,   443,   190,   157,
     187,   196,   187,   191,    14,   196,   190,   351,   191,   348,
     265,   187,   458,   250,   195,   449,   349,   352,   452,   350,
     183,   353,   187,   469,   149,   435,   270,   363,   265,   438,
     483,   404,   484,   181,   458,   438,   482,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   271,   272,   487,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   463,    -1,   303,    -1,   458,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,
      -1,    -1,    -1,   443,   444,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,
      -1,    -1,    -1,   463,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,   479,
      -1,    -1,    -1,   483,     0,    -1,   486,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,   496,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   210,   211,   212,   213,   214,   215,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,    -1,    -1,    -1,   167,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,   190,   191,    -1,
      -1,    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,   211,   212,
     213,   214,   215,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    -1,    -1,    -1,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
     190,   191,    -1,    -1,    -1,    -1,   196,   197,   198,   199,
     200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,   211,   212,   213,   214,   215,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,    -1,
     167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,   196,
     197,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   210,   211,   212,   213,   214,   215,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    -1,    -1,   167,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   210,   211,   212,   213,
     214,   215,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,    -1,    -1,    -1,   167,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   198,   199,   200,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,   210,
     211,   212,   213,   214,   215,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
     163,    -1,    -1,    -1,   167,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   197,   198,   199,   200,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,   210,   211,   212,
     213,   214,   215,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,   210,   211,   212,   213,   214,
     215,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,    -1,    -1,    -1,   167,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   198,   199,   200,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,   210,
     211,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,   157,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,   210,   211,   212,
     213,   214,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,   210,   211,   212,   213,   214,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,   210,   211,   212,   213,   214,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,   210,   211,   212,
     213,   214,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,   211,   212,   213,   214,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,    -1,
     167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,   190,   191,     6,     7,     8,     9,    10,
     197,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,    -1,    -1,    -1,   167,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,   189,     6,
       7,     8,     9,    10,    -1,    -1,   197,   198,   199,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,    -1,
     167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,   190,     6,     7,     8,     9,    10,    -1,
     197,   198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,   163,    -1,    -1,    -1,   167,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,    -1,    -1,   189,     6,     7,
       8,     9,    10,    -1,    -1,   197,   198,   199,   200,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,    -1,    -1,    -1,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,   196,   197,
     198,   199,   200,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,   163,    -1,    -1,    -1,
     167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
     197,   198,   199,   200,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
      -1,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,   197,   198,   199,   200,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,   158
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   158,   210,   211,   212,   213,   214,   215,
     249,   250,   253,   254,   255,   256,   260,   261,   262,   263,
     264,   265,   268,   269,   270,   271,   273,   275,   276,   277,
     314,   315,   316,   186,   186,   157,   190,   276,   157,   196,
     196,   317,   187,   193,   257,   258,   259,   269,   273,   193,
     196,   157,   157,   196,   270,   273,   188,   274,     0,   315,
     158,   272,    46,   157,   266,   267,   190,   279,   273,   196,
     274,   190,   296,   258,   257,   259,   157,   157,   186,   195,
     274,   190,   193,   196,   252,   157,   159,   160,   161,   162,
     163,   167,   168,   186,   189,   197,   198,   199,   200,   220,
     221,   222,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   248,   273,   188,   187,   193,   195,   187,
     193,   278,   269,   273,   280,   281,   196,   196,    11,    12,
      13,    15,    16,    17,    18,    19,    20,    21,   156,   190,
     191,   196,   231,   244,   245,   247,   249,   253,   273,   286,
     287,   288,   289,   297,   298,   299,   302,   305,   306,   313,
     274,   195,   274,   190,   245,   284,   195,   251,   157,   193,
     196,   231,   231,   247,   167,   168,   188,   192,   187,   187,
     193,   155,   245,   186,   231,   201,   202,   203,   198,   200,
     165,   166,   169,   170,   204,   205,   171,   172,   208,   207,
     206,   173,   175,   174,   209,   189,   189,   248,   158,   161,
     162,   267,   280,   273,   157,   282,   283,   191,   281,   196,
     196,   308,   186,   186,   196,   196,   247,   186,   247,   194,
     186,   191,   290,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   195,   246,   193,   196,   191,   287,   284,
     195,   284,   285,   284,   280,   157,   187,   223,   247,   164,
     245,   231,   231,   231,   233,   233,   234,   234,   235,   235,
     235,   235,   236,   236,   237,   238,   239,   240,   241,   242,
     247,   189,   191,   282,   274,   193,   196,   287,   309,   247,
     196,   247,   194,   307,   297,   245,   245,   284,   191,   193,
     191,   189,   194,   196,   283,   156,   286,   298,   310,   187,
     187,   247,   262,   269,   301,   291,   191,   284,   245,   186,
     301,   311,   312,   289,   293,   294,   300,   303,   157,   187,
     191,   247,   196,   187,    14,   288,   190,   195,   288,   292,
     296,   187,   247,   292,   293,   295,   297,   304,   284,   196,
     191
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   219,   220,   221,   221,   221,   221,   221,   221,   221,
     222,   222,   222,   222,   222,   222,   223,   224,   225,   226,
     226,   227,   227,   228,   228,   229,   230,   230,   231,   231,
     231,   231,   232,   232,   232,   232,   233,   233,   233,   233,
     234,   234,   234,   235,   235,   235,   236,   236,   236,   236,
     236,   237,   237,   237,   238,   238,   239,   239,   240,   240,
     241,   241,   242,   242,   243,   243,   244,   244,   245,   245,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   247,   247,   248,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   251,   250,   252,   252,   253,   254,   254,
     255,   255,   256,   257,   257,   258,   258,   258,   258,   259,
     260,   260,   260,   260,   260,   261,   261,   261,   261,   261,
     262,   262,   263,   264,   264,   264,   265,   266,   266,   267,
     267,   267,   267,   268,   269,   269,   270,   270,   270,   270,
     270,   270,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   272,   272,   273,   273,   274,   274,   274,   274,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     276,   276,   276,   278,   277,   279,   277,   280,   280,   281,
     281,   282,   282,   283,   283,   284,   284,   284,   285,   285,
     286,   287,   287,   288,   288,   288,   288,   288,   288,   288,
     289,   290,   291,   289,   292,   292,   293,   294,   295,   293,
     296,   296,   297,   297,   298,   298,   299,   300,   300,   301,
     301,   303,   302,   304,   304,   305,   305,   307,   306,   308,
     306,   309,   306,   310,   310,   311,   311,   312,   312,   313,
     313,   313,   313,   313,   314,   314,   315,   315,   317,   316
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     1,     3,     2,     2,     1,     1,     1,     2,
       2,     2,     1,     2,     3,     2,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     2,     4,     2,     3,     4,
       2,     3,     4,     0,     6,     2,     3,     2,     1,     1,
       2,     3,     3,     2,     3,     2,     1,     2,     1,     1,
       1,     3,     4,     6,     5,     1,     2,     3,     5,     4,
       1,     2,     1,     1,     1,     1,     4,     1,     3,     1,
       3,     3,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     1,     2,     2,     3,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     0,     5,     1,     2,     3,
       4,     1,     3,     1,     2,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     0,     5,     1,     1,     1,     0,     0,     3,
       2,     3,     1,     2,     1,     2,     5,     3,     1,     1,
       4,     0,     8,     0,     1,     3,     2,     0,     6,     0,
       8,     0,     7,     1,     1,     1,     0,     2,     3,     2,
       2,     2,     3,     2,     1,     2,     1,     1,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval);
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 219 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleVariable((yyvsp[0].lex).loc, (yyvsp[0].lex).symbol, (yyvsp[0].lex).string);
    }
#line 2812 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 225 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2820 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 228 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setIConst((yyvsp[0].lex).i);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtInt, EvqConst), (yyvsp[0].lex).loc);
    }
#line 2830 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 233 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {        
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned literal");
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setUConst((yyvsp[0].lex).u);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtUint, EvqConst), (yyvsp[0].lex).loc);
    }
#line 2841 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 239 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setDConst((yyvsp[0].lex).d);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtFloat, EvqConst), (yyvsp[0].lex).loc);
    }
#line 2851 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 244 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double literal");
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setDConst((yyvsp[0].lex).d);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtDouble, EvqConst), (yyvsp[0].lex).loc);
    }
#line 2862 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 250 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setBConst((yyvsp[0].lex).b);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[0].lex).loc);
    }
#line 2872 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 255 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
    }
#line 2880 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 261 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2888 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 264 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBracketDereference((yyvsp[-2].lex).loc, (yyvsp[-3].interm.intermTypedNode), (yyvsp[-1].interm.intermTypedNode));
    }
#line 2896 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 267 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2904 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 270 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleDotDereference((yyvsp[0].lex).loc, (yyvsp[-2].interm.intermTypedNode), *(yyvsp[0].lex).string);
    }
#line 2912 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 273 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.variableCheck((yyvsp[-1].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[0].lex).loc, "++", (yyvsp[-1].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath(EOpPostIncrement, (yyvsp[-1].interm.intermTypedNode), (yyvsp[0].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[0].lex).loc, "++", (yyvsp[-1].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
        }
    }
#line 2926 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 282 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.variableCheck((yyvsp[-1].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[0].lex).loc, "--", (yyvsp[-1].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath(EOpPostDecrement, (yyvsp[-1].interm.intermTypedNode), (yyvsp[0].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[0].lex).loc, "--", (yyvsp[-1].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
        }
    }
#line 2940 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 294 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.integerCheck((yyvsp[0].interm.intermTypedNode), "[]");
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2949 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 301 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleFunctionCall((yyvsp[0].interm).loc, (yyvsp[0].interm).function, (yyvsp[0].interm).intermNode, (yyvsp[0].interm).intermAggregate);
        if ((yyval.interm.intermTypedNode) == 0)
            YYERROR;
        delete (yyvsp[0].interm).function;
    }
#line 2960 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 310 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 2968 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 316 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-1].interm);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
    }
#line 2977 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 320 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-1].interm);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
    }
#line 2986 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 327 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-1].interm);
    }
#line 2994 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 330 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 3002 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 336 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[0].interm.intermTypedNode)->getType());
        (yyvsp[-1].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[-1].interm).function;
        (yyval.interm).intermNode = (yyvsp[0].interm.intermTypedNode);
    }
#line 3014 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 343 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[0].interm.intermTypedNode)->getType());
        (yyvsp[-2].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[-2].interm).function;
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[-2].interm).intermNode, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
    }
#line 3026 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 353 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-1].interm);
    }
#line 3034 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 361 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // Constructor
        (yyval.interm).intermNode = 0;
        (yyval.interm).function = parseContext.handleConstructorCall((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type)); 
    }
#line 3044 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 366 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        //
        // Should be a method or subroutine call, but we don't have arguments yet.
        //
        (yyval.interm).function = 0;
        (yyval.interm).intermNode = 0;

        TIntermMethod* method = (yyvsp[0].interm.intermTypedNode)->getAsMethodNode();
        if (method) {
            if (method->getObject()->isArray()) {
                (yyval.interm).function = new TFunction(&method->getMethodName(), TType(EbtInt), EOpArrayLength);
                (yyval.interm).intermNode = method->getObject();
            } else
                parseContext.error(method->getLoc(), "only arrays have methods", "", "");
        } else {
            TIntermSymbol* symbol = (yyvsp[0].interm.intermTypedNode)->getAsSymbolNode();
            if (symbol) {
                parseContext.reservedErrorCheck(symbol->getLoc(), symbol->getName());
                TFunction *function = new TFunction(&symbol->getName(), TType(EbtVoid));
                (yyval.interm).function = function;
            } else
                parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "function call, method, or subroutine call expected", "", "");
        }

        if ((yyval.interm).function == 0) {
            // error recover
            TString empty("");
            (yyval.interm).function = new TFunction(&empty, TType(EbtVoid), EOpNull);
        }
    }
#line 3079 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 399 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.variableCheck((yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        if (TIntermMethod* method = (yyvsp[0].interm.intermTypedNode)->getAsMethodNode())
            parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "incomplete method syntax", method->getMethodName().c_str(), "");
    }
#line 3090 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 405 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.lValueErrorCheck((yyvsp[-1].lex).loc, "++", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath(EOpPreIncrement, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[-1].lex).loc, "++", (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 3103 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 413 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.lValueErrorCheck((yyvsp[-1].lex).loc, "--", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath(EOpPreDecrement, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[-1].lex).loc, "--", (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 3116 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 421 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].interm).op != EOpNull) {
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath((yyvsp[-1].interm).op, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].interm).loc);
            if ((yyval.interm.intermTypedNode) == 0) {
                char errorOp[2] = {0, 0};
                switch((yyvsp[-1].interm).op) {
                case EOpNegative:   errorOp[0] = '-'; break;
                case EOpLogicalNot: errorOp[0] = '!'; break;
                case EOpBitwiseNot: errorOp[0] = '~'; break;
                default: break; // some compilers want this
                }
                parseContext.unaryOpError((yyvsp[-1].interm).loc, errorOp, (yyvsp[0].interm.intermTypedNode)->getCompleteString());
                (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
            }
        } else
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 3138 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 442 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpNull; }
#line 3144 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 443 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpNegative; }
#line 3150 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 444 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpLogicalNot; }
#line 3156 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 445 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpBitwiseNot; }
#line 3162 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 450 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3168 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 451 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpMul, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "*", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3180 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 458 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpDiv, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "/", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3192 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 465 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpMod, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "%", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3204 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 475 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3210 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 476 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpAdd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "+", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3222 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 483 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpSub, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "-", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3234 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 493 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3240 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 494 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bit shift left");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLeftShift, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "<<", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3253 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 502 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bit shift right");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpRightShift, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, ">>", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3266 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 513 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3272 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 514 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLessThan, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "<", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        }
    }
#line 3286 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 523 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpGreaterThan, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, ">", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        }
    }
#line 3300 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 532 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLessThanEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "<=", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        }
    }
#line 3314 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 541 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpGreaterThanEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, ">=", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        }
    }
#line 3328 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 553 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3334 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 554 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "==", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        } else if (((yyvsp[-2].interm.intermTypedNode)->isArray() || (yyvsp[0].interm.intermTypedNode)->isArray()))
            parseContext.profileRequires((yyvsp[-1].lex).loc, ENoProfile, 120, "GL_3DL_array_objects", "==");
    }
#line 3349 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 564 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpNotEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "!=", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        } else if (((yyvsp[-2].interm.intermTypedNode)->isArray() || (yyvsp[0].interm.intermTypedNode)->isArray()))
            parseContext.profileRequires((yyvsp[-1].lex).loc, ENoProfile, 120, "GL_3DL_array_objects", "!=");
    }
#line 3364 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 577 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3370 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 578 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise and");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpAnd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "&", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3383 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 589 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3389 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 590 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise exclusive or");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpExclusiveOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "^", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3402 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 601 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3408 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 602 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise inclusive or");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpInclusiveOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "|", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 3421 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 613 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3427 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 614 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLogicalAnd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "&&", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        }
    }
#line 3441 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 626 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3447 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 627 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLogicalXor, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "^^", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        }
    }
#line 3461 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 639 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3467 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 640 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLogicalOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, "||", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[-1].lex).loc);
        }
    }
#line 3481 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 652 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3487 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 653 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.boolCheck((yyvsp[-3].lex).loc, (yyvsp[-4].interm.intermTypedNode));

        (yyval.interm.intermTypedNode) = parseContext.intermediate.addSelection((yyvsp[-4].interm.intermTypedNode), (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-3].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-3].lex).loc, ":", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 3501 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 665 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 3507 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 666 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.lValueErrorCheck((yyvsp[-1].interm).loc, "assign", (yyvsp[-2].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addAssign((yyvsp[-1].interm).op, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].interm).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.assignError((yyvsp[-1].interm).loc, "assign", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        } else if (((yyvsp[-2].interm.intermTypedNode)->isArray() || (yyvsp[0].interm.intermTypedNode)->isArray()))
            parseContext.profileRequires((yyvsp[-1].interm).loc, ENoProfile, 120, "GL_3DL_array_objects", "=");
    }
#line 3521 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 678 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpAssign; }
#line 3527 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 679 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpMulAssign; }
#line 3533 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 680 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpDivAssign; }
#line 3539 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 681 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpModAssign; }
#line 3545 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 682 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpAddAssign; }
#line 3551 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 683 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpSubAssign; }
#line 3557 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 684 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bit-shift left assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpLeftShiftAssign;
    }
#line 3566 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 688 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bit-shift right assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpRightShiftAssign;
    }
#line 3575 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 692 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-and assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpAndAssign;
    }
#line 3584 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 696 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-xor assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpExclusiveOrAssign;
    }
#line 3593 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 700 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-or assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpInclusiveOrAssign;
    }
#line 3602 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 707 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 3610 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 710 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addComma((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, ",", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 3622 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 720 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.constCheck((yyvsp[0].interm.intermTypedNode), "");
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 3631 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 727 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = 0;
        // TODO: 4.0 functionality: subroutines: make the identifier a user type for this signature
    }
#line 3640 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 731 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].interm).intermAggregate)
            (yyvsp[-1].interm).intermAggregate->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-1].interm).intermAggregate;
    }
#line 3650 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 736 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[-3].lex).loc, ENoProfile, 130, 0, "precision statement");

        // lazy setting of the previous scope's defaults, has effect only the first time it is called in a particular scope
        parseContext.symbolTable.setPreviousDefaultPrecisions(&parseContext.defaultPrecision[0]);

		parseContext.setDefaultPrecision((yyvsp[-3].lex).loc, (yyvsp[-1].interm.type), (yyvsp[-2].interm.type).qualifier.precision);
        (yyval.interm.intermNode) = 0;
    }
#line 3664 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 745 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.addBlock((yyvsp[-1].interm).loc, *(yyvsp[-1].interm).typeList);
        (yyval.interm.intermNode) = 0;
    }
#line 3673 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 749 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.addBlock((yyvsp[-2].interm).loc, *(yyvsp[-2].interm).typeList, (yyvsp[-1].lex).string);
        (yyval.interm.intermNode) = 0;
    }
#line 3682 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 753 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.addBlock((yyvsp[-3].interm).loc, *(yyvsp[-3].interm).typeList, (yyvsp[-2].lex).string, (yyvsp[-1].interm).arraySizes);
        (yyval.interm.intermNode) = 0;
    }
#line 3691 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 757 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.updateQualifierDefaults((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier);
        (yyval.interm.intermNode) = 0;
    }
#line 3700 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 761 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.addQualifierToExisting((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).qualifier, *(yyvsp[-1].lex).string);
        (yyval.interm.intermNode) = 0;
    }
#line 3709 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 765 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyvsp[-1].interm.identifierList)->push_back((yyvsp[-2].lex).string);
        parseContext.addQualifierToExisting((yyvsp[-3].interm.type).loc, (yyvsp[-3].interm.type).qualifier, *(yyvsp[-1].interm.identifierList));
        (yyval.interm.intermNode) = 0;
    }
#line 3719 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 773 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.nestedBlockCheck((yyvsp[-2].interm.type).loc); }
#line 3725 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 773 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        --parseContext.structNestingLevel;
        parseContext.blockName = (yyvsp[-4].lex).string;
        parseContext.currentBlockDefaults = (yyvsp[-5].interm.type).qualifier;
        (yyval.interm).loc = (yyvsp[-5].interm.type).loc;
        (yyval.interm).typeList = (yyvsp[-1].interm.typeList);
    }
#line 3737 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 782 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.identifierList) = NewPoolTIdentifierList();
        (yyval.interm.identifierList)->push_back((yyvsp[0].lex).string);
    }
#line 3746 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 786 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.identifierList) = (yyvsp[-2].interm.identifierList);
        (yyval.interm.identifierList)->push_back((yyvsp[0].lex).string);
    }
#line 3755 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 793 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // ES can't declare prototypes inside functions
        if (! parseContext.symbolTable.atGlobalLevel())
            parseContext.requireProfile((yyvsp[0].lex).loc, static_cast<EProfileMask>(~EEsProfileMask), "local function declaration");

        //
        // Multiple declarations of the same function are allowed.
        //
        // If this is a definition, the definition production code will check for redefinitions
        // (we don't know at this point if it's a definition or not).
        //
        // Redeclarations (full prototype match) are allowed.  But, return types and parameter qualifiers must match.
        //
        // ES does not allow redeclaring or hiding of built-in functions.
        //
        bool builtIn;
        TSymbol* symbol = parseContext.symbolTable.find((yyvsp[-1].interm.function)->getMangledName(), &builtIn);
        if (symbol && symbol->getAsFunction() && builtIn)
            parseContext.requireProfile((yyvsp[0].lex).loc, static_cast<EProfileMask>(~EEsProfileMask), "redeclaration of built-in function");
        const TFunction* prevDec = symbol ? symbol->getAsFunction() : 0;
        if (prevDec) {
            if (prevDec->getReturnType() != (yyvsp[-1].interm.function)->getReturnType()) {
                parseContext.error((yyvsp[0].lex).loc, "overloaded functions must have the same return type", (yyvsp[-1].interm.function)->getReturnType().getCompleteTypeString().c_str(), "");
            }
            for (int i = 0; i < prevDec->getParamCount(); ++i) {
                if ((*prevDec)[i].type->getQualifier().storage != (*(yyvsp[-1].interm.function))[i].type->getQualifier().storage)
                    parseContext.error((yyvsp[0].lex).loc, "overloaded functions must have the same parameter qualifiers", (*(yyvsp[-1].interm.function))[i].type->getStorageQualifierString(), "");
            }
        }

        //
        // If this is a redeclaration, it could also be a definition,
        // in which case, we want to use the variable names from this one, and not the one that's
        // being redeclared.  So, pass back up this declaration, not the one in the symbol table.
        //
        (yyval.interm).function = (yyvsp[-1].interm.function);
        (yyval.interm).loc = (yyvsp[0].lex).loc;

        if (! parseContext.symbolTable.insert(*(yyval.interm).function))
            parseContext.error((yyvsp[0].lex).loc, "illegal redeclaration", (yyval.interm).function->getName().c_str(), "");
    }
#line 3801 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 837 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.function) = (yyvsp[0].interm.function);
    }
#line 3809 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 840 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.function) = (yyvsp[0].interm.function);
    }
#line 3817 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 847 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // Add the parameter
        (yyval.interm.function) = (yyvsp[-1].interm.function);
        if ((yyvsp[0].interm).param.type->getBasicType() != EbtVoid)
            (yyvsp[-1].interm.function)->addParameter((yyvsp[0].interm).param);
        else
            delete (yyvsp[0].interm).param.type;
    }
#line 3830 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 855 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        //
        // Only first parameter of one-parameter functions can be void
        // The check for named parameters not being void is done in parameter_declarator
        //
        if ((yyvsp[0].interm).param.type->getBasicType() == EbtVoid) {
            //
            // This parameter > first is void
            //
            parseContext.error((yyvsp[-1].lex).loc, "cannot be an argument type except for '(void)'", "void", "");
            delete (yyvsp[0].interm).param.type;
        } else {
            // Add the parameter
            (yyval.interm.function) = (yyvsp[-2].interm.function);
            (yyvsp[-2].interm.function)->addParameter((yyvsp[0].interm).param);
        }
    }
#line 3852 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 875 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.type).qualifier.storage != EvqGlobal && (yyvsp[-2].interm.type).qualifier.storage != EvqTemporary) {
            parseContext.error((yyvsp[-1].lex).loc, "no qualifiers allowed for function return",
                               GetStorageQualifierString((yyvsp[-2].interm.type).qualifier.storage), "");
        }

        // Add the function as a prototype after parsing it (we do not support recursion)
        TFunction *function;
        TType type((yyvsp[-2].interm.type));
        function = new TFunction((yyvsp[-1].lex).string, type);
        (yyval.interm.function) = function;
    }
#line 3869 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 891 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[-1].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[-1].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).arraySizes->getSize());
        }
        if ((yyvsp[-1].interm.type).basicType == EbtVoid) {
            parseContext.error((yyvsp[0].lex).loc, "illegal use of type 'void'", (yyvsp[0].lex).string->c_str(), "");
        }
        parseContext.reservedErrorCheck((yyvsp[0].lex).loc, *(yyvsp[0].lex).string);

        TParameter param = {(yyvsp[0].lex).string, new TType((yyvsp[-1].interm.type))};
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).param = param;
    }
#line 3889 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 906 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).arraySizes->getSize());
        }
        parseContext.arrayDimCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.type).arraySizes, (yyvsp[0].interm).arraySizes);

        parseContext.arraySizeRequiredCheck((yyvsp[0].interm).loc, (yyvsp[0].interm).arraySizes->getSize());
        parseContext.reservedErrorCheck((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string);

        (yyvsp[-2].interm.type).arraySizes = (yyvsp[0].interm).arraySizes;

        TParameter param = { (yyvsp[-1].lex).string, new TType((yyvsp[-2].interm.type))};
        (yyval.interm).loc = (yyvsp[-1].lex).loc;
        (yyval.interm).param = param;
    }
#line 3911 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 929 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
        if ((yyvsp[-1].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[-1].interm.type).qualifier.precision;

        parseContext.parameterSamplerCheck((yyvsp[0].interm).loc, (yyvsp[-1].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier.storage, (yyval.interm).param.type);
    }
#line 3924 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 937 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);

        parseContext.parameterSamplerCheck((yyvsp[0].interm).loc, EvqIn, *(yyvsp[0].interm).param.type);
        parseContext.paramCheck((yyvsp[0].interm).loc, EvqTemporary, (yyval.interm).param.type);
    }
#line 3935 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 946 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
        if ((yyvsp[-1].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[-1].interm.type).qualifier.precision;

        parseContext.parameterSamplerCheck((yyvsp[0].interm).loc, (yyvsp[-1].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier.storage, (yyval.interm).param.type);
    }
#line 3948 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 954 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);

        parseContext.parameterSamplerCheck((yyvsp[0].interm).loc, EvqIn, *(yyvsp[0].interm).param.type);
        parseContext.paramCheck((yyvsp[0].interm).loc, EvqTemporary, (yyval.interm).param.type);
    }
#line 3959 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 963 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TParameter param = { 0, new TType((yyvsp[0].interm.type)) };
        (yyval.interm).param = param;
    }
#line 3968 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 970 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 3976 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 973 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-2].interm);
        parseContext.nonInitConstCheck((yyvsp[0].lex).loc, *(yyvsp[0].lex).string, (yyval.interm).type);
        parseContext.nonInitCheck((yyvsp[0].lex).loc, *(yyvsp[0].lex).string, (yyval.interm).type);
    }
#line 3986 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 978 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.nonInitConstCheck((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string, (yyvsp[-3].interm).type);
        if (parseContext.profile == EEsProfile)
            parseContext.arraySizeRequiredCheck((yyvsp[0].interm).loc, (yyvsp[0].interm).arraySizes->getSize());
        parseContext.arrayDimCheck((yyvsp[-1].lex).loc, (yyvsp[-3].interm).type.arraySizes, (yyvsp[0].interm).arraySizes);

        (yyval.interm) = (yyvsp[-3].interm);

        if (! parseContext.arrayQualifierError((yyvsp[0].interm).loc, (yyvsp[-3].interm).type)) {
            (yyvsp[-3].interm).type.arraySizes = (yyvsp[0].interm).arraySizes;
            TVariable* variable;
            parseContext.arrayCheck((yyvsp[0].interm).loc, *(yyvsp[-1].lex).string, (yyvsp[-3].interm).type, variable);
        }
    }
#line 4005 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 992 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-5].interm);

        TVariable* variable = 0;
        if (! parseContext.arrayQualifierError((yyvsp[-2].interm).loc, (yyvsp[-5].interm).type)) {
            (yyvsp[-5].interm).type.arraySizes = (yyvsp[-2].interm).arraySizes;
            parseContext.arrayCheck((yyvsp[-2].interm).loc, *(yyvsp[-3].lex).string, (yyvsp[-5].interm).type, variable);
        }
        parseContext.arrayDimCheck((yyvsp[-3].lex).loc, (yyvsp[-5].interm).type.arraySizes, (yyvsp[-2].interm).arraySizes);

        parseContext.profileRequires((yyvsp[-1].lex).loc, ENoProfile, 120, "GL_3DL_array_objects", "initializer");

        TIntermNode* intermNode;
        if (! parseContext.executeInitializerError((yyvsp[-3].lex).loc, *(yyvsp[-3].lex).string, (yyvsp[-5].interm).type, (yyvsp[0].interm.intermTypedNode), intermNode, variable)) {
            //
            // build the intermediate representation
            //
            if (intermNode)
                (yyval.interm).intermAggregate = parseContext.intermediate.growAggregate((yyvsp[-5].interm).intermNode, intermNode, (yyvsp[-1].lex).loc);
            else
                (yyval.interm).intermAggregate = (yyvsp[-5].interm).intermAggregate;
        } else
            (yyval.interm).intermAggregate = 0;
    }
#line 4034 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1016 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-4].interm);

        TIntermNode* intermNode;
        if (!parseContext.executeInitializerError((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-4].interm).type, (yyvsp[0].interm.intermTypedNode), intermNode)) {
            //
            // build the intermediate representation
            //
            if (intermNode)
                (yyval.interm).intermAggregate = parseContext.intermediate.growAggregate((yyvsp[-4].interm).intermNode, intermNode, (yyvsp[-1].lex).loc);
            else
                (yyval.interm).intermAggregate = (yyvsp[-4].interm).intermAggregate;
        } else
            (yyval.interm).intermAggregate = 0;
    }
#line 4054 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1034 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[0].interm.type);
        (yyval.interm).intermAggregate = 0;
        parseContext.updateTypedDefaults((yyvsp[0].interm.type).loc, (yyval.interm).type.qualifier, 0);
    }
#line 4064 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1039 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).intermAggregate = 0;
        (yyval.interm).type = (yyvsp[-1].interm.type);

        parseContext.nonInitConstCheck((yyvsp[0].lex).loc, *(yyvsp[0].lex).string, (yyval.interm).type);
        parseContext.nonInitCheck((yyvsp[0].lex).loc, *(yyvsp[0].lex).string, (yyval.interm).type);
        
        parseContext.updateTypedDefaults((yyvsp[0].lex).loc, (yyval.interm).type.qualifier, (yyvsp[0].lex).string);
    }
#line 4078 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1048 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).intermAggregate = 0;
        parseContext.nonInitConstCheck((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string, (yyvsp[-2].interm.type));        
        if (parseContext.profile == EEsProfile)
            parseContext.arraySizeRequiredCheck((yyvsp[0].interm).loc, (yyvsp[0].interm).arraySizes->getSize());        
        parseContext.arrayDimCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.type).arraySizes, (yyvsp[0].interm).arraySizes);

        (yyval.interm).type = (yyvsp[-2].interm.type);

        if (! parseContext.arrayQualifierError((yyvsp[0].interm).loc, (yyvsp[-2].interm.type))) {
            (yyvsp[-2].interm.type).arraySizes = (yyvsp[0].interm).arraySizes;
            TVariable* variable;
            parseContext.arrayCheck((yyvsp[0].interm).loc, *(yyvsp[-1].lex).string, (yyvsp[-2].interm.type), variable);
        }
        parseContext.updateTypedDefaults((yyvsp[-1].lex).loc, (yyval.interm).type.qualifier, (yyvsp[-1].lex).string);
    }
#line 4099 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1064 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {        
        parseContext.arrayDimCheck((yyvsp[-2].interm).loc, (yyvsp[-4].interm.type).arraySizes, (yyvsp[-2].interm).arraySizes);

        (yyval.interm).intermAggregate = 0;
        (yyval.interm).type = (yyvsp[-4].interm.type);

        TVariable* variable = 0;
        if (! parseContext.arrayQualifierError((yyvsp[-2].interm).loc, (yyvsp[-4].interm.type))) {
            (yyvsp[-4].interm.type).arraySizes = (yyvsp[-2].interm).arraySizes;
            parseContext.arrayCheck((yyvsp[-2].interm).loc, *(yyvsp[-3].lex).string, (yyvsp[-4].interm.type), variable);
        }

        parseContext.profileRequires((yyvsp[-1].lex).loc, ENoProfile, 120, "GL_3DL_array_objects", "initializer");

        TIntermNode* intermNode;
        if (!parseContext.executeInitializerError((yyvsp[-3].lex).loc, *(yyvsp[-3].lex).string, (yyvsp[-4].interm.type), (yyvsp[0].interm.intermTypedNode), intermNode, variable)) {
            //
            // Build intermediate representation
            //
            if (intermNode)
                (yyval.interm).intermAggregate = parseContext.intermediate.makeAggregate(intermNode, (yyvsp[-1].lex).loc);
            else
                (yyval.interm).intermAggregate = 0;
        } else
            (yyval.interm).intermAggregate = 0;
    }
#line 4130 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1090 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[-3].interm.type);

        TIntermNode* intermNode;
        if (!parseContext.executeInitializerError((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-3].interm.type), (yyvsp[0].interm.intermTypedNode), intermNode)) {
            //
            // Build intermediate representation
            //
            if (intermNode)
                (yyval.interm).intermAggregate = parseContext.intermediate.makeAggregate(intermNode, (yyvsp[-1].lex).loc);
            else
                (yyval.interm).intermAggregate = 0;
        } else
            (yyval.interm).intermAggregate = 0;
    }
#line 4150 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1109 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);

        if ((yyvsp[0].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[0].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[0].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).arraySizes->getSize());
        }

        parseContext.precisionQualifierCheck((yyval.interm.type).loc, (yyval.interm.type));
    }
#line 4167 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1121 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalQualifierFix((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier, (yyvsp[0].interm.type));

        if ((yyvsp[0].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[0].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[0].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).arraySizes->getSize());
        }

        if ((yyvsp[0].interm.type).arraySizes && parseContext.arrayQualifierError((yyvsp[0].interm.type).loc, (yyvsp[-1].interm.type)))
            (yyvsp[0].interm.type).arraySizes = 0;
        
        parseContext.mergeQualifiers((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).qualifier, (yyvsp[-1].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type));

        (yyval.interm.type) = (yyvsp[0].interm.type);

        if (! (yyval.interm.type).qualifier.isInterpolation() && 
            (parseContext.language == EShLangVertex   && (yyval.interm.type).qualifier.storage == EvqVaryingOut ||
             parseContext.language == EShLangFragment && (yyval.interm.type).qualifier.storage == EvqVaryingIn))
            (yyval.interm.type).qualifier.smooth = true;
    }
#line 4195 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1147 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyval.interm.type).loc, ENoProfile, 120, 0, "invariant");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.invariant = true;
    }
#line 4205 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1155 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "smooth");
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "smooth");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "smooth");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.smooth = true;
    }
#line 4217 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1162 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "flat");
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "flat");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "flat");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.flat = true;
    }
#line 4229 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1169 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "noperspective");
        parseContext.requireProfile((yyvsp[0].lex).loc, static_cast<EProfileMask>(~EEsProfileMask), "noperspective");
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "noperspective");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.nopersp = true;
    }
#line 4241 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1179 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[-1].interm.type);
    }
#line 4249 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1185 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4257 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1188 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[-2].interm.type);
        parseContext.mergeLayoutQualifiers((yyvsp[-1].lex).loc, (yyval.interm.type).qualifier, (yyvsp[0].interm.type).qualifier);
    }
#line 4266 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1194 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[0].lex).loc, (yyval.interm.type), *(yyvsp[0].lex).string);
    }
#line 4275 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1198 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[-2].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[-2].lex).loc, (yyval.interm.type), *(yyvsp[-2].lex).string, (yyvsp[0].lex).i);
    }
#line 4284 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1202 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[-2].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[-2].lex).loc, (yyval.interm.type), *(yyvsp[-2].lex).string, (int)(yyvsp[0].lex).u);
    }
#line 4293 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1206 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { // because "shared" is both an identifier and a keyword
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        TString strShared("shared");
        parseContext.setLayoutQualifier((yyvsp[0].lex).loc, (yyval.interm.type), strShared);
    }
#line 4303 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1214 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
    }
#line 4311 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1220 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4319 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1223 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[-1].interm.type);
        if ((yyval.interm.type).basicType == EbtVoid)
            (yyval.interm.type).basicType = (yyvsp[0].interm.type).basicType;

        parseContext.mergeQualifiers((yyval.interm.type).loc, (yyval.interm.type).qualifier, (yyvsp[0].interm.type).qualifier, false);
    }
#line 4331 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1233 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4339 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1236 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4347 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1239 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4355 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1242 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4364 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1246 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4373 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1250 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 4382 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1257 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqConst;
    }
#line 4391 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1261 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangVertexMask, "attribute");
        parseContext.checkDeprecated((yyvsp[0].lex).loc, ECoreProfile, 130, "attribute");
        parseContext.checkDeprecated((yyvsp[0].lex).loc, ENoProfile, 130, "attribute");
        parseContext.requireNotRemoved((yyvsp[0].lex).loc, ECoreProfile, 420, "attribute");
        parseContext.requireNotRemoved((yyvsp[0].lex).loc, EEsProfile, 300, "attribute");

        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "attribute");

        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqVaryingIn;
    }
#line 4408 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1273 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.checkDeprecated((yyvsp[0].lex).loc, ENoProfile, 130, "varying");
        parseContext.checkDeprecated((yyvsp[0].lex).loc, ECoreProfile, 130, "varying");
        parseContext.requireNotRemoved((yyvsp[0].lex).loc, ECoreProfile, 420, "varying");
        parseContext.requireNotRemoved((yyvsp[0].lex).loc, EEsProfile, 300, "varying");

        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "varying");

        (yyval.interm.type).init((yyvsp[0].lex).loc);
        if (parseContext.language == EShLangVertex)
            (yyval.interm.type).qualifier.storage = EvqVaryingOut;
        else
            (yyval.interm.type).qualifier.storage = EvqVaryingIn;
    }
#line 4427 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1287 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "out");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqInOut;
    }
#line 4437 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1292 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "in");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqIn;
    }
#line 4447 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1297 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "out");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqOut;
    }
#line 4457 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1302 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 120, 0, "centroid");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "centroid");
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "centroid");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.centroid = true;
    }
#line 4469 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1309 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "patch");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.patch = true;
    }
#line 4479 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1314 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "sample");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.sample = true;
    }
#line 4489 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1319 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "uniform");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
    }
#line 4499 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1324 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "buffer");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform; // TODO: 4.0 functionality: implement BUFFER
    }
#line 4509 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1329 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.requireProfile((yyvsp[0].lex).loc, static_cast<EProfileMask>(~EEsProfileMask), "shared");
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 430, 0, "shared");
        parseContext.requireStage((yyvsp[0].lex).loc, EShLangComputeMask, "shared");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.shared = true;
    }
#line 4521 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1336 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.coherent = true;
    }
#line 4530 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1340 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.volatil = true;
    }
#line 4539 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1344 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.restrict = true;
    }
#line 4548 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1348 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.readonly = true;
    }
#line 4557 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1352 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.writeonly = true;
    }
#line 4566 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1356 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel(), "subroutine");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
    }
#line 4576 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1361 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[-3].lex).loc, parseContext.symbolTable.atGlobalLevel(), "subroutine");
        (yyval.interm.type).init((yyvsp[-3].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
        // TODO: 4.0 semantics: subroutines
        // 1) make sure each identifier is a type declared earlier with SUBROUTINE
        // 2) save all of the identifiers for future comparison with the declared function
    }
#line 4589 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1372 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // TODO: 4.0 functionality: subroutine type to list
    }
#line 4597 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1375 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
    }
#line 4604 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1380 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
    }
#line 4613 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1384 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {        
        parseContext.arrayDimCheck((yyvsp[0].interm).loc, (yyvsp[0].interm).arraySizes, 0);
        (yyval.interm.type) = (yyvsp[-1].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
        (yyval.interm.type).arraySizes = (yyvsp[0].interm).arraySizes;
    }
#line 4624 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1393 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[-1].lex).loc;
        (yyval.interm).arraySizes = NewPoolTArraySizes();
        (yyval.interm).arraySizes->setSize(0);
    }
#line 4634 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1398 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[-2].lex).loc;
        (yyval.interm).arraySizes = NewPoolTArraySizes();

        int size;
        parseContext.arraySizeCheck((yyvsp[-1].interm.intermTypedNode)->getLoc(), (yyvsp[-1].interm.intermTypedNode), size);
        (yyval.interm).arraySizes->setSize(size);
    }
#line 4647 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1406 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-2].interm);
        (yyval.interm).arraySizes->setSize(0);
    }
#line 4656 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1410 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-3].interm);

        int size;
        parseContext.arraySizeCheck((yyvsp[-1].interm.intermTypedNode)->getLoc(), (yyvsp[-1].interm.intermTypedNode), size);
        (yyval.interm).arraySizes->setSize(size);
    }
#line 4668 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1420 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtVoid;
    }
#line 4677 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1424 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
    }
#line 4686 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1428 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
    }
#line 4696 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1433 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
    }
#line 4705 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1437 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
    }
#line 4715 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1442 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
    }
#line 4724 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1446 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(2);
    }
#line 4734 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1451 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(3);
    }
#line 4744 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1456 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(4);
    }
#line 4754 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1461 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(2);
    }
#line 4765 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1467 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(3);
    }
#line 4776 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1473 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(4);
    }
#line 4787 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1479 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(2);
    }
#line 4797 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1484 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(3);
    }
#line 4807 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1489 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(4);
    }
#line 4817 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1494 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(2);
    }
#line 4827 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1499 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(3);
    }
#line 4837 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1504 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(4);
    }
#line 4847 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1509 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(2);
    }
#line 4858 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1515 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(3);
    }
#line 4869 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1521 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(4);
    }
#line 4880 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1527 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 4890 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1532 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 4900 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1537 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 4910 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1542 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 4920 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1547 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 4930 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1552 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 4940 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1557 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 4950 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1562 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 4960 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1567 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 4970 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1572 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 4980 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1577 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 4990 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1582 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 5000 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1587 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 5011 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1593 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 5022 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1599 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 5033 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1605 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 5044 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1611 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 5055 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1617 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 5066 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1623 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 5077 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1629 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 5088 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1635 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 5099 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1641 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 5110 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1647 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 5121 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1653 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.doubleCheck((yyvsp[0].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 5132 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1659 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // TODO: 4.2 functionality: add type
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
    }
#line 5142 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1664 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D);
    }
#line 5152 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1669 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D);
    }
#line 5162 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1674 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd3D);
    }
#line 5172 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1679 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube);
    }
#line 5182 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1684 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, false, true);
    }
#line 5192 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1689 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, true);
    }
#line 5202 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1694 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, false, true);
    }
#line 5212 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1699 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, true);
    }
#line 5222 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1704 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true);
    }
#line 5232 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1709 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, true, true);
    }
#line 5242 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1714 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, true);
    }
#line 5252 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1719 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true);
    }
#line 5262 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1724 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true, true);
    }
#line 5272 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1729 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd1D);
    }
#line 5282 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1734 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D);
    }
#line 5292 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1739 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd3D);
    }
#line 5302 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1744 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdCube);
    }
#line 5312 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1749 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd1D, true);
    }
#line 5322 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1754 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true);
    }
#line 5332 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1759 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd3D, true);
    }
#line 5342 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1764 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd1D);
    }
#line 5352 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1769 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D);
    }
#line 5362 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1774 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd3D);
    }
#line 5372 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1779 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube);
    }
#line 5382 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1784 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd1D, true);
    }
#line 5392 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1789 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true);
    }
#line 5402 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1794 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube, true);
    }
#line 5412 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1799 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdRect);
    }
#line 5424 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1806 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdRect, false, true);
    }
#line 5436 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1813 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdRect);
    }
#line 5448 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1820 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdRect);
    }
#line 5460 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1827 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdBuffer);
    }
#line 5470 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1832 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdBuffer);
    }
#line 5480 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1837 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdBuffer);
    }
#line 5490 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1842 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, false, true);
    }
#line 5500 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1847 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, false, false, true);
    }
#line 5510 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1852 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, false, false, true);
    }
#line 5520 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1857 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, false, true);
    }
#line 5530 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1862 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true, false, true);
    }
#line 5540 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1867 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true, false, true);
    }
#line 5550 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1872 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd1D);
    }
#line 5560 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1877 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd1D);
    }
#line 5570 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1882 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd1D);
    }
#line 5580 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1887 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D);
    }
#line 5590 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1892 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D);
    }
#line 5600 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1897 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D);
    }
#line 5610 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1902 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd3D);
    }
#line 5620 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1907 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd3D);
    }
#line 5630 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1912 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd3D);
    }
#line 5640 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1917 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdRect);
    }
#line 5650 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1922 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdRect);
    }
#line 5660 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1927 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdRect);
    }
#line 5670 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1932 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdCube);
    }
#line 5680 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1937 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdCube);
    }
#line 5690 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1942 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdCube);
    }
#line 5700 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1947 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdBuffer);
    }
#line 5710 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1952 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdBuffer);
    }
#line 5720 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1957 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdBuffer);
    }
#line 5730 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1962 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd1D, true);
    }
#line 5740 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1967 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd1D, true);
    }
#line 5750 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1972 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd1D, true);
    }
#line 5760 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1977 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, true);
    }
#line 5770 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1982 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, true);
    }
#line 5780 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1987 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, true);
    }
#line 5790 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1992 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdCube, true);
    }
#line 5800 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1997 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdCube, true);
    }
#line 5810 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2002 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdCube, true);
    }
#line 5820 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2007 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, false, false, true);
    }
#line 5830 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2012 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, false, false, true);
    }
#line 5840 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2017 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, false, false, true);
    }
#line 5850 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2022 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, true, false, true);
    }
#line 5860 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2027 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, true, false, true);
    }
#line 5870 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2032 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, true, false, true);
    }
#line 5880 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2037 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
        (yyval.interm.type).qualifier.storage = parseContext.symbolTable.atGlobalLevel() ? EvqGlobal : EvqTemporary;
    }
#line 5889 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2041 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        //
        // This is for user defined type names.  The lexical phase looked up the
        // type.
        //
        if (const TVariable* variable = ((yyvsp[0].lex).symbol)->getAsVariable()) {
            const TType& structure = variable->getType();
            (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
            (yyval.interm.type).basicType = EbtStruct;
            (yyval.interm.type).userDef = &structure;
        } else
            parseContext.error((yyvsp[0].lex).loc, "expected type name", (yyvsp[0].lex).string->c_str(), "");
    }
#line 5907 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2057 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "highp precision qualifier");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        if (parseContext.profile == EEsProfile)
		    (yyval.interm.type).qualifier.precision = EpqHigh;
    }
#line 5918 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2063 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "mediump precision qualifier");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        if (parseContext.profile == EEsProfile)
	    	(yyval.interm.type).qualifier.precision = EpqMedium;
    }
#line 5929 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2069 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "lowp precision qualifier");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        if (parseContext.profile == EEsProfile)
    		(yyval.interm.type).qualifier.precision = EpqLow;
    }
#line 5940 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2078 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.nestedStructCheck((yyvsp[-2].lex).loc); }
#line 5946 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 2078 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TType* structure = new TType((yyvsp[-1].interm.typeList), *(yyvsp[-4].lex).string);
        TVariable* userTypeDef = new TVariable((yyvsp[-4].lex).string, *structure, true);
        if (! parseContext.symbolTable.insert(*userTypeDef))
            parseContext.error((yyvsp[-4].lex).loc, "redefinition", (yyvsp[-4].lex).string->c_str(), "struct");
        (yyval.interm.type).init((yyvsp[-5].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    }
#line 5961 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 2088 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.nestedStructCheck((yyvsp[-1].lex).loc); }
#line 5967 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 2088 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TType* structure = new TType((yyvsp[-1].interm.typeList), TString(""));
        (yyval.interm.type).init((yyvsp[-4].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    }
#line 5979 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 2098 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeList) = (yyvsp[0].interm.typeList);
    }
#line 5987 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 2101 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);
        for (unsigned int i = 0; i < (yyvsp[0].interm.typeList)->size(); ++i) {
            for (unsigned int j = 0; j < (yyval.interm.typeList)->size(); ++j) {
                if ((*(yyval.interm.typeList))[j].type->getFieldName() == (*(yyvsp[0].interm.typeList))[i].type->getFieldName())
                    parseContext.error((*(yyvsp[0].interm.typeList))[i].loc, "duplicate member name:", "", (*(yyvsp[0].interm.typeList))[i].type->getFieldName().c_str());
            }
            (yyval.interm.typeList)->push_back((*(yyvsp[0].interm.typeList))[i]);
        }
    }
#line 6002 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 2114 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).arraySizes->getSize());
        }

        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);

        parseContext.voidErrorCheck((yyvsp[-2].interm.type).loc, (*(yyvsp[-1].interm.typeList))[0].type->getFieldName(), (yyvsp[-2].interm.type));
        parseContext.precisionQualifierCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type));

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            parseContext.arrayDimCheck((yyvsp[-2].interm.type).loc, (*(yyval.interm.typeList))[i].type, (yyvsp[-2].interm.type).arraySizes);
            (*(yyval.interm.typeList))[i].type->mergeType((yyvsp[-2].interm.type));
        }
    }
#line 6025 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 2132 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).arraySizes->getSize());
        }

        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);

        parseContext.voidErrorCheck((yyvsp[-2].interm.type).loc, (*(yyvsp[-1].interm.typeList))[0].type->getFieldName(), (yyvsp[-2].interm.type));
        parseContext.mergeQualifiers((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).qualifier, (yyvsp[-3].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type));

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            parseContext.arrayDimCheck((yyvsp[-3].interm.type).loc, (*(yyval.interm.typeList))[i].type, (yyvsp[-2].interm.type).arraySizes);
            (*(yyval.interm.typeList))[i].type->mergeType((yyvsp[-2].interm.type));
        }
    }
#line 6049 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 2154 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeList) = NewPoolTTypeList();
        (yyval.interm.typeList)->push_back((yyvsp[0].interm.typeLine));
    }
#line 6058 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 2158 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeList)->push_back((yyvsp[0].interm.typeLine));
    }
#line 6066 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 2164 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[0].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[0].lex).string);
    }
#line 6076 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 2169 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {        
        if (parseContext.profile == EEsProfile)
            parseContext.arraySizeRequiredCheck((yyvsp[0].interm).loc, (yyvsp[0].interm).arraySizes->getSize());
        parseContext.arrayDimCheck((yyvsp[-1].lex).loc, (yyvsp[0].interm).arraySizes, 0);

        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[-1].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[-1].lex).string);
        (yyval.interm.typeLine).type->setArraySizes((yyvsp[0].interm).arraySizes);
    }
#line 6091 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 2182 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 6099 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 2185 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
    }
#line 6107 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 2188 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 6115 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 2194 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 6123 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 2197 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // TODO: 4.2 functionality: implement the initializer list
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 6132 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 2204 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6138 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 2208 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermAggregate); }
#line 6144 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 2209 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6150 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 2215 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6156 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 2216 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6162 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 2217 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6168 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 2218 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6174 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 2219 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6180 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 2220 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6186 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 2221 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6192 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2225 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermAggregate) = 0; }
#line 6198 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2226 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.symbolTable.push(); }
#line 6204 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2227 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]); }
#line 6210 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2228 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.intermAggregate) != 0)
            (yyvsp[-2].interm.intermAggregate)->setOperator(EOpSequence);
        (yyval.interm.intermAggregate) = (yyvsp[-2].interm.intermAggregate);
    }
#line 6220 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2236 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6226 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2237 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 6232 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2241 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermAggregate); }
#line 6238 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2242 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.symbolTable.push(); }
#line 6244 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2242 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]); }
#line 6250 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2242 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[-1].interm.intermNode); }
#line 6256 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2246 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = 0;
    }
#line 6264 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2249 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].interm.intermAggregate))
            (yyvsp[-1].interm.intermAggregate)->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-1].interm.intermAggregate);
    }
#line 6274 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2257 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermAggregate) = parseContext.intermediate.makeAggregate((yyvsp[0].interm.intermNode));
        if ((yyvsp[0].interm.intermNode) && (yyvsp[0].interm.intermNode)->getAsBranchNode() && ((yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            (yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence(0, (yyvsp[0].interm.intermNode));
            (yyval.interm.intermAggregate) = 0;  // start a fresh subsequence for what's after this case
        }
    }
#line 6287 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2265 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].interm.intermNode) && (yyvsp[0].interm.intermNode)->getAsBranchNode() && ((yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase || 
                                            (yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence((yyvsp[-1].interm.intermAggregate), (yyvsp[0].interm.intermNode));
            (yyval.interm.intermAggregate) = 0;  // start a fresh subsequence for what's after this case
        } else
            (yyval.interm.intermAggregate) = parseContext.intermediate.growAggregate((yyvsp[-1].interm.intermAggregate), (yyvsp[0].interm.intermNode));
    }
#line 6300 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2276 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = 0; }
#line 6306 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2277 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = static_cast<TIntermNode*>((yyvsp[-1].interm.intermTypedNode)); }
#line 6312 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2281 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.boolCheck((yyvsp[-4].lex).loc, (yyvsp[-2].interm.intermTypedNode));
        (yyval.interm.intermNode) = parseContext.intermediate.addSelection((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.nodePair), (yyvsp[-4].lex).loc);
    }
#line 6321 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2288 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.nodePair).node1 = (yyvsp[-2].interm.intermNode);
        (yyval.interm.nodePair).node2 = (yyvsp[0].interm.intermNode);
    }
#line 6330 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2292 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.nodePair).node1 = (yyvsp[0].interm.intermNode);
        (yyval.interm.nodePair).node2 = 0;
    }
#line 6339 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2300 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        parseContext.boolCheck((yyvsp[0].interm.intermTypedNode)->getLoc(), (yyvsp[0].interm.intermTypedNode));
    }
#line 6348 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2304 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TIntermNode* intermNode;
        parseContext.boolCheck((yyvsp[-2].lex).loc, (yyvsp[-3].interm.type));

        if (parseContext.executeInitializerError((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-3].interm.type), (yyvsp[0].interm.intermTypedNode), intermNode))
            (yyval.interm.intermTypedNode) = 0;
        else
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 6362 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2316 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // start new switch sequence on the switch stack
        parseContext.switchSequenceStack.push_back(new TIntermSequence);
    }
#line 6371 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2320 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.addSwitch((yyvsp[-7].lex).loc, (yyvsp[-5].interm.intermTypedNode), (yyvsp[-1].interm.intermAggregate));
        delete parseContext.switchSequenceStack.back();
        parseContext.switchSequenceStack.pop_back();
    }
#line 6381 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2328 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermAggregate) = 0;
    }
#line 6389 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2331 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermAggregate) = (yyvsp[0].interm.intermAggregate);
    }
#line 6397 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2337 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.constCheck((yyvsp[-1].interm.intermTypedNode), "case");
        parseContext.integerCheck((yyvsp[-1].interm.intermTypedNode), "case");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpCase, (yyvsp[-1].interm.intermTypedNode), (yyvsp[-2].lex).loc);
    }
#line 6407 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2342 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpDefault, (yyvsp[-1].lex).loc);
    }
#line 6415 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2348 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
    }
#line 6424 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2352 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[0].interm.intermNode), (yyvsp[-2].interm.intermTypedNode), 0, true, (yyvsp[-5].lex).loc);
        --parseContext.loopNestingLevel;
    }
#line 6434 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2357 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    { ++parseContext.loopNestingLevel; }
#line 6440 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2357 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.boolCheck((yyvsp[0].lex).loc, (yyvsp[-2].interm.intermTypedNode));

        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[-5].interm.intermNode), (yyvsp[-2].interm.intermTypedNode), 0, false, (yyvsp[-4].lex).loc);
        --parseContext.loopNestingLevel;
    }
#line 6451 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2363 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
    }
#line 6460 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2367 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[-3].interm.intermNode), (yyvsp[-5].lex).loc);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate(
                (yyval.interm.intermNode),
                parseContext.intermediate.addLoop((yyvsp[0].interm.intermNode), reinterpret_cast<TIntermTyped*>((yyvsp[-2].interm.nodePair).node1), reinterpret_cast<TIntermTyped*>((yyvsp[-2].interm.nodePair).node2), true, (yyvsp[-6].lex).loc),
                (yyvsp[-6].lex).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        --parseContext.loopNestingLevel;
    }
#line 6475 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2380 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 6483 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2383 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 6491 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 2389 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 6499 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2392 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = 0;
    }
#line 6507 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2398 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.nodePair).node1 = (yyvsp[-1].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = 0;
    }
#line 6516 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2402 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.nodePair).node1 = (yyvsp[-2].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = (yyvsp[0].interm.intermTypedNode);
    }
#line 6525 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2409 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if (parseContext.loopNestingLevel <= 0)
            parseContext.error((yyvsp[-1].lex).loc, "continue statement only allowed in loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpContinue, (yyvsp[-1].lex).loc);
    }
#line 6535 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2414 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if (parseContext.loopNestingLevel + parseContext.switchSequenceStack.size() <= 0)
            parseContext.error((yyvsp[-1].lex).loc, "break statement only allowed in switch and loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpBreak, (yyvsp[-1].lex).loc);
    }
#line 6545 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2419 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpReturn, (yyvsp[-1].lex).loc);
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid)
            parseContext.error((yyvsp[-1].lex).loc, "non-void function must return a value", "return", "");
    }
#line 6555 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2424 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpReturn, (yyvsp[-1].interm.intermTypedNode), (yyvsp[-2].lex).loc);
        parseContext.functionReturnsValue = true;
        if (parseContext.currentFunctionType->getBasicType() == EbtVoid)
            parseContext.error((yyvsp[-2].lex).loc, "void function cannot return a value", "return", "");
        else if (*(parseContext.currentFunctionType) != (yyvsp[-1].interm.intermTypedNode)->getType())
            parseContext.error((yyvsp[-2].lex).loc, "function return is not matching type:", "return", "");
    }
#line 6568 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2432 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.requireStage((yyvsp[-1].lex).loc, EShLangFragmentMask, "discard");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpKill, (yyvsp[-1].lex).loc);
    }
#line 6577 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2441 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
        parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
    }
#line 6586 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2445 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-1].interm.intermNode), (yyvsp[0].interm.intermNode));
        parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
    }
#line 6595 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2452 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 6603 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2455 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 6611 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2461 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyvsp[0].interm).intermAggregate = parseContext.handleFunctionPrototype((yyvsp[0].interm).loc, *(yyvsp[0].interm).function);
    }
#line 6619 "glslang.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2464 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        //   May be best done as post process phase on intermediate code
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid && ! parseContext.functionReturnsValue)
            parseContext.error((yyvsp[-2].interm).loc, "function does not return a value:", "", (yyvsp[-2].interm).function->getName().c_str());
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm).intermAggregate, (yyvsp[0].interm.intermNode));
        parseContext.intermediate.setAggregateOperator((yyval.interm.intermNode), EOpFunction, (yyvsp[-2].interm).function->getReturnType(), (yyvsp[-2].interm).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setName((yyvsp[-2].interm).function->getMangledName().c_str());

        // store the pragma information for debug and optimize and other vendor specific
        // information. This information can be queried from the parse tree
        (yyval.interm.intermNode)->getAsAggregate()->setOptimize(parseContext.contextPragma.optimize);
        (yyval.interm.intermNode)->getAsAggregate()->setDebug(parseContext.contextPragma.debug);
        (yyval.interm.intermNode)->getAsAggregate()->addToPragmaTable(parseContext.contextPragma.pragmaTable);
    }
#line 6639 "glslang.tab.c" /* yacc.c:1646  */
    break;


#line 6643 "glslang.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
  return yyresult;
}
#line 2481 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1906  */

