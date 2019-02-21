#include "pch.h"
#include <iostream> // adds a library
#include <string>

using namespace std; // standard namespace - contains cout

void oneLiner() { cout << "it is possible to write this on one line"; }
void firstProgramme() {
	cout << "this is a test" << endl;

	/*
		cout stands for console output
		<< means everything after goes inside cout
		"" for string
		; line end

		instead of using the std namespace can write cout as -
			std::cout << "this is a test";
	*/

	oneLiner();
}
void variables() {
	int A; // creating an integer called A
	A = 4; // variable assignment / initialisation

	// int A = 4; this would also work
	cout << A << endl; // end of the line
	cout << &A << endl; // print the address of the variable

	A = 10;
	cout << A << endl;
	cout << &A << endl; // the memory address will not change

	/*
		1. Variables can't have the same name
		2. Variable name can't start with a number
		3. Variable name can't contain a space (underscores are fine)
		4. Variable names should be self-descriptive. There is no need for hungarian notation
	*/
}
void typeOfVariables() {
	int a = 40, b = 0, c = 20; // -2 billions to 2billions, 4 bytes

	// if you try to cout a value before assigning a value it could use a previous value held in memory

	cout << "a : " << a << " address : " << &a << endl;
	cout << "b : " << b << " address : " << &b << endl;
	cout << "c : " << c << " address : " << &c << endl;

	short int t1 = 5; // -32768 to 32767, 2 bytes
	short t2 = 6; // this is also a short integer

	cout << t1 << endl;
	cout << t2 << endl;

	float t3 = 5.12; // 4 bytes up to 38 0s
	double t4 = 5.12; // 8 bytes up to 308 0s, greater precision

	cout << t3 << endl;
	cout << t4 << endl;

	char t5 = 'a'; // character not a string
	cout << t5 << endl;

	string t6 = "Hello World!"; // string
	cout << t6 << endl;

	string x = "part1", y = "part2", combinedStrings = x + " " + y;
	cout << combinedStrings << endl;

	bool t7 = false; // 1 or 0, true or false
	cout << t7 << endl;
	t7 = a; // you can use numbers as truthy values, anything other than 0 is true
	cout << t7 << endl;

	// for an unsigned short int, 0 to 65535
	unsigned short t8 = 37000;
	cout << t8 << endl;

	const string myName = "WEBBARR";
	cout << myName << endl;
}
void initVariables() {
	cout << "Exercise 2" << endl;

	char a = 'a';
	int b = 45646;
	short c = 1;
	float d = 5.12;
	double e = 5.43123;

	cout << "Name: a, Value: " << a << " , Address: " << &a << endl;
	cout << "Name: b, Value: " << b << " , Address: " << &b << endl;
	cout << "Name: c, Value: " << c << " , Address: " << &c << endl;
	cout << "Name: d, Value: " << d << " , Address: " << &d << endl;
	cout << "Name: e, Value: " << e << " , Address: " << &e << endl;

	cout << endl;

}
void outputMessage(int roomNumber, int floorLevel, string firstName, string lastName, bool specificMealRequests)
{
	cout << endl;

	cout << firstName + " " + lastName + " is staying in room " << roomNumber << " on floor " << floorLevel << endl;
	if (specificMealRequests)
	{
		cout << "They have specific meal requests";
	}
	else
	{
		cout << "They have no specific meal requests";
	}

	cout << endl;
}
void roomData()
{
	cout << "Exercise 3" << endl;
	outputMessage(1, 2, "John", "Doe", false);
	outputMessage(2, 2, "Jane", "Doe", true);
}
void dataFromUser() {
	string name, surname;

	cout << "Enter your first name: ";
	cin >> name;

	cout << "Enter your surname: ";
	cin >> surname;

	cout << "Welcome " << name << " " << surname;
}
string getSomeData() {
	string firstName, lastName;
	int age;

	cout << "What's your first name?: ";
	cin >> firstName;

	cout << "What's your last name?: ";
	cin >> lastName;

	cout << "Okay " << firstName << " " << lastName << ", how old are you?: ";
	cin >> age;

	cout << "You're " << age;

	return firstName;
}
void swapNumbers(string name)
{
	int x, y, n;

	cout << "Okay " << name << " give me a number for x: ";
	cin >> x;

	cout << "Give me a number for y: ";
	cin >> y;

	n = y, y = x, x = n;

	cout << "x is now equal to " << x << " and y is equal to " << y;
}



// main will always run first
int main() {
	variables();
}

