#include <iostream>
#include <vector>

using namespace std;

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