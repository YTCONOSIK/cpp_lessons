#include <iostream>
#include <Windows.h>

int* mda() {
	int* ptrA = new int;
	return ptrA;
}
void PushArray(int *&arr, int &size) {
	int *temp = new int[size];

	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	size += 1;
	delete[]arr;
	arr = new int[size];
	for (size_t i = 0; i < size - 1; i++)
	{
		arr[i] = temp[i];
	}
	delete[] temp;
	arr[size - 1] = 100;
}
void PushArray2(int*& arr, int& size) {
	size++;
	int* temp = new int[size];
	for (int i = 0; i < size - 1;i++) {
		temp[i] = arr[i];
	}
	temp[size - 1] = 100;
	std::swap(arr, temp);

	delete[] temp;
}

void recr(int *&ptr, int size) {
	if (ptr != nullptr)
	{
		delete[] ptr;
	}
	ptr = new int[size];
}
void init(int *&ptrfd, int size) {
	for (size_t i = 0; i < size; i++)
	{
		*ptrfd = 1;
	}
}

void DeleteArr(int*& ptr) {
	if (ptr == nullptr)
	{
		return;
	}
	delete[] ptr;
	ptr = nullptr;
}
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	/*
	int size=0;
	std::cin >> size;
	int* arr = new int[size];
	arr[0] = 10;
	delete[] arr;
	arr = nullptr;*/

	/*int row = 3, col = 4;
	int** ptr1 = new int* [row];
	for (int i = 0; i < row; i++) {
		ptr1[i] = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		delete[] ptr1[i];
	}
	delete[] ptr1;*/
	
	/*int side = 2, row = 4, col1 = 4, col2 = 3;
	int*** seva = new int**[side];
	for (size_t i = 0; i < side; i++)
	{
		seva[i] = new int* [row];
	}
	for (size_t i = 0; i < row; i++)
	{
		seva[0][i] = new int[col1];
	}
	seva[1][0] = new int[2];
	for (size_t i = 1; i < row; i++)
	{
		seva[1][i] = new int[col2];
	}


	for (int i = 0; i < side; i++)
	{
		for (size_t j = 0; j <col1 ; j++)
		{
			delete[] seva[i][j];
		}
		delete[] seva[i];
	}
	delete[] seva;*/

	int size = 5;
	int* ptr = nullptr;
	/*int* arr = new int[size] {5, 3, 7, 5, 4};
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	PushArray(arr, size);
	std::cout << "\n\n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
	delete[] arr;*/

	std::cout << "\n\n" << "Конец работы программы!!!!!!!!";

}