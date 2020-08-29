#include "lex.h"
#include "token.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::string inp = "+-*/\n";
	Lexer lexy(inp);
	while (!(lexy.peek() == "\0"))
	{
		cout << lexy.getToken().getKind() << endl;
	}
	return 0;
}
