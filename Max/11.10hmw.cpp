#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));
	int n = 0;
	std::cout << "Выберите задачу 1-3:";
	std::cin >> n;
	if (n==1)
	{
		const int size = 10;
		int arr[size];
		int max_min = 0;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 100001;
		}
		for (size_t i = 0; i < size; i++)
		{
			if (max_min < arr[i]) {
				max_min = arr[i];
			}
		}
		std::cout << "Максимальное число: \n" << max_min << std::endl;
		for (size_t i = 0; i < size; i++)
		{
			if (max_min > arr[i]) {
				max_min = arr[i];
			}

		}
		std::cout << "Минимальное число: \n" << max_min;
	}
	else if (n == 2) {
		const int size = 10;
		int arr[size];
		int max_number = 0;
		int tot = 0;
		std::cout << "Введите максимальное число диапозона 0-";
		std::cin >> max_number;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % max_number;
		}
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] < max_number) {
				tot += arr[i];
			}
		}
		std::cout << "Сумма чисел в случайном массиве которые меньше введенного: " << tot;
	}
	else if (n == 3) {
		int profit[12];
		int start_fin, end_fin;
		int max_prof = 0;
		for (size_t i = 0; i < 12; i++)
		{
			std::cout << "Введите прибыль за " << i + 1 << "й месяц\n";
			std::cin >> profit[i];
		}
		std::cout << "Введите диапазон месяцев для поиска среди них самого прибыльного, в формате:\n номер 1го месяца  номер второго месяца \n(невключительно)\n";
			std::cin >> start_fin >> end_fin;
			for (size_t i = start_fin; i < end_fin; i++)
			{
				if (profit[i] > max_prof) {
					max_prof = profit[i];
				}
			}
			std::cout << max_prof;
	}
}