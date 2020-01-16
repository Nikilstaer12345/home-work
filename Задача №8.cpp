// Задача №8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	double a, b;
	char rt = 'a';
	cout << "Введите пример" << endl;
	cin >> a;
	cin >> rt;
	cin >> b;
	switch (rt) {
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		//break;
	case '*':
		cout << a * b;
		break;
	case '/':
		if (b == 0) {
			cout << "невозможно деление на ноль" << endl;
		}
		else
			cout << a / b;
		break;

	default :
		cout << "Недопустимая операция";
		break;
	}


}
