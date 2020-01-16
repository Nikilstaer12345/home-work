#include <iostream>
using namespace std;
int main()
{
	int s, s1, s2, l1, r1, l2, r2;
	int x1,x2;
	cout << "s " << "l1 " << "r1 " << "l2 " << "r2 "<<endl;
	cin>>s >> l1 >>r1 >>l2 >>r2;
	if (l1 >= r1 || l2 >= r2) {
		cout << "Ошибка числового диапазона";
		return 0;
	}
	for (s1 = l1; s1 <= r1; s1++) {
		for (s2 = l2; s2 <= r2; s2++) {
			if (s == s1 + s2) {
				x1 = s1;
				x2 = s2;
				cout << "x1=" << x1 << endl;
				cout<< "x2=" << x2;
				return 0;
			}
		}if (s != s1 + s2) {
			cout << "-1";
			return 0;
		}
	}
 
}

