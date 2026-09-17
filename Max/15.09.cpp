#include <iostream>
#include <Windows.h>
int task1()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int N = 0;
	std::cout << "Введите номер задачи: \n1.Скорость \n2.Стоимость поездки \n3.Стоимость бензина\n";
	std::cin >> N;

	if (N == 1) {
		double dist = 0;
		double time = 0;
		double speed = 0;
		std::cout << "Введите дистанцию в километрах:";
		std::cin >> dist;
		std::cout << "Введите время за которое необходимо доехать в минутах:";
		std::cin >> time;
		speed = dist / (time / 60);
		std::cout << "Необходимая скорость движения " << speed << "Км/ч";
	}
	else if (N == 2) {
		float t_start_sec = 0;
		float t_start_hour = 0;
		float t_start_min = 0;
		float t_finish_sec = 0;
		float t_finish_hour = 0;
		float t_finish_min = 0;
		float tot = 0;
		std::cout << "Введите время начала поездки (час):";
		std::cin >> t_start_hour;
		std::cout << "Введите время начала поездки (минуты):";
		std::cin >> t_start_min;
		std::cout << "Введите время начала поездки (секунды):";
		std::cin >> t_start_sec;
		std::cout << "Введите время конца поездки (час):";
		std::cin >> t_finish_hour;
		std::cout << "Введите время конца поездки (минуты):";
		std::cin >> t_finish_min;
		std::cout << "Введите время конца поездки (секунды):";
		std::cin >> t_finish_sec;
		if ((t_finish_hour * 60 + t_finish_min + t_finish_sec / 60) > (t_start_hour * 60 + t_start_min + t_start_sec / 60)) {
			tot = (t_finish_hour * 60 + t_finish_min + t_finish_sec / 60) - (t_start_hour * 60 + t_start_min + t_start_sec / 60);
			float sum = 0;
			sum = tot * 2;
			std::cout << "Итоговая стоимость поездки: " << sum << "Гривен";
		}
		else { std::cout << "Ошибко"; }
	}
	else if (N == 3)
	{
		float dist = 0;
		float exp = 0;
		float gas_price_1 = 57;
		float gas_price_2 = 76;
		float gas_price_3 = 65;
		std::cout << "Введите дистанцию (Километры):";
		std::cin >> dist;
		std::cout << "Введите расход бензина на 100км (Литры):";
		std::cin >> exp;
		std::cout << "Стоимость поездки на различных типах топлива:\n1." << (exp * (dist / 100)) * gas_price_1;
		std::cout << "\n2." << (exp * (dist / 100)) * gas_price_2;
		std::cout << "\n3." << (exp * (dist / 100)) * gas_price_3;
	}
	else {std::cout << "Ошибко";}
}
//мямямямямямямямя
//dsadsadsad
//кукусики

fewfds;