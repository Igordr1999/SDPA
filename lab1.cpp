#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int x, y, square_side, triangular_side;
	cin >> x >> y >> square_side >> triangular_side;

	if (square_side <= 0 || triangular_side <= 0) {
		cerr << "Square side or triangular side is less than or equal to 0";
		return -1;
	}

	if ((x <= 0 && abs(x) <= square_side && y >= 0 && y <= square_side) ||
		(x >= 0 && x <= triangular_side && y <= 0 && abs(y) <= triangular_side 
			&& (abs(x) + abs(y)) <= triangular_side)) {
		cout << "YES";
	}
	else cout << "NO";
	return 0;
}