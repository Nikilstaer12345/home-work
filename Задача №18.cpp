#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int x[20], max =-100, min =100;
	for (int i = 0; i < 20; i++) {
		x[i] = rand() % 200 - 100;
		cout << x[i] << " ";
		if (x[i] >= max)
		{
			max = x[i];
		}
		if (x[i] <= min) {
			min = x[i];
		}
	}
	cout << endl;
	cout << "max=" << max << endl;
	cout << "min=" << min;
	return 0;
}