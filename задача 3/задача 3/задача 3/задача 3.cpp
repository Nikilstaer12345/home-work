// задача 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	{int a, b;
	cout << "решение для целого типа переменных:" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "сумма=" << a + b << endl;
	cout << "разница=" << a - b << endl;
	cout << "произведение=" << a * b << endl;
	cout << "частное=" << a / b << endl;
	}

	{double a, b;
	cout << "решение для вещественного типа переменных:"<<endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "сумма=" << a + b << endl;
	cout << "разница=" << a - b << endl;
	cout << "произведение=" << a * b << endl;
	cout << "частное=" << a / b << endl;
	 }

	{   int a;
		double b;
	cout << "решение для целого типа переменной 'a' и вещественного типа переменной 'b':" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "сумма=" << a + b << endl;
	cout << "разница=" << a - b << endl;
	cout << "произведение=" << a * b << endl;
	cout << "частное=" << a / b << endl;
	}

	{   int b;
	    double a;
	cout << "решение для вещественного типа переменной 'a' и целого типа переменной 'b':" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "сумма=" << a + b << endl;
	cout << "разница=" << a - b << endl;
	cout << "произведение=" << a * b << endl;
	cout << "частное=" << a / b << endl;
	}
}


