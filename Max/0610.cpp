#include <iostream>
#include <Windows.h>
void FillArr(int name[], int length);
void FillArr(double name[], int length);
void FillArr(char name[], int length);
void ShowArr(int name[], int length);
void ShowArr(double name[], int length);
void ShowArr(char name[], int length);

int sum(int one, int two ) {
	return one + two;
}
double sum(double one, double two) {
	return one + two;
}

void FillArr(int name[], int length)// int int
{
	for (size_t i = 0; i < length; i++)
	{
		name[i] = rand() % 10;
	}
}
void FillArr(double name[], int length)// int double
{
	for (size_t i = 0; i < length; i++)
	{
		name[i] = rand() % 10;
	}
}
void FillArr(char name[], int length)// char int
{
	for (size_t i = 0; i < length; i++)
	{
		name[i] = rand() % 32 + 192;
	}
}
void ShowArr(int name[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}
void ShowArr(double name[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}
void ShowArr(char name[], int length) {
	for (size_t i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}

template <typename T1>
T1 Template1(T1 one, T1 two)
{
	return one - two;
}

unsigned long long int Fac(int num) {
	if (num < 0) {
		return 0;
	}
	if (num == 0) {
		return 1;
	}
	return num * Fac(num - 1);
}

int mult(int num1, int num2) 
{
	if (num2== 0)
	{
		return 0;
	}
	return num1 + mult(num1, num2 - 1);
}
int divide(int num1, int num2) {
	if (num2 + divide(num1, num2 + num2) == num1) {
	}
	return num2 + divide(num1, num2 + num2) == num1;
}
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	std::cout << mult(3, 1232);
	std::cout<< divide(10, 2);
	
	
	
	
	
	
	/*const int size = 7;
	int arrInt[size];
	double arrDouble[size];
	char arrChar[size];

	FillArr(arrInt, size);
	ShowArr(arrInt, size);
	std::cout << std::endl;
	FillArr(arrDouble, size);
	ShowArr(arrDouble, size);
	std::cout << std::endl;
	FillArr(arrChar, size);
	ShowArr(arrChar, size);
	std::cout << std::endl;
	char A = 'Я';
	std::cout << A;
	std::cout << (int)A;*/
}
/*
10 / 5 
5 + 5 = 10
2 раза
12 / 3
3 + 3 + 3 + 3
4 раза




*/