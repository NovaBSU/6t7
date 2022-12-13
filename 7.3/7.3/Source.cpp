#include <iostream>
#include <string>
using namespace std;

string greetings(string &userName, string &greeting) {
string greetString = userName + ", " + greeting;
return greetString;//return newly formed string
}

int main() {
	string userName = "NULL";//declare variable to store userName
	string userGreeting = "NULL";//declare variable to store greeting

	cout << "Please give your name"<< endl;//ask user for name input
	cin >> userName;//store input

	cin.clear();
	cin.ignore(256000, '\n');

	cout << "Please give your greeting" << endl;//ask user for greeting input
	getline(cin, userGreeting);//store input

	string greeting = greetings(userName, userGreeting); //invoke functionand assign returned value to string variable
	cout << greeting << endl;//output the greeting

	return 0;
}