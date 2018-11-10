#include <iostream>
//что надо: формирование одномерного массива
//из сумм элементов каждой строки, кратных числу K
using namespace std;

int main()
{
setlocale(0,"");
int massa[100][50];
cout<<"Введите количество строк:"; int m,n; cin>>m;cout<<endl<<"Введите количество столбцов:";cin>>n;
for (int i=0;i<m;i++)
{

    for (int j=0;j<n;j++)
    {
    cout<<"Вводим ("<<i+1;
    cout<<";"<<j+1<<"):";cin>>massa[i][j];
    }
}
int k;
int s;
cout <<endl<<"Введите число, на которое должны делиться элементы матрицы:";
cin>>k;
int massb[m];

    for (int i=0;i<m;i++)
    {
        s=0;
       for(int j=0;j<n;j++)
       {
           if ((massa[i][j])%k==0)
           {
               s+=massa[i][j];
           }
       }
    massb[i]=s;
    }
    cout<<endl<<"Получившийся массив:"<<endl;
for (int i=0;i<m;i++)
{
    cout<<massb[i]<<" ";
}

}
