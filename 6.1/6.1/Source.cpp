#include<string>
#include<iostream>

using namespace std;

char zero[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int one[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
string two[4] = { "a", "b", "c", "d" };
double three[18] = { 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8 };

int longOne[8];
string longTwo[2];
char longThree[3];
double longFour[5];
int longFive[6];

string shortOne[4] = { "", "a", "aa", "aaa" };
int shortTwo[5] = { 1, 10, 100, 1000, 10000 };
bool shortThree[4] = { true, false, false, true };
double shortFour[4] = { 5.6, 1.8, 4.34, 7.65 };

int main() {
	longOne[1] = { 1 };
	longOne[2] = { 1 };
	longOne[3] = { 1 };
	longOne[4] = { 1 };
	longOne[5] = { 1 };
	longOne[6] = { 1 };
	longOne[7] = { 1 };
	longOne[8] = { 1 };

	longTwo[1] = "Hello";
	longTwo[2] = "Bye";

	longThree[1] = 'A';
	longThree[2] = 'B';
	longThree[3] = 'C';

	longFour[1] = 1.0;
	longFour[2] = 2.0;
	longFour[3] = 3.0;
	longFour[4] = 4.0;
	longFour[5] = 5.0;

	longFive[1] = 10;
	longFive[2] = 20;
	longFive[3] = 30;
	longFive[4] = 40;
	longFive[5] = 50;
	longFive[6] = 60;
}