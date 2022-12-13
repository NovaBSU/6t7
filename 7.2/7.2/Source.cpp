#include <iostream>
using namespace std;

void sum(int &a, int &b, int &c) {
	int d = a + b + c;
	cout << d << endl;
}

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Input Number A" << endl;
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(256000, '\n');
		cout << "Invalid Number" << endl;
		cin >> a;
	}

	cout << "Input Number B" << endl;
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(256000, '\n');
		cout << "Invalid Number" << endl;
		cin >> b;
	}

	cout << "Input Number C" << endl;
	cin >> c;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(256000, '\n');
		cout << "Invalid Number" << endl;
		cin >> c;
	}

	sum(a, b, c);

	return 0;

}