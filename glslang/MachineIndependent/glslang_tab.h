/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 66 "/home/mpursche/3dcl/libs/gslangvalidator/glslang/MachineIndependent/glslang.y" /* yacc.c:1909  */

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

#line 306 "glslang.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);

#endif /* !YY_YY_GLSLANG_TAB_H_INCLUDED  */
