#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
int main()

{
setlocale(0,"");
char s[150];

char raz[]=" .,;-:/?!()";
cin.getline(s,150);
char *slovo;
vector<string> vec;
vector<int>vecb;
slovo=strtok(s,raz);

while (slovo!=NULL)
{
    string a = string(slovo);
    vec.push_back(a);
    vecb.push_back(1);
    if (vec.size()>1)
    {
        for (int i=0; i<vec.size()-1;i++)
        {
            if(vec.back()==vec[i])
               {
                   vec.pop_back();
                   vecb[i]++;
                   vecb.pop_back();
               }
        }
    }



    slovo=strtok(NULL,raz);
} // сейчас у нас есть вектор слов, можно добавить вектор цифр
for (int i = 0; i<vec.size();i++ )
{
    cout<<"Слово "<<vec[i]<<" встречено в тексте в количестве:"<<vecb[i]<<endl;
}

}
