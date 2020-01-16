
#include <ctime>
#include <iostream>
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RU");
	using namespace std;
ert:
	int c{}, a = 1, n{}, number{};
	cout << "Я загадал число от 1 до 100. Угадай загаданое число. У тебя есть 5 попыток" << endl;
	cout << "Введите число" << endl;
	c = rand() % 100 + 1;
	int rt = 0;
    while (a <= 5) {
		{ cin >> number;
			if (a != 5) {
				if (number < c)
				{ cout << "Загаданное число больше" << endl;
					a++;}
				else if (number > c)
				{ cout << "Загаданное число меньше" << endl;
					a++;}
				else if (number == c) {
					cout << "Поздравляю! Вы угадали" << endl;
					cout << "Хотите начать сначала? (1-Да)" << endl;
					cin >> rt;
					if (rt == 1)
					{ goto ert; }
					else return 0;
				}
			}
			if (a == 5) {
				cin >> number;
				if (number == c) {
					cout << "Поздравляю! Вы угадали" << endl;
					cout << "Хотите начать сначала? (1-Да)"<<endl;
	cin >> rt;
	if (rt == 1) goto ert;
				else return 0;	}
				else if (number != c) {
					cout << "Вы проиграли.Было загадано:" << c << endl;
					cout << "Хотите начать сначала? (1-Да)" << endl;
					cin >> rt;
					if (rt == 1) { goto ert; }
					else return 0;
				}	
			}
		}	
	}
}

