#pragma once
#include<string>

//header file for lexer
#ifndef lexer
#define lexer

class Lexer
{
protected:
	std::string source = "";
	std::string curChar = "";
	int curPos = -1;
	std::string peek();
public:
	Lexer(std::string input);
	void nextChar();
	void abort();
	void skipWhitespace();
	void skipComment();
	void getToken();
};

#endif