
#include <iostream>
using namespace std;
int main()
{
	double v0, x0, xt1,xt2, t, g = -9.8,a;
	a = g;
	cout << "v0=";
	cin >> v0;
	cout << "x0=";
	cin >> x0;
	cout << "t=";
	cin >> t;
	xt1 = x0 + v0 * t + a * t * t / 2;
	cout << "xt1=" << xt1 << endl;
	xt2 = x0 + v0 * t + 1 / 2 * a * t * t;
	cout << "xt2=" << xt2 << endl;
}