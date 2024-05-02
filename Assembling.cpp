// Assembling.cpp: определяет точку входа для приложения.
//

#include "Assembling.h"
#include <clocale>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Игра в спички: определенное количество спичек задается в начале игры. После этого каждый из игроков тянет от 1 до N спичек — проигрывает тот кто вытянул последнюю спичку." << endl;
	
	return 0;
}
