#include <iostream>

using namespace std;

int main()
{
setlocale(0,"");
int a; 
int b; 
cout <<"Введите сторону квадрата:";
cin>>a;
cout<<endl;
cout <<"Введите меньшую сторону равнобердренного прямоугольного треугольника:";
cin>>b; cout<<endl;
int x; 
int y; 
cout<<"Введите координату точки по X:"; cin>>x;cout<<endl<<"Введите координату точки по Y:";cin>>y;
if ((x>0 and y>0) or (x<0 and y<0) or (x<-a)or (y<(a)) or (y<(x-b)))                                       
{
    cout << "Точка не попадает в область";
}
else
{
cout << "Точка попадает в область";
}
}
