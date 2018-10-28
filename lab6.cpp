#include <iostream>
using namespace std;

bool check_size(int n, int max_size=100) {
	if (n >= max_size) return false;
	else return true;
}
void input(int a[], int n) {
	for (int i = 0; i < n; i++) cin >> a[i];
	return;
}

void output(int a[], int n) {
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
	return;
}

int count_even_numbers(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) sum += 1;
	}
	return sum;
}

void add_number(int a[], int n, int number) {
	int max_value = -1, max_position;
	for (int i = 0; i < n; i++) {
		if (a[i] > max_value) {
			max_value = a[i];
			max_position = i;
		}
	}

	// We shift the array from right to left to make place for the new number 
	for (int i = n - 1; i >= max_position; i--) a[i + 1] = a[i];
	a[max_position] = number;
	return;
}


int main() {
	int n, choise, number;
	while (true) {
		cout << "Enter array size: ";
		cin >> n;
		if (!check_size(n)) cerr << "Incorrect size" << endl;
		else break;
	}
	int *a = new int[n];

	while (true) {
		system("cls");
		cout << "1. Input array;" << endl;
		cout << "2. Output array;" << endl;
		cout << "3. Count even numbers;" << endl;
		cout << "4. Adding the number x before the first maximum number;" << endl;
		cout << "5. Exit." << endl;
		cout << "Your choise: ";
		cin >> choise;

		switch (choise) {
		case 1:
			if (!check_size(n)) break;
			cout << endl << "Enter array: ";
			input(a, n);
			break;
		case 2:
			cout << endl << "Your array: ";
			output(a, n);
			break;
		case 3:
			cout << endl << "Count even numbers: " << count_even_numbers(a, n) << endl;
			break;
		case 4:
			if (!check_size(n-1)) break;
			cout << endl << "Enter number: ";
			cin >> number;
			add_number(a, n, number);
			n += 1; // Increasing the size of the array by adding a new number
			break;
		case 5:
			return 0;
		default:
			cerr << "Incorrect choise" << endl;
			break;
		}
		system("pause");
	}
}