#include <iostream>
#include <time.h>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int R;
	cout << "Введите размер" << endl;
	cin >> R;
	vector <int> x;
	x.resize(R);
	cout << "Введите числа" << endl;
	for (int i = 0; i < R; i++) {
		cin >> x[i]; //Ввод чисел
	}
	for (int i = R; i >= 0; i--) {// Сравнение одного элемента со следующим
		for (int j = 0; j < i - 1; j++) {
			if (x[j] > x[j + 1]) {
				swap(x[j], x[j + 1]);// Замена чисел местами
			}
		}
	}
	for (int j = 0; j < R; j++) {
		for (int k = j; k >= 0; k--) {
			if (k >= 5) k = 4; 
			cout << x[k];// Если чисел больше 5 выводить последним число порядкового номера "4"
		}
		cout << endl;
	}
	return 0;
}