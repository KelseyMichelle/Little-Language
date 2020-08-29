#include "token.h"
#include <string>

using namespace std;
Token::Token(string tokenText, TokenType tokenKind)
{
	this->tokenKind = tokenKind;
	this->tokenText = tokenText;
}
Token::Token()
{
	
}

TokenType Token::getKind()
{
	return this->tokenKind;
}

std::string Token::getText()
{
	return this->tokenText;
}