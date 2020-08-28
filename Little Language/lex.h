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
public:
	std::string peek();
	Lexer(std::string input);
	void nextChar();
	void abort();
	void skipWhitespace();
	void skipComment();
	void getToken();
	std::string getCurChar();
};

#endif