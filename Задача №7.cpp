

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int F;

	cout << "для расчета площади треугольника через длины сторон введите 1; Для расчета площади через координаты вершин введите 2" << endl;
	cout << "Вариант решения"<<endl;

	cin >> F;
	double x1{}, y1{}, x2{}, y2{}, x3{}, y3{}, l1{}, l2{}, l3{}, P1{}, P2{}, S1{}, S2{};
	if (F == 1)
	{
		cout << "l1=";
		cin >> l1;
		cout << "l2=";
		cin >> l2;
		cout << "l3=";
		cin >> l3;
		if ((l1== 0) || (l2 == 0) || (l3 == 0)) {
			cout << "Такого треугольника не существует";
		}
		else if ((l1 + l2 < l3) || (l1 + l3 < l2) || (l2 + l3 < l1)) {
			cout << "Такого треугольника не существует";
		}
		else {
			P1 = (l1 + l2 + l3) / 2;
			S1 = sqrt(P1 * ((P1 - l1) * (P1 - l2) * (P1 - l3)));
			cout << "S=" << S1;
		}

	}
	if (F == 2) {

	
		cin >> x1>>   y1;

		cin >> x2>>  y2;
	
		cin >> x3>>  y3;


		if ((x1 == x2 && x2 == x3) || (y1 == y2 && y2 == y3)) {
			cout << "Все точки лежат на одной прямой";
		}
		if ((x2 == x3 && y2 == y3) || (x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3)) {
			cout << "Вершины совпадают";
		}
		else {
			l1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
			l2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
			l3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
			P2 = (l1 + l2 + l3) / 2;
			S2 = sqrt(P2 * ((P2 - l1) * (P2 - l2) * (P2 - l3)));
			cout << "S=" << S2;
		}


	}
}