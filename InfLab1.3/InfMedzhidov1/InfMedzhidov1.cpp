#include <cmath>
#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

void task1()
{
    double n1, n2;
    int a1, a2, b;
    double abs1, abs2, res1, res2;
    cout << "Введите числитель, знаменатель, приближенный ответ: ";
    cin >> a1 >> a2 >> n1;
    cout << "Введите подкоренное значение, приближенный ответ: ";
    cin >> b >> n2;
    //Ввод значений
    abs1 = abs((double) a1 / a2 - n1);
    abs2 = abs(sqrt(b) - n2);
    //Вычисление абсолютной погрешности
    res1 = abs1 / n1 * 100;
    res2 = abs2 / n2 * 100;
    //Вычисление относительной погрешности
    cout << "Результат деления: " << (double) a1/a2 << '\n';
    cout << "Результат подкоренного выражения: " << sqrt(b) << '\n';
    cout << "Абсолютная погрешность 1: " << abs1 << '\n';
    cout << "Абсолютная погрешность 2: " << abs2 << '\n';
    cout << "Относительная погрешность 1: " << res1 << '\n';
    cout << "Относительная погрешность 2: " << res2 << '\n';
    if (res1 > res2)
        cout << "Второе значение точнее";
    else
        if (res1 == res2)
            cout << "Точность значений равна";
        else
            cout << "Первое значение точнее";
    //Вывод ответа
}
// 17 11 1.545
// 18 4.243

void task2()
{
    double a, a2, p, pr, abs0, abs2, dabs;
    int a1, abs1, i=0, b, j, z=1;
    cout << "Введите число и абсолютную погрешность: ";
    cin >> a >> abs0;
    //Ввод значений

    a2 = a;
    abs2 = abs0;
    for (;a2 != (int) a2;i++)
    {
        a2 *= 10;
        abs2 *= 10;
    }
    j = i;
    a1 = a2;
    abs1 = abs2;
    b = abs1;
    //Приход к целым числам
    
    for (;i!=0;i--)
    {
        b = pow(10, z);
        if (abs2 > 0)
            a1 = a1- a1%b;
        abs2 = (abs2 - (int)abs2%10) / 10;
        z++;
    }
    pr = a1 / (pow(10, j));
    //Нахождение приближенного числа

    dabs = abs(a-pr);
    //Нахождение абсолютной погрешности

    cout << "Приближенное число равно " << pr << '\n';

    cout << "Абсолютная погрешность равна +-" << dabs << '\n';
    //Вывод
}
// 0.8647 0.0013

void task3()
{
    double a, a2, abs0, otn;
    int i = 0;

    cout << "Введите число: ";
    cin >> a;
    //Ввод значений

    a2 = a;
    for (; a2 != (int)a2; i++)
    {
        a2 *= 10;
    }
    abs0 = (pow(10, -i)) / 2;
    //Нахождение абсолютной погрешности

    otn = (abs0 / abs((a-abs0)))*100;
    //Нахождение относительной погрешности

    cout << "Предельная абсолютная погрешность равна +-" << abs0 << '\n';

    cout << "Предельная относительная погрешность равна " << otn << '%';
    //Вывод
}
// 0.864

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Выберите номер задания: ";
    char task;
    cin >> task;
    switch (task)
    {
    case '1':
        task1();
        break;
    case '2':
        task2();
        break;
    case '3':
        task3();
        break;
    default:
        cout << "Неизвестная команда";
        break;
    }
}