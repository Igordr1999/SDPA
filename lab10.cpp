#include <iostream>
using namespace std;

int sum(int mas[], int s) {
	return s ? mas[s - 1] + sum(mas, s - 1) : 0;
}

int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	cout << sum(a, n) << endl;
	return 0;
}