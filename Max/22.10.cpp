#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>
std::string login;
std::string pass;
std::string login_at;
std::string pass_at;
int c = 0;
void Login();
void Register_and_Login() {
	while (true) {
		std::cout << "Введите логин:\n";
		std::getline(std::cin, login);
		if (login.size() >= 5 && login.size() <= 15 )
		{
			break;
		}
		std::cout << "Некорректный логин, длина должна быть от 5 до 15 символов\n";
		Sleep(3000);
		system("cls");
	}
	while (true) {
		std::cout << "Введите пароль:\n";
		std::getline(std::cin, pass);
		for (size_t i = 0; i < pass.size(); i++)
		{
			char ch = pass[i];
			std::cout << ch << "\n";
			if (ch >= '0' && ch <= '9') {
				c++;
			}
		}
		if (pass.size() >= 5 && pass.size() <= 15 && c >= 2)
		{
			break;
		}
		std::cout << "Некорректный пароль, длина должна быть от 5 до 15 символов, а также содержать 2 цифры";
		Sleep(3000);
		system("cls");
	}
	std::cout << "Переход к логину\n";
	Login();
}
void Login() {
	while (true) {
		std::cout << login <<"\n" << pass <<"\n\n\n";
		std::cout << "Авторизация\n Введите логин:";
		std::getline(std::cin, login_at);
		std::cout << "Авторизация\n Введите пароль:";
		std::getline(std::cin, pass_at);
		if (login == login_at && pass == pass_at) {
			std::cout << "Успех.";
			break;
		}
		else {
			std::cout << "неверный логин или пароль, попробуйте снова";
			Sleep(2000);
			system("cls");
		}
		
		}
}
int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	
/*	std::string name = "text";
	std::string one = name + " new\n";
	std::cout << one;
	
	std::string* ptr = nullptr;
	ptr = new std::string[10];
	delete[] ptr;

	std::string arr [5]{"text","meow"};

	name.size();
	//name.erase(2);
	for (size_t i = 0; i < name.size(); i++)
	{
		std::cout << name[i];
	}
	auto it = std::find(arr->begin(), arr->end(), "Apple")*/
/*	std::string one;
	int num = 0;
	std::getline(std::cin, one); // откуда_взяли_текст, куда_его_сунули
	std::cout << one << "\n";

	std::cin >> num;
	std::cout << num << "\n";

	//std::cin.ignore(32767, '\n'); // можно лучше
	std::cin.ignore(std::numeric_limits<std::streamsize>::max()); //кпц

	std::getline(std::cin, one); // откуда_взяли_текст, куда_его_сунули
	std::cout << one;*/

	Register_and_Login();

}