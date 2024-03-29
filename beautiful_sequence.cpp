#include <iostream>
#include <vector>

using namespace std;
/*Назовем последовательность А из n-элементов красивой, если для всех 2 ≤ i ≤ n-1 выполняется условие:  A(i - 1) + A(i + 1) / 2 = A(i)
Проверьте, является ли предложенная Вам последовательность красивой.
Формат ввода
В первой строке входных данных записано число n — количество элементов последовательности (n < 30).
На второй строке входных данных ряд целых чисел, вводимых через пробел.
Формат вывода
YES – если последовательность красивая.
NO – если последовательность не является красивой.*/

int main() {
	setlocale(LC_ALL, "ru");
	int n, m, j = 0;
	cin >> n;
	vector <double> arr;
	for (int i = 0; i < n; i++) //ввод данных
	{
		cin >> m;
		arr.push_back(m);
	}
	for (int i = 1; i < n - 1; i++) //обработка
	{
		if (arr[i] != (arr[i + 1] + arr[i - 1]) / 2) { j++; }
	}
	if (j == 0) { cout << "YES"; } //вывод
	else { cout << "NO"; }
	return 0;