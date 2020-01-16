#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int chisl, a = 2, i = 0, vstep{}, Sum = 0;
	cout<<"Введите число: ";
	cin >> chisl;
	for (i; vstep < chisl;i++) {
		vstep = pow(a, i);
		Sum++;
		if (vstep > chisl) {
			Sum -= 1;
		}
	}
	cout << Sum;
  
}
