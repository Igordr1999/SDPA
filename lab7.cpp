#include <iostream>
#include <math.h>
using namespace std;

double fx(double x, double k){
	return ((pow(x, k))*(pow(exp(1), -x)));
}

double fafb05(double a, double b, double k){
	return (fx(a, k) + fx(b, k)) / 2;
}

double h(double a, double b, int n){
	return ((b - a) / n);
}

double summa(double a, double h, double k, int n){
	double delta = a;
	double sum = 0;
	for (int i = a + 1; i < n; i++){
		delta += h;
		sum += fx(delta, k);
	}
	return sum;
}

double integrate(double a, double b, double c){
	return b * (a + c);
}

double answer(double a, double b, double k, double n) {
	return integrate(fafb05(a, b, k), h(a, b, n), summa(a, h(a, b, n), k, n));
}

int main(){
	setlocale(0, "");
	double a = 0;	//Нижняя граница
	double b = 1.5;	//Верхняя граница
	int k1 = 0, 
		k2 = 1, 
		k3 = 2, 
		k4 = 3, 
		k5 = 4;
	int n1, n2, n3, n4, n5;

	cout << "Введите количество отрезков для коэффициентов:" << endl;
	cout << "Для k=0, n: "; cin >> n1; 
	cout << "Для k=1, n: "; cin >> n2;
	cout << "Для k=2, n: "; cin >> n3;
	cout << "Для k=3, n: "; cin >> n4; 
	cout << "Для k=4, n: "; cin >> n5;

	cout << endl << "Таблица:" <<endl;
	cout << "k n Интеграл" << endl;
	cout << k1 << " " << n1 << " " << answer(a, b, k1, n1) << endl;
	cout << k2 << " " << n2 << " " << answer(a, b, k2, n2) << endl;
	cout << k3 << " " << n3 << " " << answer(a, b, k3, n3) << endl;
	cout << k4 << " " << n4 << " " << answer(a, b, k4, n4) << endl;
	cout << k5 << " " << n5 << " " << answer(a, b, k5, n5) << endl;
   return 0;
}
