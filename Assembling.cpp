// Assembling.cpp: определяет точку входа для приложения.
//

#include "Assembling.h"
#include "WriteInConsole.cpp"
#include <clocale>
#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	#pragma region variables
	int maxCountMatchesGame;
	int maxCountMatchesPlayer;
	int countPlayer;

	#pragma endregion


	WriteInConsole print;
	print.printConsole("Игра в спички: ");
	std::cout << std::endl;
	print.printConsole("Задайте максимальное количество спичек: ");
	std::cin >> maxCountMatchesGame;
	print.printConsole("Введите количество игроков: ");
	std::cin >> countPlayer;
	print.printConsole("Задайте максимальное число, которое может взять игрок за один ход: ");
	std::cin >> maxCountMatchesPlayer;
	
	

	
	return 0;
}
