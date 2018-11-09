#include <iostream>
using namespace std;

int main( ) {
    int n, a[100], b[100], i, j, x, y;
    cout << "Enter the number of elements in the array.";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
        b[i] = a[i];
        cout << endl;
    }

    for (i = 0; i < n; i++) {
        x = 0;
        y = 1;
        while (b[i] > 0) {
            b[i] = b[i] / 10;
            x++;
        }
        for (j = 0; j < x - 1; j++)
            y = y * 10;

        if ((a[i] % 10) != (a[i] / y)) {
            cout << a[i] << " ";
        }
    }
}