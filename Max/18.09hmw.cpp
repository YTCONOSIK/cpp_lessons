#include <iostream>
#include <Windows.h>
#include <string>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    using namespace std; //Почему вы нам об этом не рассказали?(или я прослушал) )
    int n = 0;
    cin >> n;
    if (n == 1)
    {
        string s;
        cin >> s;

        if (s.length() != 6) {
            cout << "Ошибка. введите ровно 6-значное число!";
            return 0;
        }

        int numb = stoi(s);
        int s1 = 0, s2 = 0;
        int d = 100000;

        for (int i = 0; i < 3; ++i) {
            s1 += numb / d;
            numb %= d;
            d /= 10;
        }

        d = 100;
        for (int i = 0; i < 3; ++i) {
            s2 += numb / d;
            numb %= d;
            d /= 10;
        }

        if (s1 == s2)
            cout << "Это счастливое число!";
        else
            cout << "Это не счастливое число";

        return 0;
    }
        else if(n == 2) {
        string s;
        cin >> s;

        if (s.length() != 4) {
            cout << "Ошибка. 4х-значное число!";
            return 0;
        }

        int numb = stoi(s);
        int s1 = 0, s2 = 0;
        int d = 1000;
        for (int i = 0; i < 2; ++i) {
            
        }
    }
}
// 1234 / 1000 
// s1 = 1

// 123 / 100 = 2
// s2 = 2
// cout << s2 << s1
1234 / 10 = 