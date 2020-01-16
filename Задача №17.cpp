#include <iostream>

using namespace std;
double BMI(double weight, double height) {
	double Pok = weight / (height * height);
	return Pok;
}

void printBMI(double BMI) {
	if (BMI < 18.5){
		cout << "Underweight";
	}
	if ((18.5 <= BMI) && (BMI < 25.0)){
		cout << "Normal weight";
	}
	if ((25.0 <= BMI) && (BMI < 30.0)){
		cout << "Overweight";
	}
	if (30.0 <= BMI){
		cout << "Obesity";
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	double weight, height;
	cout << "Введите вес и рост: "<<endl;
	cin >> weight >> height; //Рост в метрах
	printBMI(BMI(weight,height));
	return 0;
}