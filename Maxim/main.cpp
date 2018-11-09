#include <iostream>
using namespace std;

int main() {
    int x,y,sq,tr;
    cout << "Enter X " << endl;
    cin >> x;
    cout << "Enter Y " << endl;
    cin >> y;
    cout << "Enter the length of the side of the square " << endl;
    cin >> sq;
    cout << "Enter the length of the side of the triangle " << endl;
    cin >> tr;
    if (sq <= 0 || tr <= 0){
        cout << "Invalid data" << endl;
        exit(EXIT_FAILURE);
    }

    if ((-sq <= x && x <= 0 && 0 <= y && y <= sq) || (0 <= x && x <= y+tr && x-tr <= y && y <= 0))
        cout << ("The point is inside the region.");
    else
        cout << ("The point is outside the region.");
    return 0;
}