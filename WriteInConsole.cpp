#include <string>
#include <iostream>


class WriteInConsole
{
public:
	WriteInConsole() {};
	~WriteInConsole() {};

	void printConsole(std::string text)
	{
		std::cout << text;
	}
};