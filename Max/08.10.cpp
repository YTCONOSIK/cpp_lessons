#include <iostream>
#include <Windows.h>
#include <string>

float sum = 0;
int choose = 0;
int amount = 0;
float tot_sale = 0;
void fruit_cat();
void veg_cat();
void tea_cat();
float total_check();
float sale();
//Ассортимент
/*
Фруктовые: яблочный,апельсиновый,абрикосовый,грушевый.
овощные: томатный,луковый, огуречный
чаи: чесночный, петрушевый.
*/
float total_check(int plus_sum){
	sum += plus_sum;
	sum -= tot_sale;
	return sum;

}
float sales(int type, int product_price) {
	if (type == 1)
	{
		int sale = product_price * 3 / 100 * 5;
		tot_sale += sale;
		//3 литра петрушки
	}
	else if (type == 2)
	{
		if (total_check(0) >= 1000) {
			tot_sale += total_check(0) / 100 * 13;
		}
		//скидка 13% на чек от тысячи.
	}
	else if (type == 3) {
		tot_sale += product_price;
		//каждый 4й литр лукового сока бесплатно
	}
	else {
		return tot_sale;
	}
}
void main_menu(){
	system("cls");
	std::cout << "Выберите категорию: \n1.Фруктовые соки...\n2.Овощные соки...\n3.Чаи...\n4.Итоговый чек и примененные скидки(WIP)\n";
	std::cin >> choose;
	while (true) {
		if (choose == 1)
		{
			std::cout << "Вы в категории Фруктовых соков \n";
			fruit_cat();
			break;
		}
		else if (choose == 2)
		{
			std::cout << "Вы в категории Овощных соков \n";
			veg_cat();
			break;
		}
		else if (choose == 3)
		{
			std::cout << "Вы в Чаевной категории \n";
			tea_cat();
			break;
		}
		else if (choose == 4)
		{
			std::cout << std::endl << "Итоговый чек:" << total_check(0) << std::endl << "Итоговая скидка: " << tot_sale;
			return;
		}
		else{
			std::cout << "Неверный ввод. повторите попытку";
		}
	}
}
void fruit_cat() {
	system("cls");
	const int row = 4;
	const int col = 4;
	int plus_tot = 0;
	std::string prices[row][col] = {
		{"1.Яблочный 60р/литр"/*0й*/, "2.Апельсиновый 100р/литр", "3.Абрикосовый 70р/литр", "4.Грушевый 100р/литр"},
		{"60"/*0й*/,"100","70","100"}//НАДО ПЕРЕВЕСТИ В INT std::stoi
	};
	
	while (true) 
	{
		choose = 0;
		for (size_t i = 0; i < row; i++)
		{
		std::cout << prices[0][i] << std::endl;
		}
		std::cout << "Для выхода в меню категорий нажмите любые не перечисленные выше цифры\n";
		std::cout << std::endl;
		std::cin >> choose;
		if (choose == 1) {
			std::cout << "Введите количество: ";
			std::cin >> amount;
			std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] << " В количестве: " << amount << std::endl;
			plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
			total_check(plus_tot);
		}
		if (choose == 2) {
			std::cout << "Введите количество: ";
			std::cin >> amount;
			std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] << " В количестве: " << amount << std::endl;
			plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
			total_check(plus_tot);
		}
		if (choose == 3) {
			std::cout << "Введите количество: ";
			std::cin >> amount;
			std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] << " В количестве: " << amount << std::endl;
			plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
			total_check(plus_tot);
		}
		if (choose == 4) {
			std::cout << "Введите количество: ";
			std::cin >> amount;
			std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] << std::endl;
			plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
			total_check(plus_tot);
		}
		else if(choose != 1 && choose != 2 && choose != 3 && choose != 4 ) {
			std::cout << "Вы вышли в меню категорий.";
			main_menu();
			break;
		}
		//Нужно сделать выход в меню категорий.
		plus_tot = 0;
	}
}
void veg_cat() {
	{
		system("cls");
		const int row = 4;
		const int col = 4;
		int plus_tot = 0;
		int onion_sale = 0;
		std::string prices[row][col] = {
			{"1.Томатный 200р/литр"/*0й*/, "2.Луковый 101р/литр", "3.Огуречный 45р/литр"},
			{"200"/*0й*/,"101","45"}//НАДО ПЕРЕВЕСТИ В INT std::stoi
		};

		while (true)
		{
			choose = 0;
			for (size_t i = 0; i < row; i++)
			{
				std::cout << prices[0][i] << std::endl;
			}
			std::cout << "Для выхода в меню категорий нажмите любые не перечисленные выше цифры\n";
			std::cout << std::endl;
			std::cin >> choose;
			if (choose == 1) {
				std::cout << "Введите количество: ";
				std::cin >> amount;
				std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] <<" В количестве: " << amount<< std::endl;
				plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
				total_check(plus_tot);
			}
			if (choose == 2) {
				std::cout << "Введите количество: ";
				std::cin >> amount;
				std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] << " В количестве: " << amount << std::endl;
				plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
				total_check(plus_tot);
				onion_sale++;
				if (onion_sale >= 4 || amount >= 4)
				{
					sales(3, std::stoi(prices[1][choose - 1]));
					onion_sale = 0;
				}
			}
			if (choose == 3) {
				std::cout << "Введите количество: ";
				std::cin >> amount;
				std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] << " В количестве: " << amount << std::endl;
				plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
				total_check(plus_tot);
			}
			else if (choose != 1 && choose != 2 && choose != 3) {
				std::cout << "Вы вышли в меню категорий.";
				main_menu();
				break;
			}
			//Нужно сделать выход в меню категорий.
			plus_tot = 0;
		}
	}
}
void tea_cat(){
	{
		{
			system("cls");
			const int row = 4;
			const int col = 4;
			int plus_tot = 0;
			int petr_sale = 0;
			std::string prices[row][col] = {
				{"1.Чесночный 130р/литр"/*0й*/, "2.Петрушовковый 400р/литр"},
				{"130"/*0й*/,"400"}//НАДО ПЕРЕВЕСТИ В INT std::stoi
			};

			while (true)
			{
				choose = 0;
				for (size_t i = 0; i < row; i++)
				{
					std::cout << prices[0][i] << std::endl;
				}
				std::cout << "Для выхода в меню категорий нажмите любые не перечисленные выше цифры\n";
				std::cout << std::endl;
				std::cin >> choose;
				if (choose == 1) {
					std::cout << "Введите количество: ";
					std::cin >> amount;
					std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] << " В количестве: " << amount << std::endl;
					plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
					total_check(plus_tot);
				}
				if (choose == 2) {
					std::cout << "Введите количество: ";
					std::cin >> amount;
					std::cout << "Вы добавили к покупкам: " << prices[0][choose - 1] << " В количестве: " << amount << std::endl;
					plus_tot = plus_tot + std::stoi(prices[1][choose - 1]) * amount;
					total_check(plus_tot);
					petr_sale++;
					if (petr_sale >= 3 || amount >= 3)
					{
						sales(1, std::stoi(prices[1][choose - 1]));
						petr_sale = 0;
					}
				}
				else if (choose != 1 && choose != 2) {
					std::cout << "Вы вышли в меню категорий.";
					main_menu();
					break;
				}
				//Нужно сделать выход в меню категорий.
				plus_tot = 0;
			}
		}
	}
}
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	main_menu();
	
	std::cout << "\n";
	system("pause");
}
/*

цикл меню, выбор категорий сока в нем
цикл выбора сока в категории показываются цены. он выбирает 
и у него спрашивают количество от 1 до 99 и вариант отмены выбора
после этого тебя кидает обратно в главное меню, есть выбор зайти в корзину и закончить заказ.

нужна функция счетчик, которая будетбрать из массива цен строку, преобразовать её в инт и добавлять, 
итог должен быть float, тк скидки

скидки: 3+ литра петрушевого чая то на них скидка 5%
если стоимость покупки больше 5000 рублей то скидка 13%
каждый 4й луковый литр в подарок.
выводить итоговую сумму и скидки
*/