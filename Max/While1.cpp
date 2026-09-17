#include <iostream>
#include <Windows.h>
int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int t = 0;
	int p = 0;
	std::cout << "Введите номер задачи(1, 2)";
	std::cin >> t;
	if (t == 1){
		float n = 1;
		float tot = 0;
		while (n != 0) {
			std::cin >> n;
			tot = tot + n;
		}
		std::cout << tot - 1;

	}
	else if (t == 2)
	{
		do {
			std::cout << "Меню\n";
			std::cout << "1. Новая игра\n";
			std::cout << "2.Настройки\n";
			std::cout << "3.Выход\n";
			std::cout << "Введите число от 1 до 3\n";
			std::cin >> p;
		} while (p != 1 && p != 2 && p != 3);
		if (p == 1) { std::cout << "Выбрана новая игра";}
		else if (p == 2) { std::cout << "Выбраны настройки"; }
		else if (p == 3) { std::cout << "Выбран выход"; }
		else { std::cout << "Ты как тут оказался!?"; }
	}
	else { std::cout << "Ошибко, введите 1 или 2"; }
}