#include <iostream>
#include <Windows.h>
int main()
{
	srand(time(NULL));
	const int row = 4;
	const int col = 4;
	int sum = 0;
	int arr[row][col];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 11;
		}
			
	}
	//заполнение ^^^
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			sum += arr[i][j];
			std::cout << arr[i][j] << " ";
		}
		std::cout << "||" << sum << "\n";
		sum = 0;
	}
	

	// Cумма чисел в строке
/*	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}*/
	//вывод ^^^
}
/*	
}
/*
1 0 3 5 6 
1 3 5 6 -1
заменить 0  следующим не отрицательным число и добавить к счетчику конца +1 
пока не кончится массив
потом все псоледние цифры заменить на -1 в количестве счетчика смещения
*/

/*	srand(time(NULL));
	int arr[5]{};
	int arrN[5]{};
	for (size_t i = 0; i < 5; i++)
	{
		arr[i] = rand() % 6;
	}
	arr[1] = 0; 
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";
	}

	int arrminus = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (arr[i] != 0) {
			arr[arrminus] = arr[i];
			arrminus++;
		}
	}
	std::cout << std::endl;
	system("pause");
	std::cout << std::endl;
	for (size_t i = 0; i < 6; i++)
	{

	}
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << arrN[i] << " ";
	}
	*/
