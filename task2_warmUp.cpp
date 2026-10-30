// Лабораторная работа №5 — Вариант 8 «Погода»
// Задание 2: увеличение температуры на 2 градуса (передача по ссылке)

#include <iostream>
using namespace std;

void warmUp(int& temperature) {
    temperature += 2;
}

int main() {
    int temperature;

    cout << "Введите текущую температуру: ";
    cin >> temperature;

    cout << "До вызова функции: " << temperature << endl;
    warmUp(temperature);
    cout << "После вызова функции: " << temperature << endl;

    return 0;
}