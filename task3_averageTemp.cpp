// Лабораторная работа №5 — Вариант 8 «Погода»
// Задание 3: перегруженные функции averageTemp (для 2 и 3 измерений)

#include <iostream>
using namespace std;

int averageTemp(int a, int b) {
    return (a + b) / 2;
}

int averageTemp(int a, int b, int c) {
    return (a + b + c) / 3;
}

int main() {
    int a, b, c;

    cout << "Введите три температуры: ";
    cin >> a >> b >> c;

    int avg2 = averageTemp(a, b);
    int avg3 = averageTemp(a, b, c);

    cout << "Среднее из двух (" << a << " и " << b << "): " << avg2 << endl;
    cout << "Среднее из трёх (" << a << ", " << b << ", " << c << "): " << avg3 << endl;

    return 0;
}