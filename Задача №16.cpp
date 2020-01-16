#include <iostream>
#include <vector>
using namespace std;
void factorization(int n) {
	vector <int> trk;
	int temp;

	for (int i = 2; i < n;) {
		if (n % i == 0) {
			trk.push_back(i);
			n = n / i;
		}
		else {
			i++;
		}
	}
	if (n > 1) {
		trk.push_back(n);
	}


	for (int i = 0; i < trk.size(); i++) {
		cout << trk[i];
		temp = count(trk.begin(),trk.end(), trk[i]);
		if (temp != 1) {
			cout << "^" << temp;
			i += temp - 1;
			if (i != trk.size() - 1) cout << "*";
			continue;
		}
		else if (i != trk.size() - 1) cout << "*";
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите число";
	int n;
	cin >> n;
	if (n == 1) {
		cout << "Это число ни простое, ни составное";
		return 0;
	}
	else if (n <= 0)
	{
		cout << "Это число не натуральное";
	}
	else	factorization(n);
	return 0;
}
