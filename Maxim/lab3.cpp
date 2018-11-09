#include <iostream>
using namespace std;

int main() {
    int n,m,k,sum=0;
    int a[100][50],b[100];
    cout << "Kolichestvo strok";
    cin >> n;
    cout << "Kolichestvo stolbcov";
    cin >> m;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "Vvedite element a[" << i << "][" << j << "] ";
            cin >> a[i][j];
            cout << endl;
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "k=";
    cin >> k;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            sum = sum + a[i][j];
        if (sum % k == 0) {
            b[i] = sum;
            cout << b[i] << " ";
        }
    }
    return 0;
}