/*#include <iostream>
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

}*/
#include <iostream>
#include <vector>
#include <variant>

// Определяем рекурсивную структуру для элементов списка (C++17)
struct Element;
using List = std::vector<Element>;

struct Element {
	std::variant<int, List> value; // Элемент может быть числом или списком
};

// Предварительное объявление
List deep_reverse(const List& lst);

// Вспомогательная функция: index — текущая позиция, items — исходный список, result — аккумулятор
List iter(size_t index, const List& items, List result) {
	if (index == items.size()) {
		return result; // База: список кончился, возвращаем накопленный результат
	}

	const auto& head = items[index]; // car (текущий элемент)

	// Если текущий элемент — список, рекурсивно разворачиваем его, иначе оставляем
	Element processed_head;
	if (std::holds_alternative<List>(head.value)) {
		processed_head.value = deep_reverse(std::get<List>(head.value));
	}
	else {
		processed_head.value = head.value;
	}

	// Добавляем элемент в начало аккумулятора (это разворачивает порядок)
	result.insert(result.begin(), processed_head);

	// Шаг: переходим к следующему элементу (cdr)
	return iter(index + 1, items, result);
}

List deep_reverse(const List& lst) {
	// Запуск итерации с индексом 0 и пустым аккумулятором
	return iter(0, lst, {});
}