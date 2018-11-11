#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(){
	setlocale(0, "");
	char simbols[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_.";
	bool check=false;

	cout << "Введите почту: ";
	char s[100];
	cin.getline(s, 100);

	for(int i=0; s[i] != '@'; i++){
		check = 0;
		// Cверяет символ почты с допустимыми сиволами
		for (int j = 0; j < strlen(simbols); j++){
			if (s[i] == simbols[j]) check = 1;
		}

		if (!check) break;
	}

	if(check) cout << "Почта прошла проверку";
	else cout << "Почта НЕ прошла проверку";
	return 0;
}