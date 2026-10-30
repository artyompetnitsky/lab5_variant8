# Лабораторная работа №5 — Вариант 8 «Погода»

| Файл | Задание | Главный приём |
|---|---|---|
| [`task1_difference.cpp`](task1_difference.cpp) | 1 — разность температур | параметры по значению, return |
| [`task2_warmUp.cpp`](task2_warmUp.cpp) | 2 — повышение температуры | параметр по ссылке `int&` |
| [`task3_averageTemp.cpp`](task3_averageTemp.cpp) | 3 — средняя температура | перегрузка функций |
| [`task4_printStation.cpp`](task4_printStation.cpp) | 4 — станция и регион | параметр по умолчанию |

## Задание 1. Разность температур

`int difference(int day, int night)` возвращает `day - night`.
Исходные переменные в `main()` не изменяются.

## Задание 2. Повышение температуры

`void warmUp(int& temperature)` прибавляет 2 к температуре.
Значение выводится ДО и ПОСЛЕ вызова функции.

## Задание 3. Средняя температура

Две перегруженные версии:
- `int averageTemp(int a, int b)` — среднее из двух
- `int averageTemp(int a, int b, int c)` — среднее из трёх

Обе версии вызываются в программе.

## Задание 4. Станция и регион

`void printStation(int number, int region = 1)` выводит номер станции и регион.
Демонстрируются оба вызова: с одним аргументом и с двумя.

---

https://github.com/artyompetnitsky/lab5_variant8

Автор: Artyom Petnitsky