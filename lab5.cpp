#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	char str[255];
	cin.getline(str, 255);
	char * speech = strtok(str, " ,.-"); // the second parameter is the separator
	map<string, int> words;


	while (speech != NULL){	// while there are lexemes
		words[speech]++;
		speech = strtok(NULL, " ,.-;:?!«»");
	}
	cout << endl<<"Word\tTotal"<<endl;
	for (auto it = words.begin(); it != words.end(); it++){
		cout << (it->first)<<"\t";
		cout << (it->second) << endl;
	}
	return 0;
}
