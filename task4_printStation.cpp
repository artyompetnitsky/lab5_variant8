// Лабораторная работа №5 — Вариант 8 «Погода»
// Задание 4: функция с параметром по умолчанию (номер станции и регион)

#include <iostream>
using namespace std;

void printStation(int number, int region = 1) {
    cout << "Станция: " << number << ", регион: " << region << endl;
}

int main() {
    int number, region;

    cout << "Введите номер станции: ";
    cin >> number;
    cout << "Введите номер региона: ";
    cin >> region;

    cout << "Вызов с одним аргументом:" << endl;
    printStation(number);

    cout << "Вызов с двумя аргументами:" << endl;
    printStation(number, region);

    return 0;
}