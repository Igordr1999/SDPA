#include <iostream>
#include <math.h>

using namespace std;
//(x^k)*(e^-x)
// Интеграл от а до б f(x) = (f(a)-f(b)/2)*h*sum =
//= (f(a)-f(b))/2 * [(b-a)/n]


double fafb05 (double a, double b,double k) //считаем (f(a)-f(b)/2)
{
return (((pow(a,k))*(pow(exp(1),-a)))-((pow(b,k))*(pow(exp(1),-b))))*0.5;
}


double h(double a,double b,int n)  //считаем, ВНЕЗАПНО, h
{
    return ((b-a)/n);
}


double summ(double a, double h, int n) // cчитаем суммуO_o , суммируем нечётные элементы последовательности, но для элемента x нужен элемент х-1=> во внутреннем цикле высчитываем и чётные и нечётные, а во внешнем суммируем только нечётные
{
    double summ=a+h;
    double summtemp=a+h;
    for (int i=3;i<(n);i=i+2)  //от 1 до n-1 только НЕЧЁТНЫЕ// 3 отрезка=> n-1=2 => только первое слагаемое. 4 отрезка=> n-1=3 =>1+3 слагаетмые
    {
        for (int z=0;z<2;z++)
        {
       summtemp+=h;
        }
       summ+=summtemp;
    }
    return summ;
}
double integrate(double a,double b,double c)
{
    return a*b*c;
}



int main()
{
setlocale(0,"");
int k;
int k1=0,k2=1,k3=2,k4=3,k5=4;
int n1,n2,n3,n4,n5;
cout<<"Введите количество отрезков для коэффициентов:"<<endl<<"Для k=0,n:";cin>>n1; cout<<endl<<"для k=1,n:";cin>>n2; cout<<endl<<"для k=2,n:";cin>>n3;cout<<endl<<"для k=3,n:";cin>>n4;cout<<endl<<"для k=4,n:";cin>>n5;
double a=0;//Нижняя граница
double b=1.5;//Верхняя граница
cout<<endl<<endl<<"Таблица:"<<endl;
cout<<"1)k="<<k1<<" n="<<n1<<" Интеграл = "<<integrate(fafb05(a,b,k1),h(a,b,n1),summ(a,h(a,b,n1),n1))<<endl;
cout<<"2)k="<<k2<<" n="<<n2<<" Интеграл = "<<integrate(fafb05(a,b,k2),h(a,b,n2),summ(a,h(a,b,n2),n2))<<endl;
cout<<"2)k="<<k3<<" n="<<n3<<" Интеграл = "<<integrate(fafb05(a,b,k3),h(a,b,n3),summ(a,h(a,b,n3),n3))<<endl;
cout<<"2)k="<<k4<<" n="<<n4<<" Интеграл = "<<integrate(fafb05(a,b,k4),h(a,b,n4),summ(a,h(a,b,n4),n4))<<endl;
cout<<"2)k="<<k5<<" n="<<n5<<" Интеграл = "<<integrate(fafb05(a,b,k5),h(a,b,n5),summ(a,h(a,b,n5),n5))<<endl;
}
