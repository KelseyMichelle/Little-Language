#pragma once
#include<string>
#include "token.h"
//header file for lexer
#ifndef lexer
#define lexer

class Lexer
{
protected:
	std::string source = "";
	std::string curChar = "";
	int curPos = -1;
public:
	std::string peek();
	Lexer(std::string input);
	void nextChar();
	void abort();
	void skipWhitespace();
	void skipComment();
	Token getToken();
	std::string getCurChar();
};

#endif