#include <iostream>
using namespace std;

int main()

{setlocale(LC_ALL, "Russian");
double x{};
int a, b, c;
	cout << "a=" ;
	cin >> a;
	cout << "b=" ;
	cin >> b;
	cout << "c=" ;
	cin >> c;
	if (a == 0 && b == 0) {
		cout << "Корней нет";
	}
	else if (a == 0) {
		x = -c / b;
		cout << "x=" << x << endl;
	}
	if (b == 0) {
		x = sqrt(-c / (a));
		cout << "x1=" << x;
	}



}
