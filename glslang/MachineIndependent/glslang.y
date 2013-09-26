//
//Copyright (C) 2002-2005  3Dlabs Inc. Ltd.
//Copyright (C) 2012-2013 LunarG, Inc.
//
//All rights reserved.
//
//Redistribution and use in source and binary forms, with or without
//modification, are permitted provided that the following conditions
//are met:
//
//    Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
//    Redistributions in binary form must reproduce the above
//    copyright notice, this list of conditions and the following
//    disclaimer in the documentation and/or other materials provided
//    with the distribution.
//
//    Neither the name of 3Dlabs Inc. Ltd. nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
//THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
//INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
//CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
//LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
//ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//POSSIBILITY OF SUCH DAMAGE.
//

/**
 * This is bison grammar and productions for parsing all versions of the 
 * GLSL shading languages.
 */
%{

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

%}

%union {
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

%{

#define YYPARSE_PARAM voidParseContext
#define parseContext (*(TParseContext*)voidParseContext)
#define YYLEX_PARAM parseContext
#define yyerror(msg) parseContext.parserError(msg)

extern int yylex(YYSTYPE*, TParseContext&);

%}

%pure_parser  // enable thread safety
%expect 1     // One shift reduce conflict because of if | else

%token <lex> ATTRIBUTE VARYING
%token <lex> CONST BOOL FLOAT DOUBLE INT UINT
%token <lex> BREAK CONTINUE DO ELSE FOR IF DISCARD RETURN SWITCH CASE DEFAULT SUBROUTINE
%token <lex> BVEC2 BVEC3 BVEC4 IVEC2 IVEC3 IVEC4 UVEC2 UVEC3 UVEC4 VEC2 VEC3 VEC4
%token <lex> MAT2 MAT3 MAT4 CENTROID IN OUT INOUT
%token <lex> UNIFORM PATCH SAMPLE BUFFER SHARED
%token <lex> COHERENT VOLATILE RESTRICT READONLY WRITEONLY
%token <lex> DVEC2 DVEC3 DVEC4 DMAT2 DMAT3 DMAT4
%token <lex> NOPERSPECTIVE FLAT SMOOTH LAYOUT

%token <lex> MAT2X2 MAT2X3 MAT2X4
%token <lex> MAT3X2 MAT3X3 MAT3X4
%token <lex> MAT4X2 MAT4X3 MAT4X4
%token <lex> DMAT2X2 DMAT2X3 DMAT2X4
%token <lex> DMAT3X2 DMAT3X3 DMAT3X4
%token <lex> DMAT4X2 DMAT4X3 DMAT4X4
%token <lex> ATOMIC_UINT

%token <lex> SAMPLER1D SAMPLER2D SAMPLER3D SAMPLERCUBE SAMPLER1DSHADOW SAMPLER2DSHADOW
%token <lex> SAMPLERCUBESHADOW SAMPLER1DARRAY SAMPLER2DARRAY SAMPLER1DARRAYSHADOW
%token <lex> SAMPLER2DARRAYSHADOW ISAMPLER1D ISAMPLER2D ISAMPLER3D ISAMPLERCUBE
%token <lex> ISAMPLER1DARRAY ISAMPLER2DARRAY USAMPLER1D USAMPLER2D USAMPLER3D
%token <lex> USAMPLERCUBE USAMPLER1DARRAY USAMPLER2DARRAY
%token <lex> SAMPLER2DRECT SAMPLER2DRECTSHADOW ISAMPLER2DRECT USAMPLER2DRECT
%token <lex> SAMPLERBUFFER ISAMPLERBUFFER USAMPLERBUFFER
%token <lex> SAMPLERCUBEARRAY SAMPLERCUBEARRAYSHADOW
%token <lex> ISAMPLERCUBEARRAY USAMPLERCUBEARRAY
%token <lex> SAMPLER2DMS ISAMPLER2DMS USAMPLER2DMS
%token <lex> SAMPLER2DMSARRAY ISAMPLER2DMSARRAY USAMPLER2DMSARRAY

%token <lex> IMAGE1D IIMAGE1D UIMAGE1D IMAGE2D IIMAGE2D
%token <lex> UIMAGE2D IMAGE3D IIMAGE3D UIMAGE3D
%token <lex> IMAGE2DRECT IIMAGE2DRECT UIMAGE2DRECT
%token <lex> IMAGECUBE IIMAGECUBE UIMAGECUBE
%token <lex> IMAGEBUFFER IIMAGEBUFFER UIMAGEBUFFER
%token <lex> IMAGE1DARRAY IIMAGE1DARRAY UIMAGE1DARRAY
%token <lex> IMAGE2DARRAY IIMAGE2DARRAY UIMAGE2DARRAY
%token <lex> IMAGECUBEARRAY IIMAGECUBEARRAY UIMAGECUBEARRAY
%token <lex> IMAGE2DMS IIMAGE2DMS UIMAGE2DMS
%token <lex> IMAGE2DMSARRAY IIMAGE2DMSARRAY UIMAGE2DMSARRAY

%token <lex> STRUCT VOID WHILE

%token <lex> IDENTIFIER TYPE_NAME
%token <lex> FLOATCONSTANT DOUBLECONSTANT INTCONSTANT UINTCONSTANT BOOLCONSTANT
%token <lex> FIELD_SELECTION
%token <lex> LEFT_OP RIGHT_OP
%token <lex> INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP
%token <lex> AND_OP OR_OP XOR_OP MUL_ASSIGN DIV_ASSIGN ADD_ASSIGN
%token <lex> MOD_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token <lex> SUB_ASSIGN

%token <lex> LEFT_PAREN RIGHT_PAREN LEFT_BRACKET RIGHT_BRACKET LEFT_BRACE RIGHT_BRACE DOT
%token <lex> COMMA COLON EQUAL SEMICOLON BANG DASH TILDE PLUS STAR SLASH PERCENT
%token <lex> LEFT_ANGLE RIGHT_ANGLE VERTICAL_BAR CARET AMPERSAND QUESTION

%token <lex> INVARIANT PRECISE
%token <lex> HIGH_PRECISION MEDIUM_PRECISION LOW_PRECISION PRECISION

%token <lex> PACKED RESOURCE SUPERP

%type <interm> assignment_operator unary_operator
%type <interm.intermTypedNode> variable_identifier primary_expression postfix_expression
%type <interm.intermTypedNode> expression integer_expression assignment_expression
%type <interm.intermTypedNode> unary_expression multiplicative_expression additive_expression
%type <interm.intermTypedNode> relational_expression equality_expression
%type <interm.intermTypedNode> conditional_expression constant_expression
%type <interm.intermTypedNode> logical_or_expression logical_xor_expression logical_and_expression
%type <interm.intermTypedNode> shift_expression and_expression exclusive_or_expression inclusive_or_expression
%type <interm.intermTypedNode> function_call initializer initializer_list condition conditionopt

%type <interm.intermNode> translation_unit function_definition
%type <interm.intermNode> statement simple_statement
%type <interm.intermAggregate>  statement_list switch_statement_list compound_statement
%type <interm.intermNode> declaration_statement selection_statement expression_statement
%type <interm.intermNode> switch_statement case_label
%type <interm.intermNode> declaration external_declaration
%type <interm.intermNode> for_init_statement compound_statement_no_new_scope
%type <interm.nodePair> selection_rest_statement for_rest_statement
%type <interm.intermNode> iteration_statement jump_statement statement_no_new_scope statement_scoped
%type <interm> single_declaration init_declarator_list

%type <interm> parameter_declaration parameter_declarator parameter_type_specifier

%type <interm> array_specifier
%type <interm.type> precise_qualifier invariant_qualifier interpolation_qualifier storage_qualifier precision_qualifier
%type <interm.type> layout_qualifier layout_qualifier_id_list layout_qualifier_id

%type <interm.type> type_qualifier fully_specified_type type_specifier
%type <interm.type> single_type_qualifier
%type <interm.type> type_specifier_nonarray
%type <interm.type> struct_specifier
%type <interm.typeLine> struct_declarator
%type <interm.typeList> struct_declarator_list struct_declaration struct_declaration_list type_name_list
%type <interm> block_structure
%type <interm.function> function_header function_declarator
%type <interm.function> function_header_with_parameters
%type <interm> function_call_header_with_parameters function_call_header_no_parameters function_call_generic function_prototype
%type <interm> function_call_or_method function_identifier function_call_header

%type <interm.identifierList> identifier_list

%start translation_unit
%%

variable_identifier
    : IDENTIFIER {
        $$ = parseContext.handleVariable($1.loc, $1.symbol, $1.string);
    }
    ;

primary_expression
    : variable_identifier {
        $$ = $1;
    }
    | INTCONSTANT {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setIConst($1.i);
        $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtInt, EvqConst), $1.loc);
    }
    | UINTCONSTANT {        
        parseContext.fullIntegerCheck($1.loc, "unsigned literal");
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setUConst($1.u);
        $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtUint, EvqConst), $1.loc);
    }
    | FLOATCONSTANT {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setDConst($1.d);
        $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtFloat, EvqConst), $1.loc);
    }
    | DOUBLECONSTANT {
        parseContext.doubleCheck($1.loc, "double literal");
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setDConst($1.d);
        $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtDouble, EvqConst), $1.loc);
    }
    | BOOLCONSTANT {
        TConstUnion *unionArray = new TConstUnion[1];
        unionArray->setBConst($1.b);
        $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $1.loc);
    }
    | LEFT_PAREN expression RIGHT_PAREN {
        $$ = $2;
    }
    ;

postfix_expression
    : primary_expression {
        $$ = $1;
    }
    | postfix_expression LEFT_BRACKET integer_expression RIGHT_BRACKET {
        $$ = parseContext.handleBracketDereference($2.loc, $1, $3);
    }
    | function_call {
        $$ = $1;
    }
    | postfix_expression DOT FIELD_SELECTION {
        $$ = parseContext.handleDotDereference($3.loc, $1, *$3.string);
    }
    | postfix_expression INC_OP {
        parseContext.variableCheck($1);
        parseContext.lValueErrorCheck($2.loc, "++", $1);
        $$ = parseContext.intermediate.addUnaryMath(EOpPostIncrement, $1, $2.loc);
        if ($$ == 0) {
            parseContext.unaryOpError($2.loc, "++", $1->getCompleteString());
            $$ = $1;
        }
    }
    | postfix_expression DEC_OP {
        parseContext.variableCheck($1);
        parseContext.lValueErrorCheck($2.loc, "--", $1);
        $$ = parseContext.intermediate.addUnaryMath(EOpPostDecrement, $1, $2.loc);
        if ($$ == 0) {
            parseContext.unaryOpError($2.loc, "--", $1->getCompleteString());
            $$ = $1;
        }
    }
    ;

integer_expression
    : expression {
        parseContext.integerCheck($1, "[]");
        $$ = $1;
    }
    ;

function_call
    : function_call_or_method {
        $$ = parseContext.handleFunctionCall($1.loc, $1.function, $1.intermNode, $1.intermAggregate);
        if ($$ == 0)
            YYERROR;
        delete $1.function;
    }
    ;

function_call_or_method
    : function_call_generic {
        $$ = $1;
    }
    ;

function_call_generic
    : function_call_header_with_parameters RIGHT_PAREN {
        $$ = $1;
        $$.loc = $2.loc;
    }
    | function_call_header_no_parameters RIGHT_PAREN {
        $$ = $1;
        $$.loc = $2.loc;
    }
    ;

function_call_header_no_parameters
    : function_call_header VOID {
        $$ = $1;
    }
    | function_call_header {
        $$ = $1;
    }
    ;

function_call_header_with_parameters
    : function_call_header assignment_expression {
        TParameter param = { 0, new TType };
        param.type->shallowCopy($2->getType());
        $1.function->addParameter(param);
        $$.function = $1.function;
        $$.intermNode = $2;
    }
    | function_call_header_with_parameters COMMA assignment_expression {
        TParameter param = { 0, new TType };
        param.type->shallowCopy($3->getType());
        $1.function->addParameter(param);
        $$.function = $1.function;
        $$.intermNode = parseContext.intermediate.growAggregate($1.intermNode, $3, $2.loc);
    }
    ;

function_call_header
    : function_identifier LEFT_PAREN {
        $$ = $1;
    }
    ;

// Grammar Note:  Constructors look like functions, but are recognized as types.

function_identifier
    : type_specifier {
        // Constructor
        $$.intermNode = 0;
        $$.function = parseContext.handleConstructorCall($1.loc, $1); 
    }
    | postfix_expression {
        //
        // Should be a method or subroutine call, but we don't have arguments yet.
        //
        $$.function = 0;
        $$.intermNode = 0;

        TIntermMethod* method = $1->getAsMethodNode();
        if (method) {
            if (method->getObject()->isArray()) {
                $$.function = new TFunction(&method->getMethodName(), TType(EbtInt), EOpArrayLength);
                $$.intermNode = method->getObject();
            } else
                parseContext.error(method->getLoc(), "only arrays have methods", "", "");
        } else {
            TIntermSymbol* symbol = $1->getAsSymbolNode();
            if (symbol) {
                parseContext.reservedErrorCheck(symbol->getLoc(), symbol->getName());
                TFunction *function = new TFunction(&symbol->getName(), TType(EbtVoid));
                $$.function = function;
            } else
                parseContext.error($1->getLoc(), "function call, method, or subroutine call expected", "", "");
        }

        if ($$.function == 0) {
            // error recover
            TString empty("");
            $$.function = new TFunction(&empty, TType(EbtVoid), EOpNull);
        }
    }
    ;

unary_expression
    : postfix_expression {
        parseContext.variableCheck($1);
        $$ = $1;
        if (TIntermMethod* method = $1->getAsMethodNode())
            parseContext.error($1->getLoc(), "incomplete method syntax", method->getMethodName().c_str(), "");
    }
    | INC_OP unary_expression {
        parseContext.lValueErrorCheck($1.loc, "++", $2);
        $$ = parseContext.intermediate.addUnaryMath(EOpPreIncrement, $2, $1.loc);
        if ($$ == 0) {
            parseContext.unaryOpError($1.loc, "++", $2->getCompleteString());
            $$ = $2;
        }
    }
    | DEC_OP unary_expression {
        parseContext.lValueErrorCheck($1.loc, "--", $2);
        $$ = parseContext.intermediate.addUnaryMath(EOpPreDecrement, $2, $1.loc);
        if ($$ == 0) {
            parseContext.unaryOpError($1.loc, "--", $2->getCompleteString());
            $$ = $2;
        }
    }
    | unary_operator unary_expression {
        if ($1.op != EOpNull) {
            $$ = parseContext.intermediate.addUnaryMath($1.op, $2, $1.loc);
            if ($$ == 0) {
                char errorOp[2] = {0, 0};
                switch($1.op) {
                case EOpNegative:   errorOp[0] = '-'; break;
                case EOpLogicalNot: errorOp[0] = '!'; break;
                case EOpBitwiseNot: errorOp[0] = '~'; break;
                default: break; // some compilers want this
                }
                parseContext.unaryOpError($1.loc, errorOp, $2->getCompleteString());
                $$ = $2;
            }
        } else
            $$ = $2;
    }
    ;
// Grammar Note:  No traditional style type casts.

unary_operator
    : PLUS  { $$.loc = $1.loc; $$.op = EOpNull; }
    | DASH  { $$.loc = $1.loc; $$.op = EOpNegative; }
    | BANG  { $$.loc = $1.loc; $$.op = EOpLogicalNot; }
    | TILDE { $$.loc = $1.loc; $$.op = EOpBitwiseNot; }
    ;
// Grammar Note:  No '*' or '&' unary ops.  Pointers are not supported.

multiplicative_expression
    : unary_expression { $$ = $1; }
    | multiplicative_expression STAR unary_expression {
        $$ = parseContext.intermediate.addBinaryMath(EOpMul, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "*", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    | multiplicative_expression SLASH unary_expression {
        $$ = parseContext.intermediate.addBinaryMath(EOpDiv, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "/", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    | multiplicative_expression PERCENT unary_expression {
        $$ = parseContext.intermediate.addBinaryMath(EOpMod, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "%", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    ;

additive_expression
    : multiplicative_expression { $$ = $1; }
    | additive_expression PLUS multiplicative_expression {
        $$ = parseContext.intermediate.addBinaryMath(EOpAdd, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "+", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    | additive_expression DASH multiplicative_expression {
        $$ = parseContext.intermediate.addBinaryMath(EOpSub, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "-", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    ;

shift_expression
    : additive_expression { $$ = $1; }
    | shift_expression LEFT_OP additive_expression {
        parseContext.fullIntegerCheck($2.loc, "bit shift left");
        $$ = parseContext.intermediate.addBinaryMath(EOpLeftShift, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "<<", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    | shift_expression RIGHT_OP additive_expression {
        parseContext.fullIntegerCheck($2.loc, "bit shift right");
        $$ = parseContext.intermediate.addBinaryMath(EOpRightShift, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, ">>", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    ;

relational_expression
    : shift_expression { $$ = $1; }
    | relational_expression LEFT_ANGLE shift_expression {
        $$ = parseContext.intermediate.addBinaryMath(EOpLessThan, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "<", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        }
    }
    | relational_expression RIGHT_ANGLE shift_expression  {
        $$ = parseContext.intermediate.addBinaryMath(EOpGreaterThan, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, ">", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        }
    }
    | relational_expression LE_OP shift_expression  {
        $$ = parseContext.intermediate.addBinaryMath(EOpLessThanEqual, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "<=", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        }
    }
    | relational_expression GE_OP shift_expression  {
        $$ = parseContext.intermediate.addBinaryMath(EOpGreaterThanEqual, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, ">=", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        }
    }
    ;

equality_expression
    : relational_expression { $$ = $1; }
    | equality_expression EQ_OP relational_expression  {
        $$ = parseContext.intermediate.addBinaryMath(EOpEqual, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "==", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        } else if (($1->isArray() || $3->isArray()))
            parseContext.profileRequires($2.loc, ENoProfile, 120, "GL_3DL_array_objects", "==");
    }
    | equality_expression NE_OP relational_expression {
        $$ = parseContext.intermediate.addBinaryMath(EOpNotEqual, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "!=", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        } else if (($1->isArray() || $3->isArray()))
            parseContext.profileRequires($2.loc, ENoProfile, 120, "GL_3DL_array_objects", "!=");
    }
    ;

and_expression
    : equality_expression { $$ = $1; }
    | and_expression AMPERSAND equality_expression {
        parseContext.fullIntegerCheck($2.loc, "bitwise and");
        $$ = parseContext.intermediate.addBinaryMath(EOpAnd, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "&", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    ;

exclusive_or_expression
    : and_expression { $$ = $1; }
    | exclusive_or_expression CARET and_expression {
        parseContext.fullIntegerCheck($2.loc, "bitwise exclusive or");
        $$ = parseContext.intermediate.addBinaryMath(EOpExclusiveOr, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "^", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    ;

inclusive_or_expression
    : exclusive_or_expression { $$ = $1; }
    | inclusive_or_expression VERTICAL_BAR exclusive_or_expression {
        parseContext.fullIntegerCheck($2.loc, "bitwise inclusive or");
        $$ = parseContext.intermediate.addBinaryMath(EOpInclusiveOr, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "|", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        }
    }
    ;

logical_and_expression
    : inclusive_or_expression { $$ = $1; }
    | logical_and_expression AND_OP inclusive_or_expression {
        $$ = parseContext.intermediate.addBinaryMath(EOpLogicalAnd, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "&&", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        }
    }
    ;

logical_xor_expression
    : logical_and_expression { $$ = $1; }
    | logical_xor_expression XOR_OP logical_and_expression  {
        $$ = parseContext.intermediate.addBinaryMath(EOpLogicalXor, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "^^", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        }
    }
    ;

logical_or_expression
    : logical_xor_expression { $$ = $1; }
    | logical_or_expression OR_OP logical_xor_expression  {
        $$ = parseContext.intermediate.addBinaryMath(EOpLogicalOr, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, "||", $1->getCompleteString(), $3->getCompleteString());
            TConstUnion *unionArray = new TConstUnion[1];
            unionArray->setBConst(false);
            $$ = parseContext.intermediate.addConstantUnion(unionArray, TType(EbtBool, EvqConst), $2.loc);
        }
    }
    ;

conditional_expression
    : logical_or_expression { $$ = $1; }
    | logical_or_expression QUESTION expression COLON assignment_expression {
        parseContext.boolCheck($2.loc, $1);

        $$ = parseContext.intermediate.addSelection($1, $3, $5, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, ":", $3->getCompleteString(), $5->getCompleteString());
            $$ = $5;
        }
    }
    ;

assignment_expression
    : conditional_expression { $$ = $1; }
    | unary_expression assignment_operator assignment_expression {
        parseContext.lValueErrorCheck($2.loc, "assign", $1);
        $$ = parseContext.intermediate.addAssign($2.op, $1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.assignError($2.loc, "assign", $1->getCompleteString(), $3->getCompleteString());
            $$ = $1;
        } else if (($1->isArray() || $3->isArray()))
            parseContext.profileRequires($2.loc, ENoProfile, 120, "GL_3DL_array_objects", "=");
    }
    ;

assignment_operator
    : EQUAL        { $$.loc = $1.loc; $$.op = EOpAssign; }
    | MUL_ASSIGN   { $$.loc = $1.loc; $$.op = EOpMulAssign; }
    | DIV_ASSIGN   { $$.loc = $1.loc; $$.op = EOpDivAssign; }
    | MOD_ASSIGN   { $$.loc = $1.loc; $$.op = EOpModAssign; }
    | ADD_ASSIGN   { $$.loc = $1.loc; $$.op = EOpAddAssign; }
    | SUB_ASSIGN   { $$.loc = $1.loc; $$.op = EOpSubAssign; }
    | LEFT_ASSIGN  {
        parseContext.fullIntegerCheck($1.loc, "bit-shift left assign");
        $$.loc = $1.loc; $$.op = EOpLeftShiftAssign;
    }
    | RIGHT_ASSIGN {
        parseContext.fullIntegerCheck($1.loc, "bit-shift right assign");
        $$.loc = $1.loc; $$.op = EOpRightShiftAssign;
    }
    | AND_ASSIGN   {
        parseContext.fullIntegerCheck($1.loc, "bitwise-and assign");
        $$.loc = $1.loc; $$.op = EOpAndAssign;
    }
    | XOR_ASSIGN   {
        parseContext.fullIntegerCheck($1.loc, "bitwise-xor assign");
        $$.loc = $1.loc; $$.op = EOpExclusiveOrAssign;
    }
    | OR_ASSIGN    {
        parseContext.fullIntegerCheck($1.loc, "bitwise-or assign");
        $$.loc = $1.loc; $$.op = EOpInclusiveOrAssign;
    }
    ;

expression
    : assignment_expression {
        $$ = $1;
    }
    | expression COMMA assignment_expression {
        $$ = parseContext.intermediate.addComma($1, $3, $2.loc);
        if ($$ == 0) {
            parseContext.binaryOpError($2.loc, ",", $1->getCompleteString(), $3->getCompleteString());
            $$ = $3;
        }
    }
    ;

constant_expression
    : conditional_expression {
        parseContext.constCheck($1, "");
        $$ = $1;
    }
    ;

declaration
    : function_prototype SEMICOLON {
        $$ = 0;
        // TODO: 4.0 functionality: subroutines: make the identifier a user type for this signature
    }
    | init_declarator_list SEMICOLON {
        if ($1.intermAggregate)
            $1.intermAggregate->setOperator(EOpSequence);
        $$ = $1.intermAggregate;
    }
    | PRECISION precision_qualifier type_specifier SEMICOLON {
        parseContext.profileRequires($1.loc, ENoProfile, 130, 0, "precision statement");

        // lazy setting of the previous scope's defaults, has effect only the first time it is called in a particular scope
        parseContext.symbolTable.setPreviousDefaultPrecisions(&parseContext.defaultPrecision[0]);

		parseContext.setDefaultPrecision($1.loc, $3, $2.qualifier.precision);
        $$ = 0;
    }
    | block_structure SEMICOLON {
        parseContext.addBlock($1.loc, *$1.typeList);
        $$ = 0;
    }
    | block_structure IDENTIFIER SEMICOLON {
        parseContext.addBlock($1.loc, *$1.typeList, $2.string);
        $$ = 0;
    }
    | block_structure IDENTIFIER array_specifier SEMICOLON {
        parseContext.addBlock($1.loc, *$1.typeList, $2.string, $3.arraySizes);
        $$ = 0;
    }
    | type_qualifier SEMICOLON {
        parseContext.updateQualifierDefaults($1.loc, $1.qualifier);
        $$ = 0;
    }
    | type_qualifier IDENTIFIER SEMICOLON {
        parseContext.addQualifierToExisting($1.loc, $1.qualifier, *$2.string);
        $$ = 0;
    }
    | type_qualifier IDENTIFIER identifier_list SEMICOLON {
        $3->push_back($2.string);
        parseContext.addQualifierToExisting($1.loc, $1.qualifier, *$3);
        $$ = 0;
    }
    ;

block_structure
    : type_qualifier IDENTIFIER LEFT_BRACE { parseContext.nestedBlockCheck($1.loc); } struct_declaration_list RIGHT_BRACE {
        --parseContext.structNestingLevel;
        parseContext.blockName = $2.string;
        parseContext.currentBlockDefaults = $1.qualifier;
        $$.loc = $1.loc;
        $$.typeList = $5;
    }

identifier_list
    : COMMA IDENTIFIER {
        $$ = NewPoolTIdentifierList();
        $$->push_back($2.string);
    }
    | identifier_list COMMA IDENTIFIER {
        $$ = $1;
        $$->push_back($3.string);
    }
    ;

function_prototype
    : function_declarator RIGHT_PAREN  {
        // ES can't declare prototypes inside functions
        if (! parseContext.symbolTable.atGlobalLevel())
            parseContext.requireProfile($2.loc, static_cast<EProfileMask>(~EEsProfileMask), "local function declaration");

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
        TSymbol* symbol = parseContext.symbolTable.find($1->getMangledName(), &builtIn);
        if (symbol && symbol->getAsFunction() && builtIn)
            parseContext.requireProfile($2.loc, static_cast<EProfileMask>(~EEsProfileMask), "redeclaration of built-in function");
        const TFunction* prevDec = symbol ? symbol->getAsFunction() : 0;
        if (prevDec) {
            if (prevDec->getReturnType() != $1->getReturnType()) {
                parseContext.error($2.loc, "overloaded functions must have the same return type", $1->getReturnType().getCompleteTypeString().c_str(), "");
            }
            for (int i = 0; i < prevDec->getParamCount(); ++i) {
                if ((*prevDec)[i].type->getQualifier().storage != (*$1)[i].type->getQualifier().storage)
                    parseContext.error($2.loc, "overloaded functions must have the same parameter qualifiers", (*$1)[i].type->getStorageQualifierString(), "");
            }
        }

        //
        // If this is a redeclaration, it could also be a definition,
        // in which case, we want to use the variable names from this one, and not the one that's
        // being redeclared.  So, pass back up this declaration, not the one in the symbol table.
        //
        $$.function = $1;
        $$.loc = $2.loc;

        if (! parseContext.symbolTable.insert(*$$.function))
            parseContext.error($2.loc, "illegal redeclaration", $$.function->getName().c_str(), "");
    }
    ;

function_declarator
    : function_header {
        $$ = $1;
    }
    | function_header_with_parameters {
        $$ = $1;
    }
    ;


function_header_with_parameters
    : function_header parameter_declaration {
        // Add the parameter
        $$ = $1;
        if ($2.param.type->getBasicType() != EbtVoid)
            $1->addParameter($2.param);
        else
            delete $2.param.type;
    }
    | function_header_with_parameters COMMA parameter_declaration {
        //
        // Only first parameter of one-parameter functions can be void
        // The check for named parameters not being void is done in parameter_declarator
        //
        if ($3.param.type->getBasicType() == EbtVoid) {
            //
            // This parameter > first is void
            //
            parseContext.error($2.loc, "cannot be an argument type except for '(void)'", "void", "");
            delete $3.param.type;
        } else {
            // Add the parameter
            $$ = $1;
            $1->addParameter($3.param);
        }
    }
    ;

function_header
    : fully_specified_type IDENTIFIER LEFT_PAREN {
        if ($1.qualifier.storage != EvqGlobal && $1.qualifier.storage != EvqTemporary) {
            parseContext.error($2.loc, "no qualifiers allowed for function return",
                               GetStorageQualifierString($1.qualifier.storage), "");
        }

        // Add the function as a prototype after parsing it (we do not support recursion)
        TFunction *function;
        TType type($1);
        function = new TFunction($2.string, type);
        $$ = function;
    }
    ;

parameter_declarator
    // Type + name
    : type_specifier IDENTIFIER {
        if ($1.arraySizes) {
            parseContext.profileRequires($1.loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires($1.loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck($1.loc, $1.arraySizes->getSize());
        }
        if ($1.basicType == EbtVoid) {
            parseContext.error($2.loc, "illegal use of type 'void'", $2.string->c_str(), "");
        }
        parseContext.reservedErrorCheck($2.loc, *$2.string);

        TParameter param = {$2.string, new TType($1)};
        $$.loc = $2.loc;
        $$.param = param;
    }
    | type_specifier IDENTIFIER array_specifier {
        if ($1.arraySizes) {
            parseContext.profileRequires($1.loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires($1.loc, EEsProfile, 300, 0, "arrayed type");
            parseContext.arraySizeRequiredCheck($1.loc, $1.arraySizes->getSize());
        }
        parseContext.arrayDimCheck($2.loc, $1.arraySizes, $3.arraySizes);

        parseContext.arraySizeRequiredCheck($3.loc, $3.arraySizes->getSize());
        parseContext.reservedErrorCheck($2.loc, *$2.string);

        $1.arraySizes = $3.arraySizes;

        TParameter param = { $2.string, new TType($1)};
        $$.loc = $2.loc;
        $$.param = param;
    }
    ;

parameter_declaration
    //
    // With name
    //
    : type_qualifier parameter_declarator {
        $$ = $2;
        if ($1.qualifier.precision != EpqNone)
            $$.param.type->getQualifier().precision = $1.qualifier.precision;

        parseContext.parameterSamplerCheck($2.loc, $1.qualifier.storage, *$$.param.type);
        parseContext.paramCheck($1.loc, $1.qualifier.storage, $$.param.type);
    }
    | parameter_declarator {
        $$ = $1;

        parseContext.parameterSamplerCheck($1.loc, EvqIn, *$1.param.type);
        parseContext.paramCheck($1.loc, EvqTemporary, $$.param.type);
    }
    //
    // Without name
    //
    | type_qualifier parameter_type_specifier {
        $$ = $2;
        if ($1.qualifier.precision != EpqNone)
            $$.param.type->getQualifier().precision = $1.qualifier.precision;

        parseContext.parameterSamplerCheck($2.loc, $1.qualifier.storage, *$$.param.type);
        parseContext.paramCheck($1.loc, $1.qualifier.storage, $$.param.type);
    }
    | parameter_type_specifier {
        $$ = $1;

        parseContext.parameterSamplerCheck($1.loc, EvqIn, *$1.param.type);
        parseContext.paramCheck($1.loc, EvqTemporary, $$.param.type);
    }
    ;

parameter_type_specifier
    : type_specifier {
        TParameter param = { 0, new TType($1) };
        $$.param = param;
    }
    ;

init_declarator_list
    : single_declaration {
        $$ = $1;
    }
    | init_declarator_list COMMA IDENTIFIER {
        $$ = $1;
        parseContext.declareVariable($3.loc, *$3.string, $1.type);
    }
    | init_declarator_list COMMA IDENTIFIER array_specifier {
        $$ = $1;
        parseContext.declareVariable($3.loc, *$3.string, $1.type, $4.arraySizes);
    }
    | init_declarator_list COMMA IDENTIFIER array_specifier EQUAL initializer {
        $$.type = $1.type;
        TIntermNode* initNode = parseContext.declareVariable($3.loc, *$3.string, $1.type, $4.arraySizes, $6);
        $$.intermAggregate = parseContext.intermediate.growAggregate($1.intermAggregate, initNode, $5.loc);
    }
    | init_declarator_list COMMA IDENTIFIER EQUAL initializer {
        $$.type = $1.type;
        TIntermNode* initNode = parseContext.declareVariable($3.loc, *$3.string, $1.type, 0, $5);
        $$.intermAggregate = parseContext.intermediate.growAggregate($1.intermAggregate, initNode, $4.loc);
    }
    ;

single_declaration
    : fully_specified_type {
        $$.type = $1;
        $$.intermAggregate = 0;
        parseContext.updateTypedDefaults($1.loc, $$.type.qualifier, 0);
    }
    | fully_specified_type IDENTIFIER {
        $$.type = $1;
        $$.intermAggregate = 0;
        parseContext.declareVariable($2.loc, *$2.string, $1);
        parseContext.updateTypedDefaults($2.loc, $$.type.qualifier, $2.string);
    }
    | fully_specified_type IDENTIFIER array_specifier {
        $$.type = $1;
        $$.intermAggregate = 0;
        parseContext.declareVariable($2.loc, *$2.string, $1, $3.arraySizes);
        parseContext.updateTypedDefaults($2.loc, $$.type.qualifier, $2.string);
    }
    | fully_specified_type IDENTIFIER array_specifier EQUAL initializer {
        $$.type = $1;
        TIntermNode* initNode = parseContext.declareVariable($2.loc, *$2.string, $1, $3.arraySizes, $5);
        $$.intermAggregate = parseContext.intermediate.growAggregate(0, initNode, $4.loc);
    }
    | fully_specified_type IDENTIFIER EQUAL initializer {
        $$.type = $1;
        TIntermNode* initNode = parseContext.declareVariable($2.loc, *$2.string, $1, 0, $4);
        $$.intermAggregate = parseContext.intermediate.growAggregate(0, initNode, $3.loc);
    }

// Grammar Note:  No 'enum', or 'typedef'.

fully_specified_type
    : type_specifier {
        $$ = $1;

        if ($1.arraySizes) {
            parseContext.profileRequires($1.loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires($1.loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck($1.loc, $1.arraySizes->getSize());
        }

        parseContext.precisionQualifierCheck($$.loc, $$);
    }
    | type_qualifier type_specifier  {
        parseContext.globalQualifierFix($1.loc, $1.qualifier, $2);

        if ($2.arraySizes) {
            parseContext.profileRequires($2.loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires($2.loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck($2.loc, $2.arraySizes->getSize());
        }

        if ($2.arraySizes && parseContext.arrayQualifierError($2.loc, $1.qualifier))
            $2.arraySizes = 0;
        
        parseContext.mergeQualifiers($2.loc, $2.qualifier, $1.qualifier, true);
        parseContext.precisionQualifierCheck($2.loc, $2);

        $$ = $2;

        if (! $$.qualifier.isInterpolation() && 
            (parseContext.language == EShLangVertex   && $$.qualifier.storage == EvqVaryingOut ||
             parseContext.language == EShLangFragment && $$.qualifier.storage == EvqVaryingIn))
            $$.qualifier.smooth = true;
    }
    ;

invariant_qualifier
    : INVARIANT {
        parseContext.profileRequires($$.loc, ENoProfile, 120, 0, "invariant");
        $$.init($1.loc);
        $$.qualifier.invariant = true;
    }
    ;

interpolation_qualifier
    : SMOOTH {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "smooth");
        parseContext.profileRequires($1.loc, ENoProfile, 130, 0, "smooth");
        parseContext.profileRequires($1.loc, EEsProfile, 300, 0, "smooth");
        $$.init($1.loc);
        $$.qualifier.smooth = true;
    }
    | FLAT {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "flat");
        parseContext.profileRequires($1.loc, ENoProfile, 130, 0, "flat");
        parseContext.profileRequires($1.loc, EEsProfile, 300, 0, "flat");
        $$.init($1.loc);
        $$.qualifier.flat = true;
    }
    | NOPERSPECTIVE {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "noperspective");
        parseContext.requireProfile($1.loc, static_cast<EProfileMask>(~EEsProfileMask), "noperspective");
        parseContext.profileRequires($1.loc, ENoProfile, 130, 0, "noperspective");
        $$.init($1.loc);
        $$.qualifier.nopersp = true;
    }
    ;

layout_qualifier
    : LAYOUT LEFT_PAREN layout_qualifier_id_list RIGHT_PAREN {
        $$ = $3;
    }
    ;

layout_qualifier_id_list
    : layout_qualifier_id {
        $$ = $1;
    }
    | layout_qualifier_id_list COMMA layout_qualifier_id {
        $$ = $1;
        parseContext.mergeLayoutQualifiers($2.loc, $$.qualifier, $3.qualifier);
    }

layout_qualifier_id
    : IDENTIFIER {
        $$.init($1.loc);
        parseContext.setLayoutQualifier($1.loc, $$, *$1.string);
    }
    | IDENTIFIER EQUAL INTCONSTANT {
        $$.init($1.loc);
        parseContext.setLayoutQualifier($1.loc, $$, *$1.string, $3.i);
    }
    | IDENTIFIER EQUAL UINTCONSTANT {
        $$.init($1.loc);
        parseContext.setLayoutQualifier($1.loc, $$, *$1.string, (int)$3.u);
    }
    | SHARED { // because "shared" is both an identifier and a keyword
        $$.init($1.loc);
        TString strShared("shared");
        parseContext.setLayoutQualifier($1.loc, $$, strShared);
    }
    ;

precise_qualifier
    : PRECISE {
        $$.init($1.loc);
    }
    ;

type_qualifier
    : single_type_qualifier {
        $$ = $1;
    }
    | type_qualifier single_type_qualifier {
        $$ = $1;
        if ($$.basicType == EbtVoid)
            $$.basicType = $2.basicType;

        parseContext.mergeQualifiers($$.loc, $$.qualifier, $2.qualifier, false);
    }
    ;

single_type_qualifier
    : storage_qualifier {
        $$ = $1;
    }
    | layout_qualifier {
        $$ = $1;
    }
    | precision_qualifier {
        $$ = $1;
    }
    | interpolation_qualifier {
        // allow inheritance of storage qualifier from block declaration
        $$ = $1;
    }
    | invariant_qualifier {
        // allow inheritance of storage qualifier from block declaration
        $$ = $1;
    }
    | precise_qualifier {
        // allow inheritance of storage qualifier from block declaration
        $$ = $1;
    }
    ;

storage_qualifier
    : CONST {
        $$.init($1.loc);
        $$.qualifier.storage = EvqConst;
    }
    | ATTRIBUTE {
        parseContext.requireStage($1.loc, EShLangVertexMask, "attribute");
        parseContext.checkDeprecated($1.loc, ECoreProfile, 130, "attribute");
        parseContext.checkDeprecated($1.loc, ENoProfile, 130, "attribute");
        parseContext.requireNotRemoved($1.loc, ECoreProfile, 420, "attribute");
        parseContext.requireNotRemoved($1.loc, EEsProfile, 300, "attribute");

        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "attribute");

        $$.init($1.loc);
        $$.qualifier.storage = EvqVaryingIn;
    }
    | VARYING {
        parseContext.checkDeprecated($1.loc, ENoProfile, 130, "varying");
        parseContext.checkDeprecated($1.loc, ECoreProfile, 130, "varying");
        parseContext.requireNotRemoved($1.loc, ECoreProfile, 420, "varying");
        parseContext.requireNotRemoved($1.loc, EEsProfile, 300, "varying");

        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "varying");

        $$.init($1.loc);
        if (parseContext.language == EShLangVertex)
            $$.qualifier.storage = EvqVaryingOut;
        else
            $$.qualifier.storage = EvqVaryingIn;
    }
    | INOUT {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "out");
        $$.init($1.loc);
        $$.qualifier.storage = EvqInOut;
    }
    | IN {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "in");
        $$.init($1.loc);
        $$.qualifier.storage = EvqIn;
    }
    | OUT {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "out");
        $$.init($1.loc);
        $$.qualifier.storage = EvqOut;
    }
    | CENTROID {
        parseContext.profileRequires($1.loc, ENoProfile, 120, 0, "centroid");
        parseContext.profileRequires($1.loc, EEsProfile, 300, 0, "centroid");
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "centroid");
        $$.init($1.loc);
        $$.qualifier.centroid = true;
    }
    | PATCH {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "patch");
        $$.init($1.loc);
        $$.qualifier.patch = true;
    }
    | SAMPLE {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "sample");
        $$.init($1.loc);
        $$.qualifier.sample = true;
    }
    | UNIFORM {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "uniform");
        $$.init($1.loc);
        $$.qualifier.storage = EvqUniform;
    }
    | BUFFER {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "buffer");
        $$.init($1.loc);
        $$.qualifier.storage = EvqUniform; // TODO: 4.0 functionality: implement BUFFER
    }
    | SHARED {
        parseContext.requireProfile($1.loc, static_cast<EProfileMask>(~EEsProfileMask), "shared");
        parseContext.profileRequires($1.loc, ECoreProfile, 430, 0, "shared");
        parseContext.requireStage($1.loc, EShLangComputeMask, "shared");
        $$.init($1.loc);
        $$.qualifier.shared = true;
    }
    | COHERENT {
        $$.init($1.loc);
        $$.qualifier.coherent = true;
    }
    | VOLATILE {
        $$.init($1.loc);
        $$.qualifier.volatil = true;
    }
    | RESTRICT {
        $$.init($1.loc);
        $$.qualifier.restrict = true;
    }
    | READONLY {
        $$.init($1.loc);
        $$.qualifier.readonly = true;
    }
    | WRITEONLY {
        $$.init($1.loc);
        $$.qualifier.writeonly = true;
    }
    | SUBROUTINE {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "subroutine");
        $$.init($1.loc);
        $$.qualifier.storage = EvqUniform;
    }
    | SUBROUTINE LEFT_PAREN type_name_list RIGHT_PAREN {
        parseContext.globalCheck($1.loc, parseContext.symbolTable.atGlobalLevel(), "subroutine");
        $$.init($1.loc);
        $$.qualifier.storage = EvqUniform;
        // TODO: 4.0 semantics: subroutines
        // 1) make sure each identifier is a type declared earlier with SUBROUTINE
        // 2) save all of the identifiers for future comparison with the declared function
    }
    ;

type_name_list
    : TYPE_NAME {
        // TODO: 4.0 functionality: subroutine type to list
    }
    | type_name_list COMMA TYPE_NAME {
    }
    ;

type_specifier
    : type_specifier_nonarray {
        $$ = $1;
        $$.qualifier.precision = parseContext.getDefaultPrecision($$);
    }
    | type_specifier_nonarray array_specifier {        
        parseContext.arrayDimCheck($2.loc, $2.arraySizes, 0);
        $$ = $1;
        $$.qualifier.precision = parseContext.getDefaultPrecision($$);
        $$.arraySizes = $2.arraySizes;
    }
    ;

array_specifier
    : LEFT_BRACKET RIGHT_BRACKET {
        $$.loc = $1.loc;
        $$.arraySizes = NewPoolTArraySizes();
        $$.arraySizes->setSize(0);
    }
    | LEFT_BRACKET constant_expression RIGHT_BRACKET {
        $$.loc = $1.loc;
        $$.arraySizes = NewPoolTArraySizes();

        int size;
        parseContext.arraySizeCheck($2->getLoc(), $2, size);
        $$.arraySizes->setSize(size);
    }
    | array_specifier LEFT_BRACKET RIGHT_BRACKET {
        $$ = $1;
        $$.arraySizes->setSize(0);
    }
    | array_specifier LEFT_BRACKET constant_expression RIGHT_BRACKET {
        $$ = $1;

        int size;
        parseContext.arraySizeCheck($3->getLoc(), $3, size);
        $$.arraySizes->setSize(size);
    }
    ;

type_specifier_nonarray
    : VOID {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtVoid;
    }
    | FLOAT {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
    }
    | DOUBLE {
        parseContext.doubleCheck($1.loc, "double");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
    }
    | INT {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtInt;
    }
    | UINT {
        parseContext.fullIntegerCheck($1.loc, "unsigned integer");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtUint;
    }
    | BOOL {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtBool;
    }
    | VEC2 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setVector(2);
    }
    | VEC3 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setVector(3);
    }
    | VEC4 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setVector(4);
    }
    | DVEC2 {
        parseContext.doubleCheck($1.loc, "double vector");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setVector(2);
    }
    | DVEC3 {
        parseContext.doubleCheck($1.loc, "double vector");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setVector(3);
    }
    | DVEC4 {
        parseContext.doubleCheck($1.loc, "double vector");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setVector(4);
    }
    | BVEC2 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtBool;
        $$.setVector(2);
    }
    | BVEC3 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtBool;
        $$.setVector(3);
    }
    | BVEC4 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtBool;
        $$.setVector(4);
    }
    | IVEC2 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtInt;
        $$.setVector(2);
    }
    | IVEC3 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtInt;
        $$.setVector(3);
    }
    | IVEC4 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtInt;
        $$.setVector(4);
    }
    | UVEC2 {
        parseContext.fullIntegerCheck($1.loc, "unsigned integer vector");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtUint;
        $$.setVector(2);
    }
    | UVEC3 {
        parseContext.fullIntegerCheck($1.loc, "unsigned integer vector");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtUint;
        $$.setVector(3);
    }
    | UVEC4 {
        parseContext.fullIntegerCheck($1.loc, "unsigned integer vector");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtUint;
        $$.setVector(4);
    }
    | MAT2 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(2, 2);
    }
    | MAT3 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(3, 3);
    }
    | MAT4 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(4, 4);
    }
    | MAT2X2 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(2, 2);
    }
    | MAT2X3 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(2, 3);
    }
    | MAT2X4 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(2, 4);
    }
    | MAT3X2 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(3, 2);
    }
    | MAT3X3 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(3, 3);
    }
    | MAT3X4 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(3, 4);
    }
    | MAT4X2 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(4, 2);
    }
    | MAT4X3 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(4, 3);
    }
    | MAT4X4 {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtFloat;
        $$.setMatrix(4, 4);
    }
    | DMAT2 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(2, 2);
    }
    | DMAT3 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(3, 3);
    }
    | DMAT4 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(4, 4);
    }
    | DMAT2X2 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(2, 2);
    }
    | DMAT2X3 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(2, 3);
    }
    | DMAT2X4 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(2, 4);
    }
    | DMAT3X2 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(3, 2);
    }
    | DMAT3X3 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(3, 3);
    }
    | DMAT3X4 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(3, 4);
    }
    | DMAT4X2 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(4, 2);
    }
    | DMAT4X3 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(4, 3);
    }
    | DMAT4X4 {
        parseContext.doubleCheck($1.loc, "double matrix");
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtDouble;
        $$.setMatrix(4, 4);
    }
    | ATOMIC_UINT {
        // TODO: 4.2 functionality: add type
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtInt;
    }
    | SAMPLER1D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd1D);
    }
    | SAMPLER2D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd2D);
    }
    | SAMPLER3D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd3D);
    }
    | SAMPLERCUBE {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, EsdCube);
    }
    | SAMPLER1DSHADOW {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd1D, false, true);
    }
    | SAMPLER2DSHADOW {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd2D, false, true);
    }
    | SAMPLERCUBESHADOW {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, EsdCube, false, true);
    }
    | SAMPLER1DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd1D, true);
    }
    | SAMPLER2DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd2D, true);
    }
    | SAMPLER1DARRAYSHADOW {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd1D, true, true);
    }
    | SAMPLER2DARRAYSHADOW {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd2D, true, true);
    }
    | SAMPLERCUBEARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, EsdCube, true);
    }
    | SAMPLERCUBEARRAYSHADOW {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, EsdCube, true, true);
    }
    | ISAMPLER1D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, Esd1D);
    }
    | ISAMPLER2D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, Esd2D);
    }
    | ISAMPLER3D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, Esd3D);
    }
    | ISAMPLERCUBE {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, EsdCube);
    }
    | ISAMPLER1DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, Esd1D, true);
    }
    | ISAMPLER2DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, Esd2D, true);
    }
    | ISAMPLERCUBEARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, Esd3D, true);
    }
    | USAMPLER1D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, Esd1D);
    }
    | USAMPLER2D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, Esd2D);
    }
    | USAMPLER3D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, Esd3D);
    }
    | USAMPLERCUBE {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, EsdCube);
    }
    | USAMPLER1DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, Esd1D, true);
    }
    | USAMPLER2DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, Esd2D, true);
    }
    | USAMPLERCUBEARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, EsdCube, true);
    }
    | SAMPLER2DRECT {
        parseContext.profileRequires($1.loc, ENoProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, EsdRect);
    }
    | SAMPLER2DRECTSHADOW {
        parseContext.profileRequires($1.loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, EsdRect, false, true);
    }
    | ISAMPLER2DRECT {
        parseContext.profileRequires($1.loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, EsdRect);
    }
    | USAMPLER2DRECT {
        parseContext.profileRequires($1.loc, ECoreProfile, 140, "GL_ARB_texture_rectangle", "rectangle texture");

        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, EsdRect);
    }
    | SAMPLERBUFFER {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, EsdBuffer);
    }
    | ISAMPLERBUFFER {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, EsdBuffer);
    }
    | USAMPLERBUFFER {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, EsdBuffer);
    }
    | SAMPLER2DMS {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd2D, false, false, true);
    }
    | ISAMPLER2DMS {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, Esd2D, false, false, true);
    }
    | USAMPLER2DMS {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, Esd2D, false, false, true);
    }
    | SAMPLER2DMSARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtFloat, Esd2D, true, false, true);
    }
    | ISAMPLER2DMSARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtInt, Esd2D, true, false, true);
    }
    | USAMPLER2DMSARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.set(EbtUint, Esd2D, true, false, true);
    }
    | IMAGE1D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, Esd1D);
    }
    | IIMAGE1D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, Esd1D);
    }
    | UIMAGE1D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, Esd1D);
    }
    | IMAGE2D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, Esd2D);
    }
    | IIMAGE2D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, Esd2D);
    }
    | UIMAGE2D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, Esd2D);
    }
    | IMAGE3D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, Esd3D);
    }
    | IIMAGE3D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, Esd3D);
    }
    | UIMAGE3D {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, Esd3D);
    }
    | IMAGE2DRECT {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, EsdRect);
    }
    | IIMAGE2DRECT {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, EsdRect);
    }
    | UIMAGE2DRECT {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, EsdRect);
    }
    | IMAGECUBE {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, EsdCube);
    }
    | IIMAGECUBE {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, EsdCube);
    }
    | UIMAGECUBE {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, EsdCube);
    }
    | IMAGEBUFFER {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, EsdBuffer);
    }
    | IIMAGEBUFFER {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, EsdBuffer);
    }
    | UIMAGEBUFFER {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, EsdBuffer);
    }
    | IMAGE1DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, Esd1D, true);
    }
    | IIMAGE1DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, Esd1D, true);
    }
    | UIMAGE1DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, Esd1D, true);
    }
    | IMAGE2DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, Esd2D, true);
    }
    | IIMAGE2DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, Esd2D, true);
    }
    | UIMAGE2DARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, Esd2D, true);
    }
    | IMAGECUBEARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, EsdCube, true);
    }
    | IIMAGECUBEARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, EsdCube, true);
    }
    | UIMAGECUBEARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, EsdCube, true);
    }
    | IMAGE2DMS {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, Esd2D, false, false, true);
    }
    | IIMAGE2DMS {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, Esd2D, false, false, true);
    }
    | UIMAGE2DMS {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, Esd2D, false, false, true);
    }
    | IMAGE2DMSARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtFloat, Esd2D, true, false, true);
    }
    | IIMAGE2DMSARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtInt, Esd2D, true, false, true);
    }
    | UIMAGE2DMSARRAY {
        $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
        $$.basicType = EbtSampler;
        $$.sampler.setImage(EbtUint, Esd2D, true, false, true);
    }
    | struct_specifier {
        $$ = $1;
        $$.qualifier.storage = parseContext.symbolTable.atGlobalLevel() ? EvqGlobal : EvqTemporary;
    }
    | TYPE_NAME {
        //
        // This is for user defined type names.  The lexical phase looked up the
        // type.
        //
        if (const TVariable* variable = ($1.symbol)->getAsVariable()) {
            const TType& structure = variable->getType();
            $$.init($1.loc, parseContext.symbolTable.atGlobalLevel());
            $$.basicType = EbtStruct;
            $$.userDef = &structure;
        } else
            parseContext.error($1.loc, "expected type name", $1.string->c_str(), "");
    }
    ;

precision_qualifier
    : HIGH_PRECISION {
        parseContext.profileRequires($1.loc, ENoProfile, 130, 0, "highp precision qualifier");
        $$.init($1.loc);
        if (parseContext.profile == EEsProfile)
		    $$.qualifier.precision = EpqHigh;
    }
    | MEDIUM_PRECISION {
        parseContext.profileRequires($1.loc, ENoProfile, 130, 0, "mediump precision qualifier");
        $$.init($1.loc);
        if (parseContext.profile == EEsProfile)
	    	$$.qualifier.precision = EpqMedium;
    }
    | LOW_PRECISION {
        parseContext.profileRequires($1.loc, ENoProfile, 130, 0, "lowp precision qualifier");
        $$.init($1.loc);
        if (parseContext.profile == EEsProfile)
    		$$.qualifier.precision = EpqLow;
    }
    ;

struct_specifier
    : STRUCT IDENTIFIER LEFT_BRACE { parseContext.nestedStructCheck($1.loc); } struct_declaration_list RIGHT_BRACE {
        TType* structure = new TType($5, *$2.string);
        TVariable* userTypeDef = new TVariable($2.string, *structure, true);
        if (! parseContext.symbolTable.insert(*userTypeDef))
            parseContext.error($2.loc, "redefinition", $2.string->c_str(), "struct");
        $$.init($1.loc);
        $$.basicType = EbtStruct;
        $$.userDef = structure;
        --parseContext.structNestingLevel;
    }
    | STRUCT LEFT_BRACE { parseContext.nestedStructCheck($1.loc); } struct_declaration_list RIGHT_BRACE {
        TType* structure = new TType($4, TString(""));
        $$.init($1.loc);
        $$.basicType = EbtStruct;
        $$.userDef = structure;
        --parseContext.structNestingLevel;
    }
    ;

struct_declaration_list
    : struct_declaration {
        $$ = $1;
    }
    | struct_declaration_list struct_declaration {
        $$ = $1;
        for (unsigned int i = 0; i < $2->size(); ++i) {
            for (unsigned int j = 0; j < $$->size(); ++j) {
                if ((*$$)[j].type->getFieldName() == (*$2)[i].type->getFieldName())
                    parseContext.error((*$2)[i].loc, "duplicate member name:", "", (*$2)[i].type->getFieldName().c_str());
            }
            $$->push_back((*$2)[i]);
        }
    }
    ;

struct_declaration
    : type_specifier struct_declarator_list SEMICOLON {
        if ($1.arraySizes) {
            parseContext.profileRequires($1.loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires($1.loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck($1.loc, $1.arraySizes->getSize());
        }

        $$ = $2;

        parseContext.voidErrorCheck($1.loc, (*$2)[0].type->getFieldName(), $1.basicType);
        parseContext.precisionQualifierCheck($1.loc, $1);

        for (unsigned int i = 0; i < $$->size(); ++i) {
            parseContext.arrayDimCheck($1.loc, (*$$)[i].type, $1.arraySizes);
            (*$$)[i].type->mergeType($1);
        }
    }
    | type_qualifier type_specifier struct_declarator_list SEMICOLON {
        if ($2.arraySizes) {
            parseContext.profileRequires($2.loc, ENoProfile, 120, "GL_3DL_array_objects", "arrayed type");
            parseContext.profileRequires($2.loc, EEsProfile, 300, 0, "arrayed type");
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck($2.loc, $2.arraySizes->getSize());
        }

        $$ = $3;

        parseContext.voidErrorCheck($2.loc, (*$3)[0].type->getFieldName(), $2.basicType);
        parseContext.mergeQualifiers($2.loc, $2.qualifier, $1.qualifier, true);
        parseContext.precisionQualifierCheck($2.loc, $2);

        for (unsigned int i = 0; i < $$->size(); ++i) {
            parseContext.arrayDimCheck($1.loc, (*$$)[i].type, $2.arraySizes);
            (*$$)[i].type->mergeType($2);
        }
    }
    ;

struct_declarator_list
    : struct_declarator {
        $$ = NewPoolTTypeList();
        $$->push_back($1);
    }
    | struct_declarator_list COMMA struct_declarator {
        $$->push_back($3);
    }
    ;

struct_declarator
    : IDENTIFIER {
        $$.type = new TType(EbtVoid);
        $$.loc = $1.loc;
        $$.type->setFieldName(*$1.string);
    }
    | IDENTIFIER array_specifier {        
        if (parseContext.profile == EEsProfile)
            parseContext.arraySizeRequiredCheck($2.loc, $2.arraySizes->getSize());
        parseContext.arrayDimCheck($1.loc, $2.arraySizes, 0);

        $$.type = new TType(EbtVoid);
        $$.loc = $1.loc;
        $$.type->setFieldName(*$1.string);
        $$.type->setArraySizes($2.arraySizes);
    }
    ;

initializer
    : assignment_expression {
        $$ = $1;
    }
    | LEFT_BRACE initializer_list RIGHT_BRACE {
        $$ = $2;
    }
    | LEFT_BRACE initializer_list COMMA RIGHT_BRACE {
        $$ = $2;
    }
    ;

initializer_list
    : initializer {
        $$ = $1;
    }
    | initializer_list COMMA initializer {
        // TODO: 4.2 functionality: implement the initializer list
        $$ = $3;
    }
    ;

declaration_statement
    : declaration { $$ = $1; }
    ;

statement
    : compound_statement  { $$ = $1; }
    | simple_statement    { $$ = $1; }
    ;

// Grammar Note:  labeled statements for switch statements only; 'goto' is not supported.

simple_statement
    : declaration_statement { $$ = $1; }
    | expression_statement  { $$ = $1; }
    | selection_statement   { $$ = $1; }
    | switch_statement      { $$ = $1; }
    | case_label            { $$ = $1; }
    | iteration_statement   { $$ = $1; }
    | jump_statement        { $$ = $1; }
    ;

compound_statement
    : LEFT_BRACE RIGHT_BRACE { $$ = 0; }
    | LEFT_BRACE { parseContext.symbolTable.push(); }
      statement_list { parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]); }
      RIGHT_BRACE {
        if ($3 != 0)
            $3->setOperator(EOpSequence);
        $$ = $3;
    }
    ;

statement_no_new_scope
    : compound_statement_no_new_scope { $$ = $1; }
    | simple_statement                { $$ = $1; }
    ;

statement_scoped
    : compound_statement  { $$ = $1; }
    | { parseContext.symbolTable.push(); } simple_statement { parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]); } { $$ = $2; }

compound_statement_no_new_scope
    // Statement that doesn't create a new scope, for selection_statement, iteration_statement
    : LEFT_BRACE RIGHT_BRACE {
        $$ = 0;
    }
    | LEFT_BRACE statement_list RIGHT_BRACE {
        if ($2)
            $2->setOperator(EOpSequence);
        $$ = $2;
    }
    ;

statement_list
    : statement {
        $$ = parseContext.intermediate.makeAggregate($1);
        if ($1 && $1->getAsBranchNode() && ($1->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            $1->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence(0, $1);
            $$ = 0;  // start a fresh subsequence for what's after this case
        }
    }
    | statement_list statement {
        if ($2 && $2->getAsBranchNode() && ($2->getAsBranchNode()->getFlowOp() == EOpCase || 
                                            $2->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence($1, $2);
            $$ = 0;  // start a fresh subsequence for what's after this case
        } else
            $$ = parseContext.intermediate.growAggregate($1, $2);
    }
    ;

expression_statement
    : SEMICOLON  { $$ = 0; }
    | expression SEMICOLON  { $$ = static_cast<TIntermNode*>($1); }
    ;

selection_statement
    : IF LEFT_PAREN expression RIGHT_PAREN selection_rest_statement {
        parseContext.boolCheck($1.loc, $3);
        $$ = parseContext.intermediate.addSelection($3, $5, $1.loc);
    }
    ;

selection_rest_statement
    : statement_scoped ELSE statement_scoped {
        $$.node1 = $1;
        $$.node2 = $3;
    }
    | statement_scoped {
        $$.node1 = $1;
        $$.node2 = 0;
    }
    ;

condition
    // In 1996 c++ draft, conditions can include single declarations
    : expression {
        $$ = $1;
        parseContext.boolCheck($1->getLoc(), $1);
    }
    | fully_specified_type IDENTIFIER EQUAL initializer {
        parseContext.boolCheck($2.loc, $1);

        TType type($1);
        TIntermNode* initNode = parseContext.declareVariable($2.loc, *$2.string, $1, 0, $4);
        if (initNode)
            $$ = initNode->getAsTyped();
        else
            $$ = 0;
    }
    ;

switch_statement
    : SWITCH LEFT_PAREN expression RIGHT_PAREN {
        // start new switch sequence on the switch stack
        parseContext.switchSequenceStack.push_back(new TIntermSequence);
    } 
    LEFT_BRACE switch_statement_list RIGHT_BRACE {
        $$ = parseContext.addSwitch($1.loc, $3, $7);
        delete parseContext.switchSequenceStack.back();
        parseContext.switchSequenceStack.pop_back();
    }
    ;

switch_statement_list
    : /* nothing */ {
        $$ = 0;
    }
    | statement_list {
        $$ = $1;
    }
    ;

case_label
    : CASE expression COLON {
        parseContext.constCheck($2, "case");
        parseContext.integerCheck($2, "case");
        $$ = parseContext.intermediate.addBranch(EOpCase, $2, $1.loc);
    }
    | DEFAULT COLON {
        $$ = parseContext.intermediate.addBranch(EOpDefault, $1.loc);
    }
    ;

iteration_statement
    : WHILE LEFT_PAREN {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
    }
      condition RIGHT_PAREN statement_no_new_scope {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        $$ = parseContext.intermediate.addLoop($6, $4, 0, true, $1.loc);
        --parseContext.loopNestingLevel;
    }
    | DO { ++parseContext.loopNestingLevel; } statement WHILE LEFT_PAREN expression RIGHT_PAREN SEMICOLON {
        parseContext.boolCheck($8.loc, $6);

        $$ = parseContext.intermediate.addLoop($3, $6, 0, false, $4.loc);
        --parseContext.loopNestingLevel;
    }
    | FOR LEFT_PAREN {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
    }
      for_init_statement for_rest_statement RIGHT_PAREN statement_no_new_scope {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        $$ = parseContext.intermediate.makeAggregate($4, $2.loc);
        $$ = parseContext.intermediate.growAggregate(
                $$,
                parseContext.intermediate.addLoop($7, reinterpret_cast<TIntermTyped*>($5.node1), reinterpret_cast<TIntermTyped*>($5.node2), true, $1.loc),
                $1.loc);
        $$->getAsAggregate()->setOperator(EOpSequence);
        --parseContext.loopNestingLevel;
    }
    ;

for_init_statement
    : expression_statement {
        $$ = $1;
    }
    | declaration_statement {
        $$ = $1;
    }
    ;

conditionopt
    : condition {
        $$ = $1;
    }
    | /* May be null */ {
        $$ = 0;
    }
    ;

for_rest_statement
    : conditionopt SEMICOLON {
        $$.node1 = $1;
        $$.node2 = 0;
    }
    | conditionopt SEMICOLON expression  {
        $$.node1 = $1;
        $$.node2 = $3;
    }
    ;

jump_statement
    : CONTINUE SEMICOLON {
        if (parseContext.loopNestingLevel <= 0)
            parseContext.error($1.loc, "continue statement only allowed in loops", "", "");
        $$ = parseContext.intermediate.addBranch(EOpContinue, $1.loc);
    }
    | BREAK SEMICOLON {
        if (parseContext.loopNestingLevel + parseContext.switchSequenceStack.size() <= 0)
            parseContext.error($1.loc, "break statement only allowed in switch and loops", "", "");
        $$ = parseContext.intermediate.addBranch(EOpBreak, $1.loc);
    }
    | RETURN SEMICOLON {
        $$ = parseContext.intermediate.addBranch(EOpReturn, $1.loc);
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid)
            parseContext.error($1.loc, "non-void function must return a value", "return", "");
    }
    | RETURN expression SEMICOLON {
        $$ = parseContext.intermediate.addBranch(EOpReturn, $2, $1.loc);
        parseContext.functionReturnsValue = true;
        if (parseContext.currentFunctionType->getBasicType() == EbtVoid)
            parseContext.error($1.loc, "void function cannot return a value", "return", "");
        else if (*(parseContext.currentFunctionType) != $2->getType())
            parseContext.error($1.loc, "function return is not matching type:", "return", "");
    }
    | DISCARD SEMICOLON {
        parseContext.requireStage($1.loc, EShLangFragmentMask, "discard");
        $$ = parseContext.intermediate.addBranch(EOpKill, $1.loc);
    }
    ;

// Grammar Note:  No 'goto'.  Gotos are not supported.

translation_unit
    : external_declaration {
        $$ = $1;
        parseContext.intermediate.setTreeRoot($$);
    }
    | translation_unit external_declaration {
        $$ = parseContext.intermediate.growAggregate($1, $2);
        parseContext.intermediate.setTreeRoot($$);
    }
    ;

external_declaration
    : function_definition {
        $$ = $1;
    }
    | declaration {
        $$ = $1;
    }
    ;

function_definition
    : function_prototype {
        $1.intermAggregate = parseContext.handleFunctionPrototype($1.loc, *$1.function);
    }
    compound_statement_no_new_scope {
        //   May be best done as post process phase on intermediate code
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid && ! parseContext.functionReturnsValue)
            parseContext.error($1.loc, "function does not return a value:", "", $1.function->getName().c_str());
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        $$ = parseContext.intermediate.growAggregate($1.intermAggregate, $3);
        parseContext.intermediate.setAggregateOperator($$, EOpFunction, $1.function->getReturnType(), $1.loc);
        $$->getAsAggregate()->setName($1.function->getMangledName().c_str());

        // store the pragma information for debug and optimize and other vendor specific
        // information. This information can be queried from the parse tree
        $$->getAsAggregate()->setOptimize(parseContext.contextPragma.optimize);
        $$->getAsAggregate()->setDebug(parseContext.contextPragma.debug);
        $$->getAsAggregate()->addToPragmaTable(parseContext.contextPragma.pragmaTable);
    }
    ;

%%