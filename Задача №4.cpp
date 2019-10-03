
#include <iostream>
using namespace std;

int main()
{setlocale(LC_ALL,"russian");
{int a, b;
cout <<"До замены значения переменных:" << endl;
cout << "a=";
cin >> a;
cout << "b=";
cin >> b;
a = a + b;
b = a - b;
a = a - b;
cout << "после замены:" << endl;
cout << "a=" << a << "\n" << "b=" << b<<"\n";
}
{ 
	int a, b,c;
cout << "До замены значения переменных:" << endl;
cout << "a=";
cin >> a;
cout << "b=";
cin >> b;
c = a;
a = b;
b = c;
cout << "после замены:" << endl;
cout << "a=" << a << "\n" << "b=" << b;
}

}

