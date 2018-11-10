#include <iostream>
#include <stdlib.h>
using namespace std;
int func(int a)
{
int x=a%10;
while(a>10)
{
    a=a/10;
}
if (x==a){
    return 0;
}
else
{
   return 1;
}
}




int main()
{
    setlocale(0,"");
int z=0;
int massa[100], massb[100];
cout<<"Введите количество элементов массива:";
int n;cin >> n;
for (int i=0;i<n;i++)
{
    cout << "Введите элемент #"<<i+1<<":"; cin >> massa[i]; cout<<endl;
}
for (int i=0;i<n;i++)
{
  if (func(massa[i]))
  {
massb[z]=massa[i];
z++;
  }
  }
cout<< "Отредактированный массив"<<endl;
for (int i=0;i<z;i++)
{
    cout<<"Элемент #"<<i+1<<":"<<massb[i]<<endl;
}
