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
/* Tokens.  */
#define ATTRIBUTE 258
#define VARYING 259
#define CONST 260
#define BOOL 261
#define FLOAT 262
#define DOUBLE 263
#define INT 264
#define UINT 265
#define BREAK 266
#define CONTINUE 267
#define DO 268
#define ELSE 269
#define FOR 270
#define IF 271
#define DISCARD 272
#define RETURN 273
#define SWITCH 274
#define CASE 275
#define DEFAULT 276
#define SUBROUTINE 277
#define BVEC2 278
#define BVEC3 279
#define BVEC4 280
#define IVEC2 281
#define IVEC3 282
#define IVEC4 283
#define UVEC2 284
#define UVEC3 285
#define UVEC4 286
#define VEC2 287
#define VEC3 288
#define VEC4 289
#define MAT2 290
#define MAT3 291
#define MAT4 292
#define CENTROID 293
#define IN 294
#define OUT 295
#define INOUT 296
#define UNIFORM 297
#define PATCH 298
#define SAMPLE 299
#define BUFFER 300
#define SHARED 301
#define COHERENT 302
#define VOLATILE 303
#define RESTRICT 304
#define READONLY 305
#define WRITEONLY 306
#define DVEC2 307
#define DVEC3 308
#define DVEC4 309
#define DMAT2 310
#define DMAT3 311
#define DMAT4 312
#define NOPERSPECTIVE 313
#define FLAT 314
#define SMOOTH 315
#define LAYOUT 316
#define MAT2X2 317
#define MAT2X3 318
#define MAT2X4 319
#define MAT3X2 320
#define MAT3X3 321
#define MAT3X4 322
#define MAT4X2 323
#define MAT4X3 324
#define MAT4X4 325
#define DMAT2X2 326
#define DMAT2X3 327
#define DMAT2X4 328
#define DMAT3X2 329
#define DMAT3X3 330
#define DMAT3X4 331
#define DMAT4X2 332
#define DMAT4X3 333
#define DMAT4X4 334
#define ATOMIC_UINT 335
#define SAMPLER1D 336
#define SAMPLER2D 337
#define SAMPLER3D 338
#define SAMPLERCUBE 339
#define SAMPLER1DSHADOW 340
#define SAMPLER2DSHADOW 341
#define SAMPLERCUBESHADOW 342
#define SAMPLER1DARRAY 343
#define SAMPLER2DARRAY 344
#define SAMPLER1DARRAYSHADOW 345
#define SAMPLER2DARRAYSHADOW 346
#define ISAMPLER1D 347
#define ISAMPLER2D 348
#define ISAMPLER3D 349
#define ISAMPLERCUBE 350
#define ISAMPLER1DARRAY 351
#define ISAMPLER2DARRAY 352
#define USAMPLER1D 353
#define USAMPLER2D 354
#define USAMPLER3D 355
#define USAMPLERCUBE 356
#define USAMPLER1DARRAY 357
#define USAMPLER2DARRAY 358
#define SAMPLER2DRECT 359
#define SAMPLER2DRECTSHADOW 360
#define ISAMPLER2DRECT 361
#define USAMPLER2DRECT 362
#define SAMPLERBUFFER 363
#define ISAMPLERBUFFER 364
#define USAMPLERBUFFER 365
#define SAMPLERCUBEARRAY 366
#define SAMPLERCUBEARRAYSHADOW 367
#define ISAMPLERCUBEARRAY 368
#define USAMPLERCUBEARRAY 369
#define SAMPLER2DMS 370
#define ISAMPLER2DMS 371
#define USAMPLER2DMS 372
#define SAMPLER2DMSARRAY 373
#define ISAMPLER2DMSARRAY 374
#define USAMPLER2DMSARRAY 375
#define IMAGE1D 376
#define IIMAGE1D 377
#define UIMAGE1D 378
#define IMAGE2D 379
#define IIMAGE2D 380
#define UIMAGE2D 381
#define IMAGE3D 382
#define IIMAGE3D 383
#define UIMAGE3D 384
#define IMAGE2DRECT 385
#define IIMAGE2DRECT 386
#define UIMAGE2DRECT 387
#define IMAGECUBE 388
#define IIMAGECUBE 389
#define UIMAGECUBE 390
#define IMAGEBUFFER 391
#define IIMAGEBUFFER 392
#define UIMAGEBUFFER 393
#define IMAGE1DARRAY 394
#define IIMAGE1DARRAY 395
#define UIMAGE1DARRAY 396
#define IMAGE2DARRAY 397
#define IIMAGE2DARRAY 398
#define UIMAGE2DARRAY 399
#define IMAGECUBEARRAY 400
#define IIMAGECUBEARRAY 401
#define UIMAGECUBEARRAY 402
#define IMAGE2DMS 403
#define IIMAGE2DMS 404
#define UIMAGE2DMS 405
#define IMAGE2DMSARRAY 406
#define IIMAGE2DMSARRAY 407
#define UIMAGE2DMSARRAY 408
#define STRUCT 409
#define VOID 410
#define WHILE 411
#define IDENTIFIER 412
#define TYPE_NAME 413
#define FLOATCONSTANT 414
#define DOUBLECONSTANT 415
#define INTCONSTANT 416
#define UINTCONSTANT 417
#define BOOLCONSTANT 418
#define FIELD_SELECTION 419
#define LEFT_OP 420
#define RIGHT_OP 421
#define INC_OP 422
#define DEC_OP 423
#define LE_OP 424
#define GE_OP 425
#define EQ_OP 426
#define NE_OP 427
#define AND_OP 428
#define OR_OP 429
#define XOR_OP 430
#define MUL_ASSIGN 431
#define DIV_ASSIGN 432
#define ADD_ASSIGN 433
#define MOD_ASSIGN 434
#define LEFT_ASSIGN 435
#define RIGHT_ASSIGN 436
#define AND_ASSIGN 437
#define XOR_ASSIGN 438
#define OR_ASSIGN 439
#define SUB_ASSIGN 440
#define LEFT_PAREN 441
#define RIGHT_PAREN 442
#define LEFT_BRACKET 443
#define RIGHT_BRACKET 444
#define LEFT_BRACE 445
#define RIGHT_BRACE 446
#define DOT 447
#define COMMA 448
#define COLON 449
#define EQUAL 450
#define SEMICOLON 451
#define BANG 452
#define DASH 453
#define TILDE 454
#define PLUS 455
#define STAR 456
#define SLASH 457
#define PERCENT 458
#define LEFT_ANGLE 459
#define RIGHT_ANGLE 460
#define VERTICAL_BAR 461
#define CARET 462
#define AMPERSAND 463
#define QUESTION 464
#define INVARIANT 465
#define PRECISE 466
#define HIGH_PRECISION 467
#define MEDIUM_PRECISION 468
#define LOW_PRECISION 469
#define PRECISION 470
#define PACKED 471
#define RESOURCE 472
#define SUPERP 473




/* Copy the first part of user declarations.  */
#line 41 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"


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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#line 66 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
{
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
}
/* Line 193 of yacc.c.  */
#line 590 "glslang.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 99 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"


#define YYPARSE_PARAM voidParseContext
#define parseContext (*(TParseContext*)voidParseContext)
#define YYLEX_PARAM parseContext
#define yyerror(msg) parseContext.parserError(msg)

extern int yylex(YYSTYPE*, TParseContext&);



/* Line 216 of yacc.c.  */
#line 613 "glslang.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  198
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4713

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  219
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  369
/* YYNRULES -- Number of states.  */
#define YYNSTATES  501

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   473

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      21,    23,    28,    30,    34,    37,    40,    42,    44,    46,
      49,    52,    55,    57,    60,    64,    67,    69,    71,    73,
      76,    79,    82,    84,    86,    88,    90,    92,    96,   100,
     104,   106,   110,   114,   116,   120,   124,   126,   130,   134,
     138,   142,   144,   148,   152,   154,   158,   160,   164,   166,
     170,   172,   176,   178,   182,   184,   188,   190,   196,   198,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     222,   224,   226,   230,   232,   235,   238,   243,   246,   250,
     255,   258,   262,   267,   268,   275,   278,   282,   285,   287,
     289,   292,   296,   300,   303,   307,   310,   312,   315,   317,
     319,   321,   325,   330,   337,   343,   345,   348,   352,   358,
     363,   365,   368,   370,   372,   374,   376,   381,   383,   387,
     389,   393,   397,   399,   401,   403,   406,   408,   410,   412,
     414,   416,   418,   420,   422,   424,   426,   428,   430,   432,
     434,   436,   438,   440,   442,   444,   446,   448,   450,   452,
     454,   459,   461,   465,   467,   470,   473,   477,   481,   486,
     488,   490,   492,   494,   496,   498,   500,   502,   504,   506,
     508,   510,   512,   514,   516,   518,   520,   522,   524,   526,
     528,   530,   532,   534,   536,   538,   540,   542,   544,   546,
     548,   550,   552,   554,   556,   558,   560,   562,   564,   566,
     568,   570,   572,   574,   576,   578,   580,   582,   584,   586,
     588,   590,   592,   594,   596,   598,   600,   602,   604,   606,
     608,   610,   612,   614,   616,   618,   620,   622,   624,   626,
     628,   630,   632,   634,   636,   638,   640,   642,   644,   646,
     648,   650,   652,   654,   656,   658,   660,   662,   664,   666,
     668,   670,   672,   674,   676,   678,   680,   682,   684,   686,
     688,   690,   692,   694,   696,   698,   700,   702,   704,   706,
     708,   710,   712,   714,   716,   718,   720,   722,   724,   726,
     728,   730,   732,   734,   735,   742,   743,   749,   751,   754,
     758,   763,   765,   769,   771,   774,   776,   780,   785,   787,
     791,   793,   795,   797,   799,   801,   803,   805,   807,   809,
     811,   814,   815,   816,   822,   824,   826,   828,   829,   830,
     834,   837,   841,   843,   846,   848,   851,   857,   861,   863,
     865,   870,   871,   880,   881,   883,   887,   890,   891,   898,
     899,   908,   909,   917,   919,   921,   923,   924,   927,   931,
     934,   937,   940,   944,   947,   949,   952,   954,   956,   957
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     314,     0,    -1,   157,    -1,   220,    -1,   161,    -1,   162,
      -1,   159,    -1,   160,    -1,   163,    -1,   186,   247,   187,
      -1,   221,    -1,   222,   188,   223,   189,    -1,   224,    -1,
     222,   192,   164,    -1,   222,   167,    -1,   222,   168,    -1,
     247,    -1,   225,    -1,   226,    -1,   228,   187,    -1,   227,
     187,    -1,   229,   155,    -1,   229,    -1,   229,   245,    -1,
     228,   193,   245,    -1,   230,   186,    -1,   273,    -1,   222,
      -1,   222,    -1,   167,   231,    -1,   168,   231,    -1,   232,
     231,    -1,   200,    -1,   198,    -1,   197,    -1,   199,    -1,
     231,    -1,   233,   201,   231,    -1,   233,   202,   231,    -1,
     233,   203,   231,    -1,   233,    -1,   234,   200,   233,    -1,
     234,   198,   233,    -1,   234,    -1,   235,   165,   234,    -1,
     235,   166,   234,    -1,   235,    -1,   236,   204,   235,    -1,
     236,   205,   235,    -1,   236,   169,   235,    -1,   236,   170,
     235,    -1,   236,    -1,   237,   171,   236,    -1,   237,   172,
     236,    -1,   237,    -1,   238,   208,   237,    -1,   238,    -1,
     239,   207,   238,    -1,   239,    -1,   240,   206,   239,    -1,
     240,    -1,   241,   173,   240,    -1,   241,    -1,   242,   175,
     241,    -1,   242,    -1,   243,   174,   242,    -1,   243,    -1,
     243,   209,   247,   194,   245,    -1,   244,    -1,   231,   246,
     245,    -1,   195,    -1,   176,    -1,   177,    -1,   179,    -1,
     178,    -1,   185,    -1,   180,    -1,   181,    -1,   182,    -1,
     183,    -1,   184,    -1,   245,    -1,   247,   193,   245,    -1,
     244,    -1,   253,   196,    -1,   260,   196,    -1,   215,   276,
     273,   196,    -1,   250,   196,    -1,   250,   157,   196,    -1,
     250,   157,   274,   196,    -1,   269,   196,    -1,   269,   157,
     196,    -1,   269,   157,   252,   196,    -1,    -1,   269,   157,
     190,   251,   280,   191,    -1,   193,   157,    -1,   252,   193,
     157,    -1,   254,   187,    -1,   256,    -1,   255,    -1,   256,
     258,    -1,   255,   193,   258,    -1,   262,   157,   186,    -1,
     273,   157,    -1,   273,   157,   274,    -1,   269,   257,    -1,
     257,    -1,   269,   259,    -1,   259,    -1,   273,    -1,   261,
      -1,   260,   193,   157,    -1,   260,   193,   157,   274,    -1,
     260,   193,   157,   274,   195,   284,    -1,   260,   193,   157,
     195,   284,    -1,   262,    -1,   262,   157,    -1,   262,   157,
     274,    -1,   262,   157,   274,   195,   284,    -1,   262,   157,
     195,   284,    -1,   273,    -1,   269,   273,    -1,   210,    -1,
      60,    -1,    59,    -1,    58,    -1,    61,   186,   266,   187,
      -1,   267,    -1,   266,   193,   267,    -1,   157,    -1,   157,
     195,   161,    -1,   157,   195,   162,    -1,    46,    -1,   211,
      -1,   270,    -1,   269,   270,    -1,   271,    -1,   265,    -1,
     276,    -1,   264,    -1,   263,    -1,   268,    -1,     5,    -1,
       3,    -1,     4,    -1,    41,    -1,    39,    -1,    40,    -1,
      38,    -1,    43,    -1,    44,    -1,    42,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,
      51,    -1,    22,    -1,    22,   186,   272,   187,    -1,   158,
      -1,   272,   193,   158,    -1,   275,    -1,   275,   274,    -1,
     188,   189,    -1,   188,   248,   189,    -1,   274,   188,   189,
      -1,   274,   188,   248,   189,    -1,   155,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,     6,    -1,    32,    -1,
      33,    -1,    34,    -1,    52,    -1,    53,    -1,    54,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    35,    -1,
      36,    -1,    37,    -1,    62,    -1,    63,    -1,    64,    -1,
      65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    55,    -1,    56,    -1,    57,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,
      87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,    -1,
     111,    -1,   112,    -1,    92,    -1,    93,    -1,    94,    -1,
      95,    -1,    96,    -1,    97,    -1,   113,    -1,    98,    -1,
      99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,
     114,    -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,
     108,    -1,   109,    -1,   110,    -1,   115,    -1,   116,    -1,
     117,    -1,   118,    -1,   119,    -1,   120,    -1,   121,    -1,
     122,    -1,   123,    -1,   124,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   138,    -1,   139,    -1,   140,    -1,   141,    -1,
     142,    -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,
     147,    -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,   277,    -1,   158,    -1,   212,    -1,
     213,    -1,   214,    -1,    -1,   154,   157,   190,   278,   280,
     191,    -1,    -1,   154,   190,   279,   280,   191,    -1,   281,
      -1,   280,   281,    -1,   273,   282,   196,    -1,   269,   273,
     282,   196,    -1,   283,    -1,   282,   193,   283,    -1,   157,
      -1,   157,   274,    -1,   245,    -1,   190,   285,   191,    -1,
     190,   285,   193,   191,    -1,   284,    -1,   285,   193,   284,
      -1,   249,    -1,   289,    -1,   288,    -1,   286,    -1,   298,
      -1,   299,    -1,   302,    -1,   305,    -1,   306,    -1,   313,
      -1,   190,   191,    -1,    -1,    -1,   190,   290,   297,   291,
     191,    -1,   296,    -1,   288,    -1,   289,    -1,    -1,    -1,
     294,   288,   295,    -1,   190,   191,    -1,   190,   297,   191,
      -1,   287,    -1,   297,   287,    -1,   196,    -1,   247,   196,
      -1,    16,   186,   247,   187,   300,    -1,   293,    14,   293,
      -1,   293,    -1,   247,    -1,   262,   157,   195,   284,    -1,
      -1,    19,   186,   247,   187,   303,   190,   304,   191,    -1,
      -1,   297,    -1,    20,   247,   194,    -1,    21,   194,    -1,
      -1,   156,   186,   307,   301,   187,   292,    -1,    -1,    13,
     308,   287,   156,   186,   247,   187,   196,    -1,    -1,    15,
     186,   309,   310,   312,   187,   292,    -1,   298,    -1,   286,
      -1,   301,    -1,    -1,   311,   196,    -1,   311,   196,   247,
      -1,    12,   196,    -1,    11,   196,    -1,    18,   196,    -1,
      18,   247,   196,    -1,    17,   196,    -1,   315,    -1,   314,
     315,    -1,   316,    -1,   249,    -1,    -1,   253,   317,   296,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "constant_expression", "declaration", "block_structure", "@1",
  "identifier_list", "function_prototype", "function_declarator",
  "function_header_with_parameters", "function_header",
  "parameter_declarator", "parameter_declaration",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "invariant_qualifier", "interpolation_qualifier",
  "layout_qualifier", "layout_qualifier_id_list", "layout_qualifier_id",
  "precise_qualifier", "type_qualifier", "single_type_qualifier",
  "storage_qualifier", "type_name_list", "type_specifier",
  "array_specifier", "type_specifier_nonarray", "precision_qualifier",
  "struct_specifier", "@2", "@3", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "initializer", "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "@4", "@5",
  "statement_no_new_scope", "statement_scoped", "@6", "@7",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement", "@8",
  "switch_statement_list", "case_label", "iteration_statement", "@9",
  "@10", "@11", "for_init_statement", "conditionopt", "for_rest_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "@12", 0
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -440
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

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -28
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval)
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
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
yyparse (void)
#else
int
yyparse ()

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
        case 2:
#line 219 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleVariable((yyvsp[(1) - (1)].lex).loc, (yyvsp[(1) - (1)].lex).symbol, (yyvsp[(1) - (1)].lex).string);
    ;}
    break;

  case 3:
#line 225 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 4:
#line 228 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setIConst((yyvsp[(1) - (1)].lex).i);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtInt, EvqConst), (yyvsp[(1) - (1)].lex).loc);
    ;}
    break;

  case 5:
#line 233 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {        
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned literal");
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setUConst((yyvsp[(1) - (1)].lex).u);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtUint, EvqConst), (yyvsp[(1) - (1)].lex).loc);
    ;}
    break;

  case 6:
#line 239 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setDConst((yyvsp[(1) - (1)].lex).d);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtFloat, EvqConst), (yyvsp[(1) - (1)].lex).loc);
    ;}
    break;

  case 7:
#line 244 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double literal");
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setDConst((yyvsp[(1) - (1)].lex).d);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtDouble, EvqConst), (yyvsp[(1) - (1)].lex).loc);
    ;}
    break;

  case 8:
#line 250 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setBConst((yyvsp[(1) - (1)].lex).b);
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(1) - (1)].lex).loc);
    ;}
    break;

  case 9:
#line 255 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(2) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 10:
#line 261 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 11:
#line 264 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBracketDereference((yyvsp[(2) - (4)].lex).loc, (yyvsp[(1) - (4)].interm.intermTypedNode), (yyvsp[(3) - (4)].interm.intermTypedNode));
    ;}
    break;

  case 12:
#line 267 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 13:
#line 270 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleDotDereference((yyvsp[(3) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.intermTypedNode), *(yyvsp[(3) - (3)].lex).string);
    ;}
    break;

  case 14:
#line 273 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.variableCheck((yyvsp[(1) - (2)].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[(2) - (2)].lex).loc, "++", (yyvsp[(1) - (2)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath(EOpPostIncrement, (yyvsp[(1) - (2)].interm.intermTypedNode), (yyvsp[(2) - (2)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[(2) - (2)].lex).loc, "++", (yyvsp[(1) - (2)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (2)].interm.intermTypedNode);
        }
    ;}
    break;

  case 15:
#line 282 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.variableCheck((yyvsp[(1) - (2)].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[(2) - (2)].lex).loc, "--", (yyvsp[(1) - (2)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath(EOpPostDecrement, (yyvsp[(1) - (2)].interm.intermTypedNode), (yyvsp[(2) - (2)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[(2) - (2)].lex).loc, "--", (yyvsp[(1) - (2)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (2)].interm.intermTypedNode);
        }
    ;}
    break;

  case 16:
#line 294 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.integerCheck((yyvsp[(1) - (1)].interm.intermTypedNode), "[]");
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 17:
#line 301 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.handleFunctionCall((yyvsp[(1) - (1)].interm).loc, (yyvsp[(1) - (1)].interm).function, (yyvsp[(1) - (1)].interm).intermNode, (yyvsp[(1) - (1)].interm).intermAggregate);
        if ((yyval.interm.intermTypedNode) == 0)
            YYERROR;
        delete (yyvsp[(1) - (1)].interm).function;
    ;}
    break;

  case 18:
#line 310 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);
    ;}
    break;

  case 19:
#line 316 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (2)].interm);
        (yyval.interm).loc = (yyvsp[(2) - (2)].lex).loc;
    ;}
    break;

  case 20:
#line 320 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (2)].interm);
        (yyval.interm).loc = (yyvsp[(2) - (2)].lex).loc;
    ;}
    break;

  case 21:
#line 327 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (2)].interm);
    ;}
    break;

  case 22:
#line 330 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);
    ;}
    break;

  case 23:
#line 336 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[(2) - (2)].interm.intermTypedNode)->getType());
        (yyvsp[(1) - (2)].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[(1) - (2)].interm).function;
        (yyval.interm).intermNode = (yyvsp[(2) - (2)].interm.intermTypedNode);
    ;}
    break;

  case 24:
#line 343 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[(3) - (3)].interm.intermTypedNode)->getType());
        (yyvsp[(1) - (3)].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[(1) - (3)].interm).function;
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[(1) - (3)].interm).intermNode, (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
    ;}
    break;

  case 25:
#line 353 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (2)].interm);
    ;}
    break;

  case 26:
#line 361 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // Constructor
        (yyval.interm).intermNode = 0;
        (yyval.interm).function = parseContext.handleConstructorCall((yyvsp[(1) - (1)].interm.type).loc, (yyvsp[(1) - (1)].interm.type)); 
    ;}
    break;

  case 27:
#line 366 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        //
        // Should be a method or subroutine call, but we don't have arguments yet.
        //
        (yyval.interm).function = 0;
        (yyval.interm).intermNode = 0;

        TIntermMethod* method = (yyvsp[(1) - (1)].interm.intermTypedNode)->getAsMethodNode();
        if (method) {
            if (method->getObject()->isArray()) {
                (yyval.interm).function = new TFunction(&method->getMethodName(), TType(EbtInt), EOpArrayLength);
                (yyval.interm).intermNode = method->getObject();
            } else
                parseContext.error(method->getLoc(), "only arrays have methods", "", "");
        } else {
            TIntermSymbol* symbol = (yyvsp[(1) - (1)].interm.intermTypedNode)->getAsSymbolNode();
            if (symbol) {
                parseContext.reservedErrorCheck(symbol->getLoc(), symbol->getName());
                TFunction *function = new TFunction(&symbol->getName(), TType(EbtVoid));
                (yyval.interm).function = function;
            } else
                parseContext.error((yyvsp[(1) - (1)].interm.intermTypedNode)->getLoc(), "function call, method, or subroutine call expected", "", "");
        }

        if ((yyval.interm).function == 0) {
            // error recover
            TString empty("");
            (yyval.interm).function = new TFunction(&empty, TType(EbtVoid), EOpNull);
        }
    ;}
    break;

  case 28:
#line 399 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.variableCheck((yyvsp[(1) - (1)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
        if (TIntermMethod* method = (yyvsp[(1) - (1)].interm.intermTypedNode)->getAsMethodNode())
            parseContext.error((yyvsp[(1) - (1)].interm.intermTypedNode)->getLoc(), "incomplete method syntax", method->getMethodName().c_str(), "");
    ;}
    break;

  case 29:
#line 405 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.lValueErrorCheck((yyvsp[(1) - (2)].lex).loc, "++", (yyvsp[(2) - (2)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath(EOpPreIncrement, (yyvsp[(2) - (2)].interm.intermTypedNode), (yyvsp[(1) - (2)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[(1) - (2)].lex).loc, "++", (yyvsp[(2) - (2)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(2) - (2)].interm.intermTypedNode);
        }
    ;}
    break;

  case 30:
#line 413 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.lValueErrorCheck((yyvsp[(1) - (2)].lex).loc, "--", (yyvsp[(2) - (2)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath(EOpPreDecrement, (yyvsp[(2) - (2)].interm.intermTypedNode), (yyvsp[(1) - (2)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.unaryOpError((yyvsp[(1) - (2)].lex).loc, "--", (yyvsp[(2) - (2)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(2) - (2)].interm.intermTypedNode);
        }
    ;}
    break;

  case 31:
#line 421 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (2)].interm).op != EOpNull) {
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addUnaryMath((yyvsp[(1) - (2)].interm).op, (yyvsp[(2) - (2)].interm.intermTypedNode), (yyvsp[(1) - (2)].interm).loc);
            if ((yyval.interm.intermTypedNode) == 0) {
                char errorOp[2] = {0, 0};
                switch((yyvsp[(1) - (2)].interm).op) {
                case EOpNegative:   errorOp[0] = '-'; break;
                case EOpLogicalNot: errorOp[0] = '!'; break;
                case EOpBitwiseNot: errorOp[0] = '~'; break;
                default: break; // some compilers want this
                }
                parseContext.unaryOpError((yyvsp[(1) - (2)].interm).loc, errorOp, (yyvsp[(2) - (2)].interm.intermTypedNode)->getCompleteString());
                (yyval.interm.intermTypedNode) = (yyvsp[(2) - (2)].interm.intermTypedNode);
            }
        } else
            (yyval.interm.intermTypedNode) = (yyvsp[(2) - (2)].interm.intermTypedNode);
    ;}
    break;

  case 32:
#line 442 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpNull; ;}
    break;

  case 33:
#line 443 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpNegative; ;}
    break;

  case 34:
#line 444 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpLogicalNot; ;}
    break;

  case 35:
#line 445 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpBitwiseNot; ;}
    break;

  case 36:
#line 450 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 37:
#line 451 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpMul, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "*", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 38:
#line 458 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpDiv, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "/", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 39:
#line 465 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpMod, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "%", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 40:
#line 475 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 41:
#line 476 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpAdd, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "+", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 42:
#line 483 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpSub, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "-", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 43:
#line 493 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 44:
#line 494 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bit shift left");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLeftShift, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "<<", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 45:
#line 502 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bit shift right");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpRightShift, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, ">>", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 46:
#line 513 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 47:
#line 514 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLessThan, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "<", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        }
    ;}
    break;

  case 48:
#line 523 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpGreaterThan, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, ">", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        }
    ;}
    break;

  case 49:
#line 532 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLessThanEqual, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "<=", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        }
    ;}
    break;

  case 50:
#line 541 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpGreaterThanEqual, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, ">=", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        }
    ;}
    break;

  case 51:
#line 553 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 52:
#line 554 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpEqual, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "==", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        } else if (((yyvsp[(1) - (3)].interm.intermTypedNode)->isArray() || (yyvsp[(3) - (3)].interm.intermTypedNode)->isArray()))
            parseContext.profileRequires((yyvsp[(2) - (3)].lex).loc, ENoProfile, 120, "GL_3DL_array_objects", "==");
    ;}
    break;

  case 53:
#line 564 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpNotEqual, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "!=", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        } else if (((yyvsp[(1) - (3)].interm.intermTypedNode)->isArray() || (yyvsp[(3) - (3)].interm.intermTypedNode)->isArray()))
            parseContext.profileRequires((yyvsp[(2) - (3)].lex).loc, ENoProfile, 120, "GL_3DL_array_objects", "!=");
    ;}
    break;

  case 54:
#line 577 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 55:
#line 578 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bitwise and");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpAnd, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "&", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 56:
#line 589 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 57:
#line 590 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bitwise exclusive or");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpExclusiveOr, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "^", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 58:
#line 601 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 59:
#line 602 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(2) - (3)].lex).loc, "bitwise inclusive or");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpInclusiveOr, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "|", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 60:
#line 613 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 61:
#line 614 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLogicalAnd, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "&&", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        }
    ;}
    break;

  case 62:
#line 626 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 63:
#line 627 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLogicalXor, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "^^", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        }
    ;}
    break;

  case 64:
#line 639 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 65:
#line 640 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addBinaryMath(EOpLogicalOr, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, "||", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), (yyvsp[(2) - (3)].lex).loc);
        }
    ;}
    break;

  case 66:
#line 652 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 67:
#line 653 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.boolCheck((yyvsp[(2) - (5)].lex).loc, (yyvsp[(1) - (5)].interm.intermTypedNode));

        (yyval.interm.intermTypedNode) = parseContext.intermediate.addSelection((yyvsp[(1) - (5)].interm.intermTypedNode), (yyvsp[(3) - (5)].interm.intermTypedNode), (yyvsp[(5) - (5)].interm.intermTypedNode), (yyvsp[(2) - (5)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (5)].lex).loc, ":", (yyvsp[(3) - (5)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(5) - (5)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(5) - (5)].interm.intermTypedNode);
        }
    ;}
    break;

  case 68:
#line 665 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode); ;}
    break;

  case 69:
#line 666 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.lValueErrorCheck((yyvsp[(2) - (3)].interm).loc, "assign", (yyvsp[(1) - (3)].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addAssign((yyvsp[(2) - (3)].interm).op, (yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].interm).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.assignError((yyvsp[(2) - (3)].interm).loc, "assign", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(1) - (3)].interm.intermTypedNode);
        } else if (((yyvsp[(1) - (3)].interm.intermTypedNode)->isArray() || (yyvsp[(3) - (3)].interm.intermTypedNode)->isArray()))
            parseContext.profileRequires((yyvsp[(2) - (3)].interm).loc, ENoProfile, 120, "GL_3DL_array_objects", "=");
    ;}
    break;

  case 70:
#line 678 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpAssign; ;}
    break;

  case 71:
#line 679 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpMulAssign; ;}
    break;

  case 72:
#line 680 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpDivAssign; ;}
    break;

  case 73:
#line 681 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpModAssign; ;}
    break;

  case 74:
#line 682 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpAddAssign; ;}
    break;

  case 75:
#line 683 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpSubAssign; ;}
    break;

  case 76:
#line 684 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bit-shift left assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpLeftShiftAssign;
    ;}
    break;

  case 77:
#line 688 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bit-shift right assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpRightShiftAssign;
    ;}
    break;

  case 78:
#line 692 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bitwise-and assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpAndAssign;
    ;}
    break;

  case 79:
#line 696 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bitwise-xor assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpExclusiveOrAssign;
    ;}
    break;

  case 80:
#line 700 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "bitwise-or assign");
        (yyval.interm).loc = (yyvsp[(1) - (1)].lex).loc; (yyval.interm).op = EOpInclusiveOrAssign;
    ;}
    break;

  case 81:
#line 707 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 82:
#line 710 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addComma((yyvsp[(1) - (3)].interm.intermTypedNode), (yyvsp[(3) - (3)].interm.intermTypedNode), (yyvsp[(2) - (3)].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[(2) - (3)].lex).loc, ",", (yyvsp[(1) - (3)].interm.intermTypedNode)->getCompleteString(), (yyvsp[(3) - (3)].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[(3) - (3)].interm.intermTypedNode);
        }
    ;}
    break;

  case 83:
#line 720 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.constCheck((yyvsp[(1) - (1)].interm.intermTypedNode), "");
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 84:
#line 727 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = 0;
        // TODO: 4.0 functionality: subroutines: make the identifier a user type for this signature
    ;}
    break;

  case 85:
#line 731 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (2)].interm).intermAggregate)
            (yyvsp[(1) - (2)].interm).intermAggregate->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[(1) - (2)].interm).intermAggregate;
    ;}
    break;

  case 86:
#line 736 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (4)].lex).loc, ENoProfile, 130, 0, "precision statement");

        // lazy setting of the previous scope's defaults, has effect only the first time it is called in a particular scope
        parseContext.symbolTable.setPreviousDefaultPrecisions(&parseContext.defaultPrecision[0]);

		parseContext.setDefaultPrecision((yyvsp[(1) - (4)].lex).loc, (yyvsp[(3) - (4)].interm.type), (yyvsp[(2) - (4)].interm.type).qualifier.precision);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 87:
#line 745 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.addBlock((yyvsp[(1) - (2)].interm).loc, *(yyvsp[(1) - (2)].interm).typeList);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 88:
#line 749 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.addBlock((yyvsp[(1) - (3)].interm).loc, *(yyvsp[(1) - (3)].interm).typeList, (yyvsp[(2) - (3)].lex).string);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 89:
#line 753 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.addBlock((yyvsp[(1) - (4)].interm).loc, *(yyvsp[(1) - (4)].interm).typeList, (yyvsp[(2) - (4)].lex).string, (yyvsp[(3) - (4)].interm).arraySizes);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 90:
#line 757 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.updateQualifierDefaults((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 91:
#line 761 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.addQualifierToExisting((yyvsp[(1) - (3)].interm.type).loc, (yyvsp[(1) - (3)].interm.type).qualifier, *(yyvsp[(2) - (3)].lex).string);
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 92:
#line 765 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyvsp[(3) - (4)].interm.identifierList)->push_back((yyvsp[(2) - (4)].lex).string);
        parseContext.addQualifierToExisting((yyvsp[(1) - (4)].interm.type).loc, (yyvsp[(1) - (4)].interm.type).qualifier, *(yyvsp[(3) - (4)].interm.identifierList));
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 93:
#line 773 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { parseContext.nestedBlockCheck((yyvsp[(1) - (3)].interm.type).loc); ;}
    break;

  case 94:
#line 773 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        --parseContext.structNestingLevel;
        parseContext.blockName = (yyvsp[(2) - (6)].lex).string;
        parseContext.currentBlockDefaults = (yyvsp[(1) - (6)].interm.type).qualifier;
        (yyval.interm).loc = (yyvsp[(1) - (6)].interm.type).loc;
        (yyval.interm).typeList = (yyvsp[(5) - (6)].interm.typeList);
    ;}
    break;

  case 95:
#line 782 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.identifierList) = NewPoolTIdentifierList();
        (yyval.interm.identifierList)->push_back((yyvsp[(2) - (2)].lex).string);
    ;}
    break;

  case 96:
#line 786 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.identifierList) = (yyvsp[(1) - (3)].interm.identifierList);
        (yyval.interm.identifierList)->push_back((yyvsp[(3) - (3)].lex).string);
    ;}
    break;

  case 97:
#line 793 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // ES can't declare prototypes inside functions
        if (! parseContext.symbolTable.atGlobalLevel())
            parseContext.requireProfile((yyvsp[(2) - (2)].lex).loc, static_cast<EProfileMask>(~EEsProfileMask), "local function declaration");

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
        TSymbol* symbol = parseContext.symbolTable.find((yyvsp[(1) - (2)].interm.function)->getMangledName(), &builtIn);
        if (symbol && symbol->getAsFunction() && builtIn)
            parseContext.requireProfile((yyvsp[(2) - (2)].lex).loc, static_cast<EProfileMask>(~EEsProfileMask), "redeclaration of built-in function");
        const TFunction* prevDec = symbol ? symbol->getAsFunction() : 0;
        if (prevDec) {
            if (prevDec->getReturnType() != (yyvsp[(1) - (2)].interm.function)->getReturnType()) {
                parseContext.error((yyvsp[(2) - (2)].lex).loc, "overloaded functions must have the same return type", (yyvsp[(1) - (2)].interm.function)->getReturnType().getCompleteTypeString().c_str(), "");
            }
            for (int i = 0; i < prevDec->getParamCount(); ++i) {
                if ((*prevDec)[i].type->getQualifier().storage != (*(yyvsp[(1) - (2)].interm.function))[i].type->getQualifier().storage)
                    parseContext.error((yyvsp[(2) - (2)].lex).loc, "overloaded functions must have the same parameter qualifiers", (*(yyvsp[(1) - (2)].interm.function))[i].type->getStorageQualifierString(), "");
            }
        }

        //
        // If this is a redeclaration, it could also be a definition,
        // in which case, we want to use the variable names from this one, and not the one that's
        // being redeclared.  So, pass back up this declaration, not the one in the symbol table.
        //
        (yyval.interm).function = (yyvsp[(1) - (2)].interm.function);
        (yyval.interm).loc = (yyvsp[(2) - (2)].lex).loc;

        if (! parseContext.symbolTable.insert(*(yyval.interm).function))
            parseContext.error((yyvsp[(2) - (2)].lex).loc, "illegal redeclaration", (yyval.interm).function->getName().c_str(), "");
    ;}
    break;

  case 98:
#line 837 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.function) = (yyvsp[(1) - (1)].interm.function);
    ;}
    break;

  case 99:
#line 840 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.function) = (yyvsp[(1) - (1)].interm.function);
    ;}
    break;

  case 100:
#line 847 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // Add the parameter
        (yyval.interm.function) = (yyvsp[(1) - (2)].interm.function);
        if ((yyvsp[(2) - (2)].interm).param.type->getBasicType() != EbtVoid)
            (yyvsp[(1) - (2)].interm.function)->addParameter((yyvsp[(2) - (2)].interm).param);
        else
            delete (yyvsp[(2) - (2)].interm).param.type;
    ;}
    break;

  case 101:
#line 855 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        //
        // Only first parameter of one-parameter functions can be void
        // The check for named parameters not being void is done in parameter_declarator
        //
        if ((yyvsp[(3) - (3)].interm).param.type->getBasicType() == EbtVoid) {
            //
            // This parameter > first is void
            //
            parseContext.error((yyvsp[(2) - (3)].lex).loc, "cannot be an argument type except for '(void)'", "void", "");
            delete (yyvsp[(3) - (3)].interm).param.type;
        } else {
            // Add the parameter
            (yyval.interm.function) = (yyvsp[(1) - (3)].interm.function);
            (yyvsp[(1) - (3)].interm.function)->addParameter((yyvsp[(3) - (3)].interm).param);
        }
    ;}
    break;

  case 102:
#line 875 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (3)].interm.type).qualifier.storage != EvqGlobal && (yyvsp[(1) - (3)].interm.type).qualifier.storage != EvqTemporary) {
            parseContext.error((yyvsp[(2) - (3)].lex).loc, "no qualifiers allowed for function return",
                               GetStorageQualifierString((yyvsp[(1) - (3)].interm.type).qualifier.storage), "");
        }

        // Add the function as a prototype after parsing it (we do not support recursion)
        TFunction *function;
        TType type((yyvsp[(1) - (3)].interm.type));
        function = new TFunction((yyvsp[(2) - (3)].lex).string, type);
        (yyval.interm.function) = function;
    ;}
    break;

  case 103:
#line 891 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (2)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(1) - (2)].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[(1) - (2)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).arraySizes->getSize());
        }
        if ((yyvsp[(1) - (2)].interm.type).basicType == EbtVoid) {
            parseContext.error((yyvsp[(2) - (2)].lex).loc, "illegal use of type 'void'", (yyvsp[(2) - (2)].lex).string->c_str(), "");
        }
        parseContext.reservedErrorCheck((yyvsp[(2) - (2)].lex).loc, *(yyvsp[(2) - (2)].lex).string);

        TParameter param = {(yyvsp[(2) - (2)].lex).string, new TType((yyvsp[(1) - (2)].interm.type))};
        (yyval.interm).loc = (yyvsp[(2) - (2)].lex).loc;
        (yyval.interm).param = param;
    ;}
    break;

  case 104:
#line 906 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (3)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(1) - (3)].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[(1) - (3)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck((yyvsp[(1) - (3)].interm.type).loc, (yyvsp[(1) - (3)].interm.type).arraySizes->getSize());
        }
        parseContext.arrayDimCheck((yyvsp[(2) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.type).arraySizes, (yyvsp[(3) - (3)].interm).arraySizes);

        parseContext.arraySizeRequiredCheck((yyvsp[(3) - (3)].interm).loc, (yyvsp[(3) - (3)].interm).arraySizes->getSize());
        parseContext.reservedErrorCheck((yyvsp[(2) - (3)].lex).loc, *(yyvsp[(2) - (3)].lex).string);

        (yyvsp[(1) - (3)].interm.type).arraySizes = (yyvsp[(3) - (3)].interm).arraySizes;

        TParameter param = { (yyvsp[(2) - (3)].lex).string, new TType((yyvsp[(1) - (3)].interm.type))};
        (yyval.interm).loc = (yyvsp[(2) - (3)].lex).loc;
        (yyval.interm).param = param;
    ;}
    break;

  case 105:
#line 929 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(2) - (2)].interm);
        if ((yyvsp[(1) - (2)].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[(1) - (2)].interm.type).qualifier.precision;

        parseContext.parameterSamplerCheck((yyvsp[(2) - (2)].interm).loc, (yyvsp[(1) - (2)].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheck((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier.storage, (yyval.interm).param.type);
    ;}
    break;

  case 106:
#line 937 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);

        parseContext.parameterSamplerCheck((yyvsp[(1) - (1)].interm).loc, EvqIn, *(yyvsp[(1) - (1)].interm).param.type);
        parseContext.paramCheck((yyvsp[(1) - (1)].interm).loc, EvqTemporary, (yyval.interm).param.type);
    ;}
    break;

  case 107:
#line 946 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(2) - (2)].interm);
        if ((yyvsp[(1) - (2)].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[(1) - (2)].interm.type).qualifier.precision;

        parseContext.parameterSamplerCheck((yyvsp[(2) - (2)].interm).loc, (yyvsp[(1) - (2)].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheck((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier.storage, (yyval.interm).param.type);
    ;}
    break;

  case 108:
#line 954 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);

        parseContext.parameterSamplerCheck((yyvsp[(1) - (1)].interm).loc, EvqIn, *(yyvsp[(1) - (1)].interm).param.type);
        parseContext.paramCheck((yyvsp[(1) - (1)].interm).loc, EvqTemporary, (yyval.interm).param.type);
    ;}
    break;

  case 109:
#line 963 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TParameter param = { 0, new TType((yyvsp[(1) - (1)].interm.type)) };
        (yyval.interm).param = param;
    ;}
    break;

  case 110:
#line 970 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (1)].interm);
    ;}
    break;

  case 111:
#line 973 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (3)].interm);
        parseContext.nonInitConstCheck((yyvsp[(3) - (3)].lex).loc, *(yyvsp[(3) - (3)].lex).string, (yyval.interm).type);
        parseContext.nonInitCheck((yyvsp[(3) - (3)].lex).loc, *(yyvsp[(3) - (3)].lex).string, (yyval.interm).type);
    ;}
    break;

  case 112:
#line 978 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.nonInitConstCheck((yyvsp[(3) - (4)].lex).loc, *(yyvsp[(3) - (4)].lex).string, (yyvsp[(1) - (4)].interm).type);
        if (parseContext.profile == EEsProfile)
            parseContext.arraySizeRequiredCheck((yyvsp[(4) - (4)].interm).loc, (yyvsp[(4) - (4)].interm).arraySizes->getSize());
        parseContext.arrayDimCheck((yyvsp[(3) - (4)].lex).loc, (yyvsp[(1) - (4)].interm).type.arraySizes, (yyvsp[(4) - (4)].interm).arraySizes);

        (yyval.interm) = (yyvsp[(1) - (4)].interm);

        if (! parseContext.arrayQualifierError((yyvsp[(4) - (4)].interm).loc, (yyvsp[(1) - (4)].interm).type)) {
            (yyvsp[(1) - (4)].interm).type.arraySizes = (yyvsp[(4) - (4)].interm).arraySizes;
            TVariable* variable;
            parseContext.arrayCheck((yyvsp[(4) - (4)].interm).loc, *(yyvsp[(3) - (4)].lex).string, (yyvsp[(1) - (4)].interm).type, variable);
        }
    ;}
    break;

  case 113:
#line 992 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (6)].interm);

        TVariable* variable = 0;
        if (! parseContext.arrayQualifierError((yyvsp[(4) - (6)].interm).loc, (yyvsp[(1) - (6)].interm).type)) {
            (yyvsp[(1) - (6)].interm).type.arraySizes = (yyvsp[(4) - (6)].interm).arraySizes;
            parseContext.arrayCheck((yyvsp[(4) - (6)].interm).loc, *(yyvsp[(3) - (6)].lex).string, (yyvsp[(1) - (6)].interm).type, variable);
        }
        parseContext.arrayDimCheck((yyvsp[(3) - (6)].lex).loc, (yyvsp[(1) - (6)].interm).type.arraySizes, (yyvsp[(4) - (6)].interm).arraySizes);

        parseContext.profileRequires((yyvsp[(5) - (6)].lex).loc, ENoProfile, 120, "GL_3DL_array_objects", "initializer");

        TIntermNode* intermNode;
        if (! parseContext.executeInitializerError((yyvsp[(3) - (6)].lex).loc, *(yyvsp[(3) - (6)].lex).string, (yyvsp[(1) - (6)].interm).type, (yyvsp[(6) - (6)].interm.intermTypedNode), intermNode, variable)) {
            //
            // build the intermediate representation
            //
            if (intermNode)
                (yyval.interm).intermAggregate = parseContext.intermediate.growAggregate((yyvsp[(1) - (6)].interm).intermNode, intermNode, (yyvsp[(5) - (6)].lex).loc);
            else
                (yyval.interm).intermAggregate = (yyvsp[(1) - (6)].interm).intermAggregate;
        } else
            (yyval.interm).intermAggregate = 0;
    ;}
    break;

  case 114:
#line 1016 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (5)].interm);

        TIntermNode* intermNode;
        if (!parseContext.executeInitializerError((yyvsp[(3) - (5)].lex).loc, *(yyvsp[(3) - (5)].lex).string, (yyvsp[(1) - (5)].interm).type, (yyvsp[(5) - (5)].interm.intermTypedNode), intermNode)) {
            //
            // build the intermediate representation
            //
            if (intermNode)
                (yyval.interm).intermAggregate = parseContext.intermediate.growAggregate((yyvsp[(1) - (5)].interm).intermNode, intermNode, (yyvsp[(4) - (5)].lex).loc);
            else
                (yyval.interm).intermAggregate = (yyvsp[(1) - (5)].interm).intermAggregate;
        } else
            (yyval.interm).intermAggregate = 0;
    ;}
    break;

  case 115:
#line 1034 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (1)].interm.type);
        (yyval.interm).intermAggregate = 0;
        parseContext.updateTypedDefaults((yyvsp[(1) - (1)].interm.type).loc, (yyval.interm).type.qualifier, 0);
    ;}
    break;

  case 116:
#line 1039 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm).intermAggregate = 0;
        (yyval.interm).type = (yyvsp[(1) - (2)].interm.type);

        parseContext.nonInitConstCheck((yyvsp[(2) - (2)].lex).loc, *(yyvsp[(2) - (2)].lex).string, (yyval.interm).type);
        parseContext.nonInitCheck((yyvsp[(2) - (2)].lex).loc, *(yyvsp[(2) - (2)].lex).string, (yyval.interm).type);
        
        parseContext.updateTypedDefaults((yyvsp[(2) - (2)].lex).loc, (yyval.interm).type.qualifier, (yyvsp[(2) - (2)].lex).string);
    ;}
    break;

  case 117:
#line 1048 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm).intermAggregate = 0;
        parseContext.nonInitConstCheck((yyvsp[(2) - (3)].lex).loc, *(yyvsp[(2) - (3)].lex).string, (yyvsp[(1) - (3)].interm.type));        
        if (parseContext.profile == EEsProfile)
            parseContext.arraySizeRequiredCheck((yyvsp[(3) - (3)].interm).loc, (yyvsp[(3) - (3)].interm).arraySizes->getSize());        
        parseContext.arrayDimCheck((yyvsp[(2) - (3)].lex).loc, (yyvsp[(1) - (3)].interm.type).arraySizes, (yyvsp[(3) - (3)].interm).arraySizes);

        (yyval.interm).type = (yyvsp[(1) - (3)].interm.type);

        if (! parseContext.arrayQualifierError((yyvsp[(3) - (3)].interm).loc, (yyvsp[(1) - (3)].interm.type))) {
            (yyvsp[(1) - (3)].interm.type).arraySizes = (yyvsp[(3) - (3)].interm).arraySizes;
            TVariable* variable;
            parseContext.arrayCheck((yyvsp[(3) - (3)].interm).loc, *(yyvsp[(2) - (3)].lex).string, (yyvsp[(1) - (3)].interm.type), variable);
        }
        parseContext.updateTypedDefaults((yyvsp[(2) - (3)].lex).loc, (yyval.interm).type.qualifier, (yyvsp[(2) - (3)].lex).string);
    ;}
    break;

  case 118:
#line 1064 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {        
        parseContext.arrayDimCheck((yyvsp[(3) - (5)].interm).loc, (yyvsp[(1) - (5)].interm.type).arraySizes, (yyvsp[(3) - (5)].interm).arraySizes);

        (yyval.interm).intermAggregate = 0;
        (yyval.interm).type = (yyvsp[(1) - (5)].interm.type);

        TVariable* variable = 0;
        if (! parseContext.arrayQualifierError((yyvsp[(3) - (5)].interm).loc, (yyvsp[(1) - (5)].interm.type))) {
            (yyvsp[(1) - (5)].interm.type).arraySizes = (yyvsp[(3) - (5)].interm).arraySizes;
            parseContext.arrayCheck((yyvsp[(3) - (5)].interm).loc, *(yyvsp[(2) - (5)].lex).string, (yyvsp[(1) - (5)].interm.type), variable);
        }

        parseContext.profileRequires((yyvsp[(4) - (5)].lex).loc, ENoProfile, 120, "GL_3DL_array_objects", "initializer");

        TIntermNode* intermNode;
        if (!parseContext.executeInitializerError((yyvsp[(2) - (5)].lex).loc, *(yyvsp[(2) - (5)].lex).string, (yyvsp[(1) - (5)].interm.type), (yyvsp[(5) - (5)].interm.intermTypedNode), intermNode, variable)) {
            //
            // Build intermediate representation
            //
            if (intermNode)
                (yyval.interm).intermAggregate = parseContext.intermediate.makeAggregate(intermNode, (yyvsp[(4) - (5)].lex).loc);
            else
                (yyval.interm).intermAggregate = 0;
        } else
            (yyval.interm).intermAggregate = 0;
    ;}
    break;

  case 119:
#line 1090 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm).type = (yyvsp[(1) - (4)].interm.type);

        TIntermNode* intermNode;
        if (!parseContext.executeInitializerError((yyvsp[(2) - (4)].lex).loc, *(yyvsp[(2) - (4)].lex).string, (yyvsp[(1) - (4)].interm.type), (yyvsp[(4) - (4)].interm.intermTypedNode), intermNode)) {
            //
            // Build intermediate representation
            //
            if (intermNode)
                (yyval.interm).intermAggregate = parseContext.intermediate.makeAggregate(intermNode, (yyvsp[(3) - (4)].lex).loc);
            else
                (yyval.interm).intermAggregate = 0;
        } else
            (yyval.interm).intermAggregate = 0;
    ;}
    break;

  case 120:
#line 1109 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);

        if ((yyvsp[(1) - (1)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(1) - (1)].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[(1) - (1)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[(1) - (1)].interm.type).loc, (yyvsp[(1) - (1)].interm.type).arraySizes->getSize());
        }

        parseContext.precisionQualifierCheck((yyval.interm.type).loc, (yyval.interm.type));
    ;}
    break;

  case 121:
#line 1121 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalQualifierFix((yyvsp[(1) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type).qualifier, (yyvsp[(2) - (2)].interm.type));

        if ((yyvsp[(2) - (2)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(2) - (2)].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[(2) - (2)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[(2) - (2)].interm.type).loc, (yyvsp[(2) - (2)].interm.type).arraySizes->getSize());
        }

        if ((yyvsp[(2) - (2)].interm.type).arraySizes && parseContext.arrayQualifierError((yyvsp[(2) - (2)].interm.type).loc, (yyvsp[(1) - (2)].interm.type)))
            (yyvsp[(2) - (2)].interm.type).arraySizes = 0;
        
        parseContext.mergeQualifiers((yyvsp[(2) - (2)].interm.type).loc, (yyvsp[(2) - (2)].interm.type).qualifier, (yyvsp[(1) - (2)].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[(2) - (2)].interm.type).loc, (yyvsp[(2) - (2)].interm.type));

        (yyval.interm.type) = (yyvsp[(2) - (2)].interm.type);

        if (! (yyval.interm.type).qualifier.isInterpolation() && 
            (parseContext.language == EShLangVertex   && (yyval.interm.type).qualifier.storage == EvqVaryingOut ||
             parseContext.language == EShLangFragment && (yyval.interm.type).qualifier.storage == EvqVaryingIn))
            (yyval.interm.type).qualifier.smooth = true;
    ;}
    break;

  case 122:
#line 1147 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyval.interm.type).loc, ENoProfile, 120, 0, "invariant");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.invariant = true;
    ;}
    break;

  case 123:
#line 1155 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "smooth");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "smooth");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, 0, "smooth");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.smooth = true;
    ;}
    break;

  case 124:
#line 1162 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "flat");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "flat");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, 0, "flat");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.flat = true;
    ;}
    break;

  case 125:
#line 1169 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "noperspective");
        parseContext.requireProfile((yyvsp[(1) - (1)].lex).loc, static_cast<EProfileMask>(~EEsProfileMask), "noperspective");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "noperspective");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.nopersp = true;
    ;}
    break;

  case 126:
#line 1179 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(3) - (4)].interm.type);
    ;}
    break;

  case 127:
#line 1185 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 128:
#line 1188 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (3)].interm.type);
        parseContext.mergeLayoutQualifiers((yyvsp[(2) - (3)].lex).loc, (yyval.interm.type).qualifier, (yyvsp[(3) - (3)].interm.type).qualifier);
    ;}
    break;

  case 129:
#line 1194 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[(1) - (1)].lex).loc, (yyval.interm.type), *(yyvsp[(1) - (1)].lex).string);
    ;}
    break;

  case 130:
#line 1198 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (3)].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[(1) - (3)].lex).loc, (yyval.interm.type), *(yyvsp[(1) - (3)].lex).string, (yyvsp[(3) - (3)].lex).i);
    ;}
    break;

  case 131:
#line 1202 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (3)].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[(1) - (3)].lex).loc, (yyval.interm.type), *(yyvsp[(1) - (3)].lex).string, (int)(yyvsp[(3) - (3)].lex).u);
    ;}
    break;

  case 132:
#line 1206 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { // because "shared" is both an identifier and a keyword
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        TString strShared("shared");
        parseContext.setLayoutQualifier((yyvsp[(1) - (1)].lex).loc, (yyval.interm.type), strShared);
    ;}
    break;

  case 133:
#line 1214 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
    ;}
    break;

  case 134:
#line 1220 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 135:
#line 1223 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (2)].interm.type);
        if ((yyval.interm.type).basicType == EbtVoid)
            (yyval.interm.type).basicType = (yyvsp[(2) - (2)].interm.type).basicType;

        parseContext.mergeQualifiers((yyval.interm.type).loc, (yyval.interm.type).qualifier, (yyvsp[(2) - (2)].interm.type).qualifier, false);
    ;}
    break;

  case 136:
#line 1233 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 137:
#line 1236 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 138:
#line 1239 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 139:
#line 1242 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 140:
#line 1246 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 141:
#line 1250 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
    ;}
    break;

  case 142:
#line 1257 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqConst;
    ;}
    break;

  case 143:
#line 1261 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangVertexMask, "attribute");
        parseContext.checkDeprecated((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 130, "attribute");
        parseContext.checkDeprecated((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, "attribute");
        parseContext.requireNotRemoved((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 420, "attribute");
        parseContext.requireNotRemoved((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, "attribute");

        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "attribute");

        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqVaryingIn;
    ;}
    break;

  case 144:
#line 1273 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.checkDeprecated((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, "varying");
        parseContext.checkDeprecated((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 130, "varying");
        parseContext.requireNotRemoved((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 420, "varying");
        parseContext.requireNotRemoved((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, "varying");

        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "varying");

        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        if (parseContext.language == EShLangVertex)
            (yyval.interm.type).qualifier.storage = EvqVaryingOut;
        else
            (yyval.interm.type).qualifier.storage = EvqVaryingIn;
    ;}
    break;

  case 145:
#line 1287 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "out");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqInOut;
    ;}
    break;

  case 146:
#line 1292 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "in");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqIn;
    ;}
    break;

  case 147:
#line 1297 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "out");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqOut;
    ;}
    break;

  case 148:
#line 1302 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 120, 0, "centroid");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, EEsProfile, 300, 0, "centroid");
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "centroid");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.centroid = true;
    ;}
    break;

  case 149:
#line 1309 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "patch");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.patch = true;
    ;}
    break;

  case 150:
#line 1314 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "sample");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.sample = true;
    ;}
    break;

  case 151:
#line 1319 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "uniform");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
    ;}
    break;

  case 152:
#line 1324 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "buffer");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform; // TODO: 4.0 functionality: implement BUFFER
    ;}
    break;

  case 153:
#line 1329 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.requireProfile((yyvsp[(1) - (1)].lex).loc, static_cast<EProfileMask>(~EEsProfileMask), "shared");
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 430, 0, "shared");
        parseContext.requireStage((yyvsp[(1) - (1)].lex).loc, EShLangComputeMask, "shared");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.shared = true;
    ;}
    break;

  case 154:
#line 1336 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.coherent = true;
    ;}
    break;

  case 155:
#line 1340 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.volatil = true;
    ;}
    break;

  case 156:
#line 1344 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.restrict = true;
    ;}
    break;

  case 157:
#line 1348 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.readonly = true;
    ;}
    break;

  case 158:
#line 1352 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.writeonly = true;
    ;}
    break;

  case 159:
#line 1356 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "subroutine");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
    ;}
    break;

  case 160:
#line 1361 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.globalCheck((yyvsp[(1) - (4)].lex).loc, parseContext.symbolTable.atGlobalLevel(), "subroutine");
        (yyval.interm.type).init((yyvsp[(1) - (4)].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
        // TODO: 4.0 semantics: subroutines
        // 1) make sure each identifier is a type declared earlier with SUBROUTINE
        // 2) save all of the identifiers for future comparison with the declared function
    ;}
    break;

  case 161:
#line 1372 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // TODO: 4.0 functionality: subroutine type to list
    ;}
    break;

  case 162:
#line 1375 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
    ;}
    break;

  case 163:
#line 1380 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
    ;}
    break;

  case 164:
#line 1384 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {        
        parseContext.arrayDimCheck((yyvsp[(2) - (2)].interm).loc, (yyvsp[(2) - (2)].interm).arraySizes, 0);
        (yyval.interm.type) = (yyvsp[(1) - (2)].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
        (yyval.interm.type).arraySizes = (yyvsp[(2) - (2)].interm).arraySizes;
    ;}
    break;

  case 165:
#line 1393 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (2)].lex).loc;
        (yyval.interm).arraySizes = NewPoolTArraySizes();
        (yyval.interm).arraySizes->setSize(0);
    ;}
    break;

  case 166:
#line 1398 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm).loc = (yyvsp[(1) - (3)].lex).loc;
        (yyval.interm).arraySizes = NewPoolTArraySizes();

        int size;
        parseContext.arraySizeCheck((yyvsp[(2) - (3)].interm.intermTypedNode)->getLoc(), (yyvsp[(2) - (3)].interm.intermTypedNode), size);
        (yyval.interm).arraySizes->setSize(size);
    ;}
    break;

  case 167:
#line 1406 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (3)].interm);
        (yyval.interm).arraySizes->setSize(0);
    ;}
    break;

  case 168:
#line 1410 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm) = (yyvsp[(1) - (4)].interm);

        int size;
        parseContext.arraySizeCheck((yyvsp[(3) - (4)].interm.intermTypedNode)->getLoc(), (yyvsp[(3) - (4)].interm.intermTypedNode), size);
        (yyval.interm).arraySizes->setSize(size);
    ;}
    break;

  case 169:
#line 1420 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtVoid;
    ;}
    break;

  case 170:
#line 1424 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
    ;}
    break;

  case 171:
#line 1428 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
    ;}
    break;

  case 172:
#line 1433 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
    ;}
    break;

  case 173:
#line 1437 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned integer");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
    ;}
    break;

  case 174:
#line 1442 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
    ;}
    break;

  case 175:
#line 1446 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 176:
#line 1451 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 177:
#line 1456 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 178:
#line 1461 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 179:
#line 1467 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 180:
#line 1473 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 181:
#line 1479 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 182:
#line 1484 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 183:
#line 1489 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 184:
#line 1494 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 185:
#line 1499 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 186:
#line 1504 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 187:
#line 1509 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(2);
    ;}
    break;

  case 188:
#line 1515 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(3);
    ;}
    break;

  case 189:
#line 1521 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.fullIntegerCheck((yyvsp[(1) - (1)].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(4);
    ;}
    break;

  case 190:
#line 1527 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    ;}
    break;

  case 191:
#line 1532 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    ;}
    break;

  case 192:
#line 1537 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    ;}
    break;

  case 193:
#line 1542 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    ;}
    break;

  case 194:
#line 1547 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 3);
    ;}
    break;

  case 195:
#line 1552 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 4);
    ;}
    break;

  case 196:
#line 1557 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 2);
    ;}
    break;

  case 197:
#line 1562 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    ;}
    break;

  case 198:
#line 1567 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 4);
    ;}
    break;

  case 199:
#line 1572 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 2);
    ;}
    break;

  case 200:
#line 1577 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 3);
    ;}
    break;

  case 201:
#line 1582 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    ;}
    break;

  case 202:
#line 1587 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    ;}
    break;

  case 203:
#line 1593 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    ;}
    break;

  case 204:
#line 1599 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    ;}
    break;

  case 205:
#line 1605 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 2);
    ;}
    break;

  case 206:
#line 1611 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 3);
    ;}
    break;

  case 207:
#line 1617 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(2, 4);
    ;}
    break;

  case 208:
#line 1623 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 2);
    ;}
    break;

  case 209:
#line 1629 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 3);
    ;}
    break;

  case 210:
#line 1635 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(3, 4);
    ;}
    break;

  case 211:
#line 1641 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 2);
    ;}
    break;

  case 212:
#line 1647 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 3);
    ;}
    break;

  case 213:
#line 1653 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.doubleCheck((yyvsp[(1) - (1)].lex).loc, "double matrix");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtDouble;
        (yyval.interm.type).setMatrix(4, 4);
    ;}
    break;

  case 214:
#line 1659 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // TODO: 4.2 functionality: add type
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
    ;}
    break;

  case 215:
#line 1664 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D);
    ;}
    break;

  case 216:
#line 1669 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D);
    ;}
    break;

  case 217:
#line 1674 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd3D);
    ;}
    break;

  case 218:
#line 1679 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube);
    ;}
    break;

  case 219:
#line 1684 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, false, true);
    ;}
    break;

  case 220:
#line 1689 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, true);
    ;}
    break;

  case 221:
#line 1694 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, false, true);
    ;}
    break;

  case 222:
#line 1699 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, true);
    ;}
    break;

  case 223:
#line 1704 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true);
    ;}
    break;

  case 224:
#line 1709 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd1D, true, true);
    ;}
    break;

  case 225:
#line 1714 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, true);
    ;}
    break;

  case 226:
#line 1719 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true);
    ;}
    break;

  case 227:
#line 1724 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true, true);
    ;}
    break;

  case 228:
#line 1729 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd1D);
    ;}
    break;

  case 229:
#line 1734 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D);
    ;}
    break;

  case 230:
#line 1739 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd3D);
    ;}
    break;

  case 231:
#line 1744 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdCube);
    ;}
    break;

  case 232:
#line 1749 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd1D, true);
    ;}
    break;

  case 233:
#line 1754 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true);
    ;}
    break;

  case 234:
#line 1759 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd3D, true);
    ;}
    break;

  case 235:
#line 1764 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd1D);
    ;}
    break;

  case 236:
#line 1769 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D);
    ;}
    break;

  case 237:
#line 1774 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd3D);
    ;}
    break;

  case 238:
#line 1779 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube);
    ;}
    break;

  case 239:
#line 1784 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd1D, true);
    ;}
    break;

  case 240:
#line 1789 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true);
    ;}
    break;

  case 241:
#line 1794 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube, true);
    ;}
    break;

  case 242:
#line 1799 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdRect);
    ;}
    break;

  case 243:
#line 1806 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdRect, false, true);
    ;}
    break;

  case 244:
#line 1813 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdRect);
    ;}
    break;

  case 245:
#line 1820 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdRect);
    ;}
    break;

  case 246:
#line 1827 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdBuffer);
    ;}
    break;

  case 247:
#line 1832 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdBuffer);
    ;}
    break;

  case 248:
#line 1837 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdBuffer);
    ;}
    break;

  case 249:
#line 1842 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, false, true);
    ;}
    break;

  case 250:
#line 1847 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, false, false, true);
    ;}
    break;

  case 251:
#line 1852 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, false, false, true);
    ;}
    break;

  case 252:
#line 1857 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, false, true);
    ;}
    break;

  case 253:
#line 1862 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true, false, true);
    ;}
    break;

  case 254:
#line 1867 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true, false, true);
    ;}
    break;

  case 255:
#line 1872 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd1D);
    ;}
    break;

  case 256:
#line 1877 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd1D);
    ;}
    break;

  case 257:
#line 1882 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd1D);
    ;}
    break;

  case 258:
#line 1887 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D);
    ;}
    break;

  case 259:
#line 1892 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D);
    ;}
    break;

  case 260:
#line 1897 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D);
    ;}
    break;

  case 261:
#line 1902 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd3D);
    ;}
    break;

  case 262:
#line 1907 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd3D);
    ;}
    break;

  case 263:
#line 1912 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd3D);
    ;}
    break;

  case 264:
#line 1917 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdRect);
    ;}
    break;

  case 265:
#line 1922 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdRect);
    ;}
    break;

  case 266:
#line 1927 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdRect);
    ;}
    break;

  case 267:
#line 1932 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdCube);
    ;}
    break;

  case 268:
#line 1937 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdCube);
    ;}
    break;

  case 269:
#line 1942 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdCube);
    ;}
    break;

  case 270:
#line 1947 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdBuffer);
    ;}
    break;

  case 271:
#line 1952 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdBuffer);
    ;}
    break;

  case 272:
#line 1957 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdBuffer);
    ;}
    break;

  case 273:
#line 1962 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd1D, true);
    ;}
    break;

  case 274:
#line 1967 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd1D, true);
    ;}
    break;

  case 275:
#line 1972 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd1D, true);
    ;}
    break;

  case 276:
#line 1977 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, true);
    ;}
    break;

  case 277:
#line 1982 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, true);
    ;}
    break;

  case 278:
#line 1987 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, true);
    ;}
    break;

  case 279:
#line 1992 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, EsdCube, true);
    ;}
    break;

  case 280:
#line 1997 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, EsdCube, true);
    ;}
    break;

  case 281:
#line 2002 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, EsdCube, true);
    ;}
    break;

  case 282:
#line 2007 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, false, false, true);
    ;}
    break;

  case 283:
#line 2012 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, false, false, true);
    ;}
    break;

  case 284:
#line 2017 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, false, false, true);
    ;}
    break;

  case 285:
#line 2022 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtFloat, Esd2D, true, false, true);
    ;}
    break;

  case 286:
#line 2027 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtInt, Esd2D, true, false, true);
    ;}
    break;

  case 287:
#line 2032 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.setImage(EbtUint, Esd2D, true, false, true);
    ;}
    break;

  case 288:
#line 2037 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.type) = (yyvsp[(1) - (1)].interm.type);
        (yyval.interm.type).qualifier.storage = parseContext.symbolTable.atGlobalLevel() ? EvqGlobal : EvqTemporary;
    ;}
    break;

  case 289:
#line 2041 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        //
        // This is for user defined type names.  The lexical phase looked up the
        // type.
        //
        if (const TVariable* variable = ((yyvsp[(1) - (1)].lex).symbol)->getAsVariable()) {
            const TType& structure = variable->getType();
            (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc, parseContext.symbolTable.atGlobalLevel());
            (yyval.interm.type).basicType = EbtStruct;
            (yyval.interm.type).userDef = &structure;
        } else
            parseContext.error((yyvsp[(1) - (1)].lex).loc, "expected type name", (yyvsp[(1) - (1)].lex).string->c_str(), "");
    ;}
    break;

  case 290:
#line 2057 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "highp precision qualifier");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        if (parseContext.profile == EEsProfile)
		    (yyval.interm.type).qualifier.precision = EpqHigh;
    ;}
    break;

  case 291:
#line 2063 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "mediump precision qualifier");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        if (parseContext.profile == EEsProfile)
	    	(yyval.interm.type).qualifier.precision = EpqMedium;
    ;}
    break;

  case 292:
#line 2069 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.profileRequires((yyvsp[(1) - (1)].lex).loc, ENoProfile, 130, 0, "lowp precision qualifier");
        (yyval.interm.type).init((yyvsp[(1) - (1)].lex).loc);
        if (parseContext.profile == EEsProfile)
    		(yyval.interm.type).qualifier.precision = EpqLow;
    ;}
    break;

  case 293:
#line 2078 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { parseContext.nestedStructCheck((yyvsp[(1) - (3)].lex).loc); ;}
    break;

  case 294:
#line 2078 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TType* structure = new TType((yyvsp[(5) - (6)].interm.typeList), *(yyvsp[(2) - (6)].lex).string);
        TVariable* userTypeDef = new TVariable((yyvsp[(2) - (6)].lex).string, *structure, true);
        if (! parseContext.symbolTable.insert(*userTypeDef))
            parseContext.error((yyvsp[(2) - (6)].lex).loc, "redefinition", (yyvsp[(2) - (6)].lex).string->c_str(), "struct");
        (yyval.interm.type).init((yyvsp[(1) - (6)].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    ;}
    break;

  case 295:
#line 2088 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { parseContext.nestedStructCheck((yyvsp[(1) - (2)].lex).loc); ;}
    break;

  case 296:
#line 2088 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TType* structure = new TType((yyvsp[(4) - (5)].interm.typeList), TString(""));
        (yyval.interm.type).init((yyvsp[(1) - (5)].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    ;}
    break;

  case 297:
#line 2098 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.typeList) = (yyvsp[(1) - (1)].interm.typeList);
    ;}
    break;

  case 298:
#line 2101 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.typeList) = (yyvsp[(1) - (2)].interm.typeList);
        for (unsigned int i = 0; i < (yyvsp[(2) - (2)].interm.typeList)->size(); ++i) {
            for (unsigned int j = 0; j < (yyval.interm.typeList)->size(); ++j) {
                if ((*(yyval.interm.typeList))[j].type->getFieldName() == (*(yyvsp[(2) - (2)].interm.typeList))[i].type->getFieldName())
                    parseContext.error((*(yyvsp[(2) - (2)].interm.typeList))[i].loc, "duplicate member name:", "", (*(yyvsp[(2) - (2)].interm.typeList))[i].type->getFieldName().c_str());
            }
            (yyval.interm.typeList)->push_back((*(yyvsp[(2) - (2)].interm.typeList))[i]);
        }
    ;}
    break;

  case 299:
#line 2114 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(1) - (3)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(1) - (3)].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[(1) - (3)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[(1) - (3)].interm.type).loc, (yyvsp[(1) - (3)].interm.type).arraySizes->getSize());
        }

        (yyval.interm.typeList) = (yyvsp[(2) - (3)].interm.typeList);

        parseContext.voidErrorCheck((yyvsp[(1) - (3)].interm.type).loc, (*(yyvsp[(2) - (3)].interm.typeList))[0].type->getFieldName(), (yyvsp[(1) - (3)].interm.type));
        parseContext.precisionQualifierCheck((yyvsp[(1) - (3)].interm.type).loc, (yyvsp[(1) - (3)].interm.type));

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            parseContext.arrayDimCheck((yyvsp[(1) - (3)].interm.type).loc, (*(yyval.interm.typeList))[i].type, (yyvsp[(1) - (3)].interm.type).arraySizes);
            (*(yyval.interm.typeList))[i].type->mergeType((yyvsp[(1) - (3)].interm.type));
        }
    ;}
    break;

  case 300:
#line 2132 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(2) - (4)].interm.type).arraySizes) {
            parseContext.profileRequires((yyvsp[(2) - (4)].interm.type).loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires((yyvsp[(2) - (4)].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[(2) - (4)].interm.type).loc, (yyvsp[(2) - (4)].interm.type).arraySizes->getSize());
        }

        (yyval.interm.typeList) = (yyvsp[(3) - (4)].interm.typeList);

        parseContext.voidErrorCheck((yyvsp[(2) - (4)].interm.type).loc, (*(yyvsp[(3) - (4)].interm.typeList))[0].type->getFieldName(), (yyvsp[(2) - (4)].interm.type));
        parseContext.mergeQualifiers((yyvsp[(2) - (4)].interm.type).loc, (yyvsp[(2) - (4)].interm.type).qualifier, (yyvsp[(1) - (4)].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[(2) - (4)].interm.type).loc, (yyvsp[(2) - (4)].interm.type));

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            parseContext.arrayDimCheck((yyvsp[(1) - (4)].interm.type).loc, (*(yyval.interm.typeList))[i].type, (yyvsp[(2) - (4)].interm.type).arraySizes);
            (*(yyval.interm.typeList))[i].type->mergeType((yyvsp[(2) - (4)].interm.type));
        }
    ;}
    break;

  case 301:
#line 2154 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.typeList) = NewPoolTTypeList();
        (yyval.interm.typeList)->push_back((yyvsp[(1) - (1)].interm.typeLine));
    ;}
    break;

  case 302:
#line 2158 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.typeList)->push_back((yyvsp[(3) - (3)].interm.typeLine));
    ;}
    break;

  case 303:
#line 2164 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[(1) - (1)].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[(1) - (1)].lex).string);
    ;}
    break;

  case 304:
#line 2169 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {        
        if (parseContext.profile == EEsProfile)
            parseContext.arraySizeRequiredCheck((yyvsp[(2) - (2)].interm).loc, (yyvsp[(2) - (2)].interm).arraySizes->getSize());
        parseContext.arrayDimCheck((yyvsp[(1) - (2)].lex).loc, (yyvsp[(2) - (2)].interm).arraySizes, 0);

        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[(1) - (2)].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[(1) - (2)].lex).string);
        (yyval.interm.typeLine).type->setArraySizes((yyvsp[(2) - (2)].interm).arraySizes);
    ;}
    break;

  case 305:
#line 2182 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 306:
#line 2185 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(2) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 307:
#line 2188 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(2) - (4)].interm.intermTypedNode);
    ;}
    break;

  case 308:
#line 2194 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 309:
#line 2197 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // TODO: 4.2 functionality: implement the initializer list
        (yyval.interm.intermTypedNode) = (yyvsp[(3) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 310:
#line 2204 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 311:
#line 2208 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermAggregate); ;}
    break;

  case 312:
#line 2209 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 313:
#line 2215 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 314:
#line 2216 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 315:
#line 2217 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 316:
#line 2218 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 317:
#line 2219 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 318:
#line 2220 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 319:
#line 2221 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 320:
#line 2225 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermAggregate) = 0; ;}
    break;

  case 321:
#line 2226 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { parseContext.symbolTable.push(); ;}
    break;

  case 322:
#line 2227 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]); ;}
    break;

  case 323:
#line 2228 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(3) - (5)].interm.intermAggregate) != 0)
            (yyvsp[(3) - (5)].interm.intermAggregate)->setOperator(EOpSequence);
        (yyval.interm.intermAggregate) = (yyvsp[(3) - (5)].interm.intermAggregate);
    ;}
    break;

  case 324:
#line 2236 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 325:
#line 2237 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode); ;}
    break;

  case 326:
#line 2241 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermAggregate); ;}
    break;

  case 327:
#line 2242 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { parseContext.symbolTable.push(); ;}
    break;

  case 328:
#line 2242 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]); ;}
    break;

  case 329:
#line 2242 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = (yyvsp[(2) - (3)].interm.intermNode); ;}
    break;

  case 330:
#line 2246 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = 0;
    ;}
    break;

  case 331:
#line 2249 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(2) - (3)].interm.intermAggregate))
            (yyvsp[(2) - (3)].interm.intermAggregate)->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[(2) - (3)].interm.intermAggregate);
    ;}
    break;

  case 332:
#line 2257 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermAggregate) = parseContext.intermediate.makeAggregate((yyvsp[(1) - (1)].interm.intermNode));
        if ((yyvsp[(1) - (1)].interm.intermNode) && (yyvsp[(1) - (1)].interm.intermNode)->getAsBranchNode() && ((yyvsp[(1) - (1)].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            (yyvsp[(1) - (1)].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence(0, (yyvsp[(1) - (1)].interm.intermNode));
            (yyval.interm.intermAggregate) = 0;  // start a fresh subsequence for what's after this case
        }
    ;}
    break;

  case 333:
#line 2265 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if ((yyvsp[(2) - (2)].interm.intermNode) && (yyvsp[(2) - (2)].interm.intermNode)->getAsBranchNode() && ((yyvsp[(2) - (2)].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase || 
                                            (yyvsp[(2) - (2)].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence((yyvsp[(1) - (2)].interm.intermAggregate), (yyvsp[(2) - (2)].interm.intermNode));
            (yyval.interm.intermAggregate) = 0;  // start a fresh subsequence for what's after this case
        } else
            (yyval.interm.intermAggregate) = parseContext.intermediate.growAggregate((yyvsp[(1) - (2)].interm.intermAggregate), (yyvsp[(2) - (2)].interm.intermNode));
    ;}
    break;

  case 334:
#line 2276 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = 0; ;}
    break;

  case 335:
#line 2277 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { (yyval.interm.intermNode) = static_cast<TIntermNode*>((yyvsp[(1) - (2)].interm.intermTypedNode)); ;}
    break;

  case 336:
#line 2281 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.boolCheck((yyvsp[(1) - (5)].lex).loc, (yyvsp[(3) - (5)].interm.intermTypedNode));
        (yyval.interm.intermNode) = parseContext.intermediate.addSelection((yyvsp[(3) - (5)].interm.intermTypedNode), (yyvsp[(5) - (5)].interm.nodePair), (yyvsp[(1) - (5)].lex).loc);
    ;}
    break;

  case 337:
#line 2288 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.nodePair).node1 = (yyvsp[(1) - (3)].interm.intermNode);
        (yyval.interm.nodePair).node2 = (yyvsp[(3) - (3)].interm.intermNode);
    ;}
    break;

  case 338:
#line 2292 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.nodePair).node1 = (yyvsp[(1) - (1)].interm.intermNode);
        (yyval.interm.nodePair).node2 = 0;
    ;}
    break;

  case 339:
#line 2300 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
        parseContext.boolCheck((yyvsp[(1) - (1)].interm.intermTypedNode)->getLoc(), (yyvsp[(1) - (1)].interm.intermTypedNode));
    ;}
    break;

  case 340:
#line 2304 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        TIntermNode* intermNode;
        parseContext.boolCheck((yyvsp[(2) - (4)].lex).loc, (yyvsp[(1) - (4)].interm.type));

        if (parseContext.executeInitializerError((yyvsp[(2) - (4)].lex).loc, *(yyvsp[(2) - (4)].lex).string, (yyvsp[(1) - (4)].interm.type), (yyvsp[(4) - (4)].interm.intermTypedNode), intermNode))
            (yyval.interm.intermTypedNode) = 0;
        else
            (yyval.interm.intermTypedNode) = (yyvsp[(4) - (4)].interm.intermTypedNode);
    ;}
    break;

  case 341:
#line 2316 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        // start new switch sequence on the switch stack
        parseContext.switchSequenceStack.push_back(new TIntermSequence);
    ;}
    break;

  case 342:
#line 2320 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.addSwitch((yyvsp[(1) - (8)].lex).loc, (yyvsp[(3) - (8)].interm.intermTypedNode), (yyvsp[(7) - (8)].interm.intermAggregate));
        delete parseContext.switchSequenceStack.back();
        parseContext.switchSequenceStack.pop_back();
    ;}
    break;

  case 343:
#line 2328 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermAggregate) = 0;
    ;}
    break;

  case 344:
#line 2331 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermAggregate) = (yyvsp[(1) - (1)].interm.intermAggregate);
    ;}
    break;

  case 345:
#line 2337 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.constCheck((yyvsp[(2) - (3)].interm.intermTypedNode), "case");
        parseContext.integerCheck((yyvsp[(2) - (3)].interm.intermTypedNode), "case");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpCase, (yyvsp[(2) - (3)].interm.intermTypedNode), (yyvsp[(1) - (3)].lex).loc);
    ;}
    break;

  case 346:
#line 2342 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpDefault, (yyvsp[(1) - (2)].lex).loc);
    ;}
    break;

  case 347:
#line 2348 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
    ;}
    break;

  case 348:
#line 2352 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[(6) - (6)].interm.intermNode), (yyvsp[(4) - (6)].interm.intermTypedNode), 0, true, (yyvsp[(1) - (6)].lex).loc);
        --parseContext.loopNestingLevel;
    ;}
    break;

  case 349:
#line 2357 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    { ++parseContext.loopNestingLevel; ;}
    break;

  case 350:
#line 2357 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.boolCheck((yyvsp[(8) - (8)].lex).loc, (yyvsp[(6) - (8)].interm.intermTypedNode));

        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[(3) - (8)].interm.intermNode), (yyvsp[(6) - (8)].interm.intermTypedNode), 0, false, (yyvsp[(4) - (8)].lex).loc);
        --parseContext.loopNestingLevel;
    ;}
    break;

  case 351:
#line 2363 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
    ;}
    break;

  case 352:
#line 2367 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[(4) - (7)].interm.intermNode), (yyvsp[(2) - (7)].lex).loc);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate(
                (yyval.interm.intermNode),
                parseContext.intermediate.addLoop((yyvsp[(7) - (7)].interm.intermNode), reinterpret_cast<TIntermTyped*>((yyvsp[(5) - (7)].interm.nodePair).node1), reinterpret_cast<TIntermTyped*>((yyvsp[(5) - (7)].interm.nodePair).node2), true, (yyvsp[(1) - (7)].lex).loc),
                (yyvsp[(1) - (7)].lex).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        --parseContext.loopNestingLevel;
    ;}
    break;

  case 353:
#line 2380 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 354:
#line 2383 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 355:
#line 2389 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = (yyvsp[(1) - (1)].interm.intermTypedNode);
    ;}
    break;

  case 356:
#line 2392 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermTypedNode) = 0;
    ;}
    break;

  case 357:
#line 2398 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.nodePair).node1 = (yyvsp[(1) - (2)].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = 0;
    ;}
    break;

  case 358:
#line 2402 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.nodePair).node1 = (yyvsp[(1) - (3)].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = (yyvsp[(3) - (3)].interm.intermTypedNode);
    ;}
    break;

  case 359:
#line 2409 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if (parseContext.loopNestingLevel <= 0)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "continue statement only allowed in loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpContinue, (yyvsp[(1) - (2)].lex).loc);
    ;}
    break;

  case 360:
#line 2414 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        if (parseContext.loopNestingLevel + parseContext.switchSequenceStack.size() <= 0)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "break statement only allowed in switch and loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpBreak, (yyvsp[(1) - (2)].lex).loc);
    ;}
    break;

  case 361:
#line 2419 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpReturn, (yyvsp[(1) - (2)].lex).loc);
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid)
            parseContext.error((yyvsp[(1) - (2)].lex).loc, "non-void function must return a value", "return", "");
    ;}
    break;

  case 362:
#line 2424 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpReturn, (yyvsp[(2) - (3)].interm.intermTypedNode), (yyvsp[(1) - (3)].lex).loc);
        parseContext.functionReturnsValue = true;
        if (parseContext.currentFunctionType->getBasicType() == EbtVoid)
            parseContext.error((yyvsp[(1) - (3)].lex).loc, "void function cannot return a value", "return", "");
        else if (*(parseContext.currentFunctionType) != (yyvsp[(2) - (3)].interm.intermTypedNode)->getType())
            parseContext.error((yyvsp[(1) - (3)].lex).loc, "function return is not matching type:", "return", "");
    ;}
    break;

  case 363:
#line 2432 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        parseContext.requireStage((yyvsp[(1) - (2)].lex).loc, EShLangFragmentMask, "discard");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpKill, (yyvsp[(1) - (2)].lex).loc);
    ;}
    break;

  case 364:
#line 2441 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
        parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
    ;}
    break;

  case 365:
#line 2445 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[(1) - (2)].interm.intermNode), (yyvsp[(2) - (2)].interm.intermNode));
        parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
    ;}
    break;

  case 366:
#line 2452 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 367:
#line 2455 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyval.interm.intermNode) = (yyvsp[(1) - (1)].interm.intermNode);
    ;}
    break;

  case 368:
#line 2461 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        (yyvsp[(1) - (1)].interm).intermAggregate = parseContext.handleFunctionPrototype((yyvsp[(1) - (1)].interm).loc, *(yyvsp[(1) - (1)].interm).function);
    ;}
    break;

  case 369:
#line 2464 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"
    {
        //   May be best done as post process phase on intermediate code
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid && ! parseContext.functionReturnsValue)
            parseContext.error((yyvsp[(1) - (3)].interm).loc, "function does not return a value:", "", (yyvsp[(1) - (3)].interm).function->getName().c_str());
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[(1) - (3)].interm).intermAggregate, (yyvsp[(3) - (3)].interm.intermNode));
        parseContext.intermediate.setAggregateOperator((yyval.interm.intermNode), EOpFunction, (yyvsp[(1) - (3)].interm).function->getReturnType(), (yyvsp[(1) - (3)].interm).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setName((yyvsp[(1) - (3)].interm).function->getMangledName().c_str());

        // store the pragma information for debug and optimize and other vendor specific
        // information. This information can be queried from the parse tree
        (yyval.interm.intermNode)->getAsAggregate()->setOptimize(parseContext.contextPragma.optimize);
        (yyval.interm.intermNode)->getAsAggregate()->setDebug(parseContext.contextPragma.debug);
        (yyval.interm.intermNode)->getAsAggregate()->addToPragmaTable(parseContext.contextPragma.pragmaTable);
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6725 "glslang.tab.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2481 "/Users/christophericcio/Documents/Repository/Github/glslang/glslang/MachineIndependent/glslang.y"


