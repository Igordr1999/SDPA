#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Notebook{
	string last_name;
	string first_name;
	string patronymic;
	int tel;
	int birth_day;
	int birth_month;
	int birth_year;
};

int download_txt_data(Notebook * book) {
	ifstream f("data.txt");
	int n = 0;
	for (int i = 0; !f.eof(); i++) {
		f >> book[i].last_name >> book[i].first_name >> book[i].patronymic;
		f >> book[i].tel >> book[i].birth_day >> book[i].birth_month >> book[i].birth_year;
		n++;
	}
	f.close();
	return n;
}

int download_bin_data(Notebook * book) {
	ifstream f("from.bin", ios::binary);
	int n = 0;
	for (int i = 0; !f.eof(); i++) {
		f >> book[i].last_name >> book[i].first_name >> book[i].patronymic;
		f >> book[i].tel >> book[i].birth_day >> book[i].birth_month >> book[i].birth_year;
		n++;
	}
	f.close();
	return n;
}

void upload_bin_data(Notebook * book, int n) {
	ofstream t("to.bin", ios::binary);

	for (int i = 0; i < n; i++) {
		t << book[i].last_name << " " << book[i].first_name << " " << book[i].patronymic << " ";
		t << book[i].tel << " " << book[i].birth_day << " " << book[i].birth_month << " " << book[i].birth_year << " ";
	}

	t.close();
}

bool my_compare(const Notebook &a, const Notebook &b) {
	if (a.last_name != b.last_name) return a.last_name < b.last_name;
	if (a.first_name != b.first_name) return a.first_name < b.first_name;
	else return a.patronymic < b.patronymic;
}

void my_sort(Notebook * book, int n) {
	sort(book, book + n, my_compare);
}

void show_person_data(Notebook * book, int position) {
	if (position == -1) cout << "Not found =(" << endl;
	else {
		cout << "This is Person " << position + 1 << "." << endl;
		cout << "  Fullname: " << book[position].last_name << " " << book[position].first_name
			<< " " << book[position].patronymic << endl;
		cout << "  Tel: " << book[position].tel << endl;
		cout << "  Birthday: " << book[position].birth_day << "." << book[position].birth_month
			<< "." << book[position].birth_year << endl;
		cout << endl;
	}
}

void print_data(Notebook * book, int n) {
	cout << "Notebook: " << endl << endl;
	for (int i = 0; i < n; i++) {
		show_person_data(book, i);
	}
}

void show_menu() {
	system("cls");
	cout << "Menu" << endl;
	cout << "1) Download data from txt" << endl;
	cout << "2) Download data from bin" << endl;
	cout << "3) Upload data to bin" << endl;
	cout << "4) Sort data" << endl;
	cout << "5) Search data" << endl;
	cout << "6) Print data" << endl;
	cout << "7) Exit" << endl;
}

int binary_search(Notebook *book, int size, string value){
	int first = 0,             // First array element
		last = size - 1,       // Last array element
		middle,                // Mid point of search
		position = -1;         // Position of search value
	bool found = false;        // Flag

	while (!found && first <= last){
		middle = (first + last) / 2;     // Calculate mid point
		if (book[middle].last_name == value) {      // If value is found at mid
			found = true;
			position = middle;
		}
		else if (book[middle].last_name > value)  // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;           // If value is in upper half
	}
	return position;
}

int main() {
	Notebook book[50];
	string search_name = "Shuster";
	int n = 0, choise, position;

	while (true) {
		show_menu();
		cout << "Enter your answer: ";
		cin >> choise;
		switch (choise) {
		case 1:
			n = download_txt_data(book);
			break;
		case 2:
			n = download_bin_data(book);
			break;
		case 3:
			upload_bin_data(book, n);
			break;
		case 4:
			my_sort(book, n);
			break;
		case 5:
			cout << endl << "Searching by fullname: ";
			cin >> search_name;
			my_sort(book, n);
			position = binary_search(book, n, search_name);
			show_person_data(book, position);
			break;
		case 6:
			print_data(book, n);
			break;
		case 7:
			return 0;
		default:
			cerr << "Incorrect input" << endl;
			break;
		}
	}
}