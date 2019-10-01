

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russion");
	int L, F;
	cout << "для расчета площади треугольника через длины сторон введите 0; Для расчета площади через координаты вершин введите 1";
	cin >> F;
	if (F == 1) {
		double x1, y1, x2, y2, x3, y3,l1,l2,l3,P1,S1;
		if ((x1 == x2 && x2 == x3) &&(y1 == y2 && y2 == y3)) {
			cout << "Все точки лежат на одной прямой";
			   }
		if ((x1 == x2 && y1 == y2) &&(x1 == x3 && y1 = y3)&& (x1 == x3 && y1 == y3)) {
			cout << "Вершины совпадают";
		}
		else {
			l1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
			l2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
			l3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
			P1 = (l1 + l2 + l3) / 3;
			S1 = sqrt(P1 * (P1 - l1) * (P1 - l2) * (P1 - l3));
			cout << "S=" << S1;
		}
	}


}

