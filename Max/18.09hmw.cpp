/*#include <iostream>
#include <Windows.h>
#include <string>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    using namespace std; //решил попробовать, вы уже объяснили почему не стоит
    int n = 0;
    cout << "Выберите задачу 1-3\n";
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
        else if(n == 2) 
    {
        string s;
        cin >> s;

        if (s.length() != 4) {
            cout << "Ошибка. не 4х-значное число!";
            return 0;
        }

        int numb = stoi(s);
        int save1 = 0, save2 = 0;
        int div = 1000;
        int digt [4];
        save2 = numb / div;
        for (int i = 0; i < 4; ++i) {
            digt[i] = numb % 10;
            numb /= 10;
        }
        cout << digt[2] << digt[3] << digt[0] << digt[1];
    }
        else if (n == 3) {
        int ent, maxent = 0;
            for (size_t i = 0; i < 7; i++)
            {
                cin >> ent;
                cout << endl;
                if (ent > maxent)
                {
                    maxent = ent;
                }
            }
            cout << "Самое большое введеное число = " << maxent;
        }
}
// 1234 / 1000 
// s1 = 1

// 123 / 100 = 2
// s2 = 2
// cout << s2 << s1
1234 / 10 = 