#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int n, pop = 0;
	cout << "Введите размер массива: " << endl;
	cin >> n;
	int* a = new int[n];//Выделение памяти для массива
	cout << "Введите любые числа от 0 до 9: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] >= 9) {
			cout << "Число превышает ограничение условия. Начните операцию заново.";
			return 0;
		}
	}
	for (int k = 0; k < 9; k++){
		for (int j = 0; j < n; j++) {//Сколько раз встречается число
			if (k == a[j]) {
				pop++;
			}
		}
		if (pop != 0) {
			cout << endl << k << ":" << pop;
		}
		pop = 0;
	}
	return 0;
}