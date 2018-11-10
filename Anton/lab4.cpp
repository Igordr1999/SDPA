#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale(0,"");
   char s[100];
   char simbols[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890-_.";
   cout<<"Введите почту: ";
   cin.getline(s,100);
int i=0;
int check;
   while (s[i]!='@')
    {
     check=0;
     for (int j=0;j<strlen(simbols);j++) // это будет сверять буковку почту с допустимыми буковками
{
if (s[i]==simbols[j])
{
    check=1;
}
}
if (check==0)
{
    cout<<"Почта содержит недопустимый символ или отсутствует знак  '@'";
    exit(0);
}i++;
}
cout<<"Почта прошла проверку";
}
