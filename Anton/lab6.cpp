#include <iostream>

using namespace std;
                            void enter(int *a,int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<") элемент массива:"; cin>>a[i];cout<<endl;
    }

}

                            void show(int *a,int n)
{
    cout<<"Элементы массива:";
    for (int i=0;i<n-1;i++)
    {
        cout<<a[i]<<";";
    }
cout<<a[n-1]<<"."<<endl;

}
                            void numberofeven(int *a,int n)
{int num=0;
        for (int i=0;i<n;i++)
    {
        if ((a[i]%2)==0) num++;
    }
    cout<<"Количество чётных чисел:" << num<<endl;
}


                            void Xmax(int *a,int n,int d)
{
int i=0;
int maxint=a[0];
int numbermax=0;
for (int i=0; i<n-1;i++)
{
    if (a[i]>maxint)
    {
        maxint=a[i];
        numbermax=i;
    }
}

for (int z=numbermax;z<n;z++)
{

a[n-i]=a[n-i-1];
i++;
}
a[numbermax]=d;
}


                            int main()
{
setlocale(0,"");
int num;
cout<<"Введите количество элементов массива:";
cin>>num;
int *mass= new int[num];

int menu=0;
int check=0;
int x=0;
while (menu!=5){

cout<<endl<<"1)Ввести элементы"<<endl<<"2)Показ элементов"<<endl<<"3)Вывод количества чётных чисел"<<endl<<"4)Добавить элемент Х перед первым максимумом"<<endl<<"5)Выход"<<endl;
cin>>menu;

while (menu!=1 and menu!=2 and menu!=3 and menu!=4 and menu!=5)
{

    cout<<"Ошибка ввода, повторите ввод:"; cin>>menu;
}
    switch (menu)
    {
       case 1:enter(mass,num);
       check++;
       break;
       case 2:show(mass,num);
       break;
       case 3:numberofeven(mass,num);
       break;
       case 4:
           if (check==0) cout<<"Нужно заполнить массив";
           else
          {num++;

          cout<<"Введите число, которое встанет перед максимальным:"<<endl;cin>>x;
           Xmax(mass,num,x);

          }
}
}
