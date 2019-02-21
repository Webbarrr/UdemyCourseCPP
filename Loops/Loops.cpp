#include "pch.h"
#include <iostream> // adds a library
#include <string>

using namespace std; // standard namespace - contains cout

void forLoops() {
	/*
	for (initialization; condition; inc/dec)
		instruction-to-repeat;

	or

	for (initialization; condition; inc/dec)
	{
		instruction-to-repeat;
		second-instruction;
		third-instruction;
	}
*/

	for (int i = 0; i < 5; i++)
		cout << i << endl;

	int arr[4];

	for (int i = 0; i < 4; i++)
	{
		arr[i] = i;
		cout << arr[i];
	}
}
/*
Exercise 1.

Write a program that asks the user to input an integer number. Then starting from that
number the program prints out in the console next 100 numbers.
*/

void ex1()
{
	cout << "Exercise 1" << endl;
	int n;

	cout << "Give me a number: ";
	cin >> n;

	for (int i = 0; i < 101; i++)
		cout << n++ << endl;
}

/*
Exercise 2.

Write a program that prints out in the console all upper case and lower case letters from
the alphabet (A-Z).
*/

void ex2()
{
	cout << endl;
	cout << "The alphabet" << endl;
	char c1, c2;
	for (int i = 65, j = 97; i < 91; i++, j++)
	{
		c1 = i, c2 = j;
		cout << c1 << " " << c2 << " ";
	}
}

/*
Exercise 3.

Write a program that asks the user to input any number (integer or floating point) and
the n-th power (integer) the number should be raised to. Then calculate the result of the
exponentiation of this number to the said power.
*/

void ex3()
{
	cout << endl;
	cout << "n-th powers" << endl;

	double n, p, result = 1;

	cout << "Give me a number: ";
	cin >> n;

	cout << "Give me another number: ";
	cin >> p;

	for (int i = 0; i < p; i++)
	{
		result *= n;
	}

	cout << "The number " << n << " to the power of " << p << " is equal to " << result << endl;
}

/*
Exercise 4.

Write a program that asks the user to input any integer number n. Then calculate the result
of the factorial operation (n! - 1*2*3*...*n). Print in the console result of the n factorial
as well as the factorial of numbers before n.
*/

void ex4()
{
	cout << endl;
	cout << "Factorials" << endl;

	int n = 0, result = 1;
	cout << "Give me a number: ";
	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		result *= i;
		cout << i << "! = " << result << endl;
	}
}

/*
Exercise 5.

Write a program that asks the user to input an integer number. Then the program should print out
in the console the inputted number of asterisks (*). Furthermore, it should break the line (endl)
every 5 asterisks printed.
*/

void ex5()
{
	cout << endl;
	cout << "Grids" << endl;

	int n = 0;
	cout << "Give me a number: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << "*";
		if (!(i % 5))
			cout << endl;
	}

}

/*
Exercise 6.

Write a program that asks the user to input 5 integer numbers (store them in a 5 element array).
Then it checks if the inputted numbers were odd or even and prints that information out in the console.
*/

void ex6()
{
	cout << endl;
	cout << "Odds / evens" << endl;

	int nums[5];

	// build the array from user input
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "/5: Give me a number: ";
		cin >> nums[i];
	}

	// output the result
	for (int i = 0; i < 5; i++)
		cout << "The number " << nums[i] << " is " << (nums[i] % 2 ? "odd" : "even") << endl;
}

/*
	a while loop will check the condition before being executed
	a do while will perform the task at least once before checking the condition
*/
void whileLoop() {
	int i = 0;
	
	// while loop
	while (i < 10) {
		cout << i << endl;
		i++;
	}
	i = 0;

	// while loop with post incrementation
	while (i++ < 10) { // is i lower than 10, yes, then increase i
		cout << i << endl;
	}
	i = 0;

	// while loop pre incrementation
	while (++i < 10) { // increase i, is i lower than 10
		cout << i << endl;
	}

	while (i--) // execute until i == 0
		cout << i << endl;
	i = 10;

	while (--i)
		cout << i << endl;
}
void whileLoopExpanded() {
	const int sizeOfArray = 10;
	int i = 0;
	int array[sizeOfArray];

	while (i < sizeOfArray) {
		array[i] = 10 * i;
		cout << array[i++] << endl;
	}
}
void doWhileLoops() {
	const int sizeOfArray = 10;
	int i = 0;
	int array[sizeOfArray];
	
	do {
		cout << "lala";
	} while (i);
}

void pinNumber() {
	int pin = 0, checkPin = 0;

	cout << "Give me a 4 digit pin-number: ";
	cin >> pin;

	while (pin != checkPin) {
		cout << "Re-enter your pin: ";
		cin >> checkPin;
	}

	cout << "Correct pin!" << endl;
}
void pinNumberWithLimitedAttempts() {
	int pin = 0, checkPin = 0, attempts = 1;

	cout << "Give me a 4 digit pin-number: ";
	cin >> pin;

	while (pin != checkPin && attempts <= 5) {
		cout << "Attempt " << attempts << "/5" << endl;
		cout << "Re-enter your pin: ";
		cin >> checkPin;
		attempts++;
	}

	cout << (pin == checkPin ? "Correct pin!" : "You have failed.") << endl;
}

void intLen() {
	int n = 123456789; // 4 digits
	int len = 1, tmp = n;

	while (tmp /= 10) {
		len++;
	}

	/*
		tmp = 1234, true
		/ 10 = 123, true
		/ 10 = 12, true
		/ 10 = 1, true
		/ 10 = 0, false

		the result of tmp /= 10 is treated as a boolean
	*/

	cout << "the number " << n << " has " << len << " digits." << endl;
}
void multiplicationTable() {
	/*
		1	2	3	4	5	....
		2	4	6	8	10	....
		3	6	..
		4	..
		5	..
	*/

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout.width(4);
			cout << i * j;
		}
			

		cout << endl;
	}
}

void printPlane() {
	int array[3][3];
	int x = 1;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			array[i][j] = x++;
			cout.width(4);
			cout << array[i][j];
		}

		cout << endl;
	}
}

void updatePlane() {
	char array[3][3];

	// build a plane
	char n = '1';

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			array[i][j] = n++;
		}
	}

	// get input from the user to update a grid
	bool run = true;
	int x = 0, y = 0;
	
	while (run) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout.width(5);
				cout << array[i][j];
			}
			cout << endl;
		}

		// get x & y
		cout << "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" << endl;

		cout << "x: ";
		cin >> x;

		cout << "y: ";
		cin >> y;

		array[y - 1][x - 1] = 'X';
		system("cls");
	}
}

void test()
{
	char coordinates[3][3];
	char startingValue = '1';

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			coordinates[i][j] = startingValue;
			startingValue++;
		}
	}

	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << endl << endl;
			for (int j = 0; j < 3; j++)
			{
				cout.width(5);
				cout << coordinates[i][j]; //for debbuging purpose add this line:  cout <<  " i = " << i << " j = " << j;
			}
			cout << endl << endl;
		}

		int xCoordinate, yCoordinate;

		cout << "Input x and y coordinates of a cell to put X (7 is on x:1 y:3)" << endl;

		cout << "x: ";
		cin >> xCoordinate;

		cout << "y: ";
		cin >> yCoordinate;

		coordinates[yCoordinate - 1][xCoordinate - 1] = 'X';
		system("cls");
	}
}


int main() {
	printPlane();
	system("cls");
	updatePlane();
}