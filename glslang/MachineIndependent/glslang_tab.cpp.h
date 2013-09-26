/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 518 "glslang.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



