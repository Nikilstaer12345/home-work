

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"RU");
	int fact, i=1, b=1;
	cout << "Введите число: ";
	cin >> fact;
	for (; i <= fact; ++i) {
		b = b * i;
		
	}
			cout<<"Факториал этого числа= "<<b;
			return 0;

}