#include <cmath>
#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double n1, n2;
    int a1, a2, b;
    double abs1, abs2, res1, res2;
    cout << "Введите числитель, знаменатель, приближенный ответ";
    cin >> a1 >> a2 >> n1;
    cout << "Введите подкоренное значение, приближенный ответ";
    cin >> b >> n2;
    //Ввод значений
    abs1 = abs(a1 / a2 - n1);
    abs2 = abs(sqrt(b) - n1);
    //Вычисление абсолютной погрешности
    res1 = abs1 / n1 * 100;
    res2 = abs2 / n2 * 100;
    //Вычисление относительной погрешности
    if (res1 > res2)
        cout << "Второе значение точнее";
    else
        if (res1 == res2)
            cout << "Точность значений равна";
        else
            cout << "Первое значение точнее";
    //Вывод ответа
}