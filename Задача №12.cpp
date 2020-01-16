#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Ru");
	int a, b;
	cout << "Введите число: ";
	cin >> a; 
	if (a == 1) {
		cout << "Число не является простым";
		return 0;
	}
	for (b = 2; b <a; b++) {
		if (a % b== 0) {
			cout << "Число не является простым";
			return 0;
		}
	}cout << "Число является простым";
}