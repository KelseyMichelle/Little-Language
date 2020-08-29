#pragma once
#include "tokenType.h"
#include <string>

#ifndef token
#define token

class Token
{
public:
	Token(std::string tokenText, TokenType tokenKind);
	Token();
	TokenType getKind();
	std::string getText();
private:
	std::string tokenText;
	TokenType tokenKind;
};
#endif