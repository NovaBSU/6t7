#include<string>
#include<iostream>

using namespace std;

int main() {
	int user[10];
	int userInput = 0;
	for (int i = 0; i < 10 ; i++) {
		cout << "Please Input Your Number" << endl;
		cin >> userInput;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(256000, '\n');
			cout << "Input Error. Please Input Your Number" << endl;
			cin >> userInput;
		}
		user[i] = userInput;
	}
	for (int x = 0; x < 10; x++) {
		cout << user[x] << endl;
	}
}