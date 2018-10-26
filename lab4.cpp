#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
	regex re("^([a-zA-Z0-9-_.]+)@([a-zA-Z0-9]+)([.]{1})([a-zA-Z0-9-_.]+)$");
	string s;
	cin >> s;
	if (regex_match(s, re)) cout << "YES";
	else cout << "NO";
	return 0;
}