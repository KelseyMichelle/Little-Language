#include "lex.h"
#include "tokenType.h"
#include <string>
#include<iostream>
using namespace std;


Lexer::Lexer(std::string input)
{
	this->source = input + "\n";
	this->curChar = "";
	this->curPos = -1;
	this->nextChar();
}
std::string Lexer::peek()
{
	//process the lookahead character
	if (this->curPos + 1 >= this->source.length())
	{
		return "\0";
	}
	return this->source.substr(curPos+1,1);
}

void Lexer::nextChar()
{
	//iterate to next character
	//cout<<this->curChar;
	this->curPos += 1;
	if (this->curPos >= this->source.length())
	{
		this->curChar = "\0";
	}
	else
	{
		this->curChar = this->source[this->curPos];
	}
}

void Lexer::abort()
{
}

void Lexer::skipWhitespace()
{
}

void Lexer::skipComment()
{
}

Token Lexer::getToken()
{
	Token newToken;
	if (this->curChar == "+")
	{
		newToken = Token(this->curChar, TokenType::PLUS);
	}
	else if (this->curChar == "-")
	{
		newToken = Token(this->curChar, TokenType::MINUS);
	}
	else if (this->curChar == "*")
	{
		newToken = Token(this->curChar, TokenType::ASTERISK);
	}
	else if (this->curChar == "/")
	{
		newToken = Token(this->curChar, TokenType::SLASH);
	}
	else if (this->curChar == "\n")
	{
		newToken = Token(this->curChar, TokenType::NEWLINE);
	}
	else if (this->curChar == "\0")
	{
		newToken = Token(this->curChar, TokenType::EOFS);
	}
	this->nextChar();
	return newToken;
}
std::string Lexer::getCurChar()
{
	return this->curChar;
}