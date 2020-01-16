#include <iostream>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int a,b, R=1, str, sto;
	int i = 0;
	while (R == 1) {
		int x[10][8];
		a= rand() % 10;
		b = rand() % 8;
		x[a][b] = 1;
		cout << "Загаданная ячейка: " << a<<" "<<b<<endl;
		cout << "У вас есть 5 попыток отгадать загаданную ячейку. Введите координаты:" << endl;
		while (i <= 5) {
			cin >> str>> sto;
			if (x[str][sto] == 1) {
				cout << "Вы угадали" << endl;
				break;
			}
			else if (str > 9 || sto > 7 || str < 0 || sto < 0) {
				cout << "Выход за границу массива" << endl;
			}
			else  if (x[str][sto] == 2) {
				cout << "Это уже проверяли" << endl;
			}
			else {
					cout << "Нет, осталось попыток:" << 5 - (i + 1) << endl;
					x[str][sto] = 2;
					i++;
			}
			if (i == 5) {
				cout << "GAME OVER" << endl;
				break;
			}
		}
		cout << " Если хотите сыграть ещё раз, нажмите 1:"<<endl;
		cin >> R;
		i = 0;
	}
	return 0;
}
