// Лабораторная работа №5 — Вариант 8 «Погода»
// Задание 1: разность дневной и ночной температуры (передача по значению, return)

#include <iostream>
using namespace std;

int difference(int day, int night) {
    return day - night;
}

int main() {
    int day, night;

    cout << "Введите дневную температуру: ";
    cin >> day;
    cout << "Введите ночную температуру: ";
    cin >> night;

    int diff = difference(day, night);

    cout << "День: " << day << ", ночь: " << night << endl;
    cout << "Разность (день - ночь): " << diff << endl;

    return 0;
}