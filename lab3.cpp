#include<iostream>
using namespace std;

int main() {
	int n, m, k, a[100] = { 0 }, number;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> number;
			if (number % k == 0) a[i] += number;
		}
	}
	
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;
}