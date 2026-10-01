#include <iostream>
#include <Windows.h>
/*
	Тип_возврата Имя_функции (аргументы_функции, ...)
	{
		Тело_Функции
	}
*/


void PrintArr(int name[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}
void RandArr(int name[], int length)
{
	for (size_t i = 0; i < length; i++)
	{
		name[i] = rand() % 100;
	}
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	const int size = 10;
	int arr[size]{};
	RandArr(arr, size);
	PrintArr(arr,size);
	
}
/*void PrintHello() {
	std::cout << "Hello\n";
}


void PrintNum(int number) {
	std::cout << number;
}

int multip(int f, int s) {
	int r = 0;
	r = f * s;
	return r;
}

int Sum(int f, int s) {
	int r = 0;
	r = f + s;
	return r;
}
int Minus(int f, int s) {
	int r = 0;
	r = f - s;
	return r;
}
double divide(double f, double s) {
	double r = 0;
	r = f / s;
	return r;
}
double MyPow(double f, double s) {
	double total = 0;
	for (size_t i = 1; i < s; i++)
	{
		double total = 0;
		total =total + f * f;
	}
	return(total);
}*/
/*char d = ' ';
	double f = 0;
	double s = 0;
	double r = 0;
	std::cout << "Введите действие: * | + | - | / | ^\n";
	std::cin >> d;
	if (d == '*' || d == '/' || d == '+' || d == '-' || d == '^') {
		std::cout << "Выбрано" << "(" << d << ")" << "\n Введите первое число:";
		std::cin >> f;
		std::cout << "Первое число:" << f << "\n Введите второе число: \n";
		std::cin >> s;
		//std::cout << "Итог:" << r;
		if (d == '*') {
			multip(f, s);
			std::cout << "Итог:" << multip(f, s);
		}
		else if (d == '/' && s != 0) {
			std::cout << "Итог:" << divide(f, s);
		}
		else if (d == '+') {
			std::cout << "Итог:" << Sum(f,s);
		}
		else if (d == '-') {
			std::cout << "Итог:" << Minus(f,s);
		}
		else if (d == '^') {
			std::cout << MyPow(f, s);
		}
		else {
			std::cout << "Ты что понаписал?";
		}
		return 0;
		std::pow(3, 5);
	}
	else
	{
		std::cout << "Ты что понаписал?";
		std::cerr << "\n Logging";
		std::clog;
	}*/