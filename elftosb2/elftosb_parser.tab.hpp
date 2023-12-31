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
     TOK_IDENT = 258,
     TOK_STRING_LITERAL = 259,
     TOK_INT_LITERAL = 260,
     TOK_SECTION_NAME = 261,
     TOK_SOURCE_NAME = 262,
     TOK_BLOB = 263,
     TOK_DOT_DOT = 264,
     TOK_AND = 265,
     TOK_OR = 266,
     TOK_GEQ = 267,
     TOK_LEQ = 268,
     TOK_EQ = 269,
     TOK_NEQ = 270,
     TOK_POWER = 271,
     TOK_LSHIFT = 272,
     TOK_RSHIFT = 273,
     TOK_INT_SIZE = 274,
     TOK_OPTIONS = 275,
     TOK_CONSTANTS = 276,
     TOK_SOURCES = 277,
     TOK_FILTERS = 278,
     TOK_SECTION = 279,
     TOK_EXTERN = 280,
     TOK_FROM = 281,
     TOK_RAW = 282,
     TOK_LOAD = 283,
     TOK_JUMP = 284,
     TOK_CALL = 285,
     TOK_MODE = 286,
     TOK_ERASE = 287,
     TOK_ALL = 288,
     TOK_IF = 289,
     TOK_ELSE = 290,
     TOK_DEFINED = 291,
     TOK_INFO = 292,
     TOK_WARNING = 293,
     TOK_ERROR = 294,
     TOK_SIZEOF = 295,
     TOK_DCD = 296,
     TOK_HAB = 297,
     TOK_IVT = 298,
     TOK_UNSECURE = 299,
     TOK_RESET = 300,
     TOK_JUMP_SP = 301,
     TOK_ENABLE = 302,
     TOK_KEYBLOB = 303,
     TOK_ENCRYPT = 304,
     TOK_KEYWRAP = 305,
     TOK_LOADH = 306,
     TOK_LOADS = 307,
     TOK_VERSION_CHECK = 308,
     TOK_SEC = 309,
     TOK_NSEC = 310,
     TOK_KEYSTORE_TO_NV = 311,
     TOK_KEYSTORE_FROM_NV = 312,
     UNARY_OP = 313
   };
#endif
/* Tokens.  */
#define TOK_IDENT 258
#define TOK_STRING_LITERAL 259
#define TOK_INT_LITERAL 260
#define TOK_SECTION_NAME 261
#define TOK_SOURCE_NAME 262
#define TOK_BLOB 263
#define TOK_DOT_DOT 264
#define TOK_AND 265
#define TOK_OR 266
#define TOK_GEQ 267
#define TOK_LEQ 268
#define TOK_EQ 269
#define TOK_NEQ 270
#define TOK_POWER 271
#define TOK_LSHIFT 272
#define TOK_RSHIFT 273
#define TOK_INT_SIZE 274
#define TOK_OPTIONS 275
#define TOK_CONSTANTS 276
#define TOK_SOURCES 277
#define TOK_FILTERS 278
#define TOK_SECTION 279
#define TOK_EXTERN 280
#define TOK_FROM 281
#define TOK_RAW 282
#define TOK_LOAD 283
#define TOK_JUMP 284
#define TOK_CALL 285
#define TOK_MODE 286
#define TOK_ERASE 287
#define TOK_ALL 288
#define TOK_IF 289
#define TOK_ELSE 290
#define TOK_DEFINED 291
#define TOK_INFO 292
#define TOK_WARNING 293
#define TOK_ERROR 294
#define TOK_SIZEOF 295
#define TOK_DCD 296
#define TOK_HAB 297
#define TOK_IVT 298
#define TOK_UNSECURE 299
#define TOK_RESET 300
#define TOK_JUMP_SP 301
#define TOK_ENABLE 302
#define TOK_KEYBLOB 303
#define TOK_ENCRYPT 304
#define TOK_KEYWRAP 305
#define TOK_LOADH 306
#define TOK_LOADS 307
#define TOK_VERSION_CHECK 308
#define TOK_SEC 309
#define TOK_NSEC 310
#define TOK_KEYSTORE_TO_NV 311
#define TOK_KEYSTORE_FROM_NV 312
#define UNARY_OP 313




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 62 "elftosb_parser.y"
{
	int m_num;
	elftosb::SizedIntegerValue * m_int;
	Blob * m_blob;
	std::string * m_str;
	elftosb::ASTNode * m_ast;	// must use full name here because this is put into *.tab.hpp
}
/* Line 1489 of yacc.c.  */
#line 173 "elftosb_parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


