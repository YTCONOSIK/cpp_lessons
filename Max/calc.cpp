	char d = ' ';
	double f = 0;
	double s = 0;
	double r = 0;
	std::cout << "Введите действие: * | + | - | / \n";
	std::cin >> d;
	if (d == '*' || d == '/' || d == '+' || d == '-') {
		std::cout << "Выбрано" << "(" << d << ")" << "\n Введите первое число:";
		std::cin >> f;
		std::cout << "Первое число:" << f << "\n Введите второе число: \n";
		std::cin >> s;
		//std::cout << "Итог:" << r;
		if (d == '*') {
			r = f * s;
			std::cout << "Итог:" << r;
		}
		else if (d == '/' && s != 0) {A
			r = f / s;
			std::cout << "Итог:" << r;
		}
		else if (d == '+') {
			r = f + s;
			std::cout << "Итог:" << r;
		}
		else if (d == '-') {
			r = f - s;
			std::cout << "Итог:" << r;
		}
		else {
			std::cout << "Ты что понаписал?";
		}

		return 0;

	}
	else
	{
		std::cout << "Ты что понаписал?";
		std::cerr << "\n Logging";
		std::clog <<
		return 12;
	}