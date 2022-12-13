#include<string>
#include<iostream>

using namespace std;

string dumb[5] = { "Car", "Train", "Tractor", "Skiff", "Tank" };

int main() {
	cout << dumb[3] << endl;
	cout << dumb[0] << endl;
	cout << dumb[2] << " " << dumb[4] << endl;
	cout << dumb[0] << " " << dumb[3] << " " << dumb[1] << endl;
}