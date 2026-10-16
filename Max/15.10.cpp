#include <iostream>
#include <Windows.h>
#include <string>

void Plus(int *num) {
	*num += 10;
}
void MySwap(int *left, int *right) {
	int temp = *left; *left = *right; *right = temp;
}
void MySwap(int &left, int &right) {
	int temp = left; left = right; right = temp;
}

void FillArray(int *arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 10;
	}
}
void PrintArray(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << *(arr + i) <<" ";
	}
}

int* lol() {
	int* car = new int;
	return car;
}
int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	const int size = 5;
	int arr[size];
	FillArray(arr, size);
	PrintArray(arr, size);
	int* fa = lol();
	int* car = new int;
	delete car;
	car = nullptr;

}