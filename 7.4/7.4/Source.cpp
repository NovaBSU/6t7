#include <string>
#include <iostream>

using namespace std;

void max_two(int &a, int&b) {
	if (a > b){
		cout << a;
	}
	else if (b > a) {
		cout << b;
	}
	else {
		cout << "Error. Same number input.";
	}
}

int main() {
	int a = 0;
	int b = 0;

	cout << "Please Input Number A" << endl;
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(256000, '\n');
		cout << "Error, please reinput number" << endl;
		cin >> a;
	}

	cout << "Please Input Number B" << endl;
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(256000, '\n');
		cout << "Error, please reinput number" << endl;
		cin >> b;
	}

	max_two(a, b);
}