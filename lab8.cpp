#include <iostream>
#include <string>
using namespace std;

// Arrays of elements
int mas_int[100][50];
string mas_str[100][50];

// Save number in array
void a(int num, int x, int y){
	mas_int[x][y] = num;
	return;
}

// Save string in array
void a(string str, int x, int y){
	mas_str[x][y] = str;
	return;
}

// Input array of any format
void input_array(int n, int m, int choise) {
	int input_int;
	string input_str;
	for (int i = m-1; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			if (choise == 1) {
				cin >> input_int;
				a(input_int, j, i);
			}
			else{
				cin >> input_str;
				a(input_str, j, i);
			}
		}
	}
}

// Output array of any format
void output_array(int n, int m, int choise) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (choise == 1) cout << mas_int[i][j] << " ";
			else cout << mas_str[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int choise, n, m, input_int;
	string input_str;
	cout << "Choise: \n1) Integer array; \n2) String array."<<endl;
	cout << "Your answer: ";
	cin >> choise;

	cout << "Input n and m: ";
	cin >> n >> m;

	cout << "Input your array:"<<endl;
	input_array(n, m, choise);

	cout << endl << "Result:" << endl;
	output_array(n, m, choise);
	return 0;
}