#include "lex.h"
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
	return this->source.substr(;
}

void Lexer::nextChar()
{
	//iterate to next character
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

void Lexer::getToken()
{
}
