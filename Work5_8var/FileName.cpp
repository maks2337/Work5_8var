// ПРАКТИЧЕСКАЯ РАБОТА №5, Задание 2 (8 вариант) Написать программу, которая выводит таблицу степеней двойки от нулевой до десятой

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int number = 2;
	cout << "Таблица степеней двойки:" << endl;
	for (int i = 0; i <= 10; i++) {
		cout << i << "     ";
		cout << pow(number, i) << endl;
	}
}