// LAB-8.1.1.cpp
// Сушинський Ігор
// Лабораторна робота №8.1
// Пошук та заміна символів у літерному рядку.
// Варіант 20
// 1 завдання
// Ітераційний спосіб

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str)
{
	if (strlen(str) < 3)
		return 0;

	int k = 0;
	for (int i = 1; str[i + 1] != 0; i++)
		if (str[i - 1] == ',' && str[i + 1] == '-')
			k++;

	return k;
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	char str[101];

	cout << "Ввести лiтерний рядок:" << endl;
	cin.getline(str, 100);

	cout << "Лiтерний рядок мiстить " << Count(str) << " групи ', -'" << endl;

	return 0;
}