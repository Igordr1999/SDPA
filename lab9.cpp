#include <iostream>
using namespace std;

template < typename ElementType >
void out_array(const ElementType * arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
}

template < typename EL >
void in_array(EL * arr, int n, int m) {
	for (int i = m-1; i >= 0; --i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[j][i];
		}
	}
}

int main() {
	int arr1[100][50];
	float arr2[100][50];
	char arr3[100][50];

	int n, m;
	cout << "Input n and m: ";
	cin >> n >> m;

	cout << endl << "Input integer:" << endl;
	in_array(arr1, n, m);
	cout << endl << "Ouput integer:" << endl;
	out_array(arr1, n, m);

	cout << endl << "Input float:" << endl;
	in_array(arr2, n, m);
	cout << endl << "Ouput float:" << endl;
	out_array(arr2, n, m);

	cout << endl << "Input char:" << endl;
	in_array(arr3, n, m);
	cout << endl << "Ouput char:" << endl;
	out_array(arr3, n, m);
	
	return 0;
}