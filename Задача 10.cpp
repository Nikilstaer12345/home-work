

#include <iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "Ru");
	int c;
	double a,b = 1;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	if (a == 0) {
		if (c == 0) {
			cout << 1;
		}
		else if (c >= 1) {
			cout << 0;
		}
		else cout << "Ошибка";
		
	}
	else if (a!=0)
	{
		if (c > 0) {
			for (int i = 1; i <= c; i++) {
				b *= a;
			}cout << b;
		}
		if (c== 0)
			cout << 1;
		else
		if (c < 0) {
			for (int i =1; i <=-c; i++) {
				b /=a ;
			}cout << b;
		}
	}
}
	