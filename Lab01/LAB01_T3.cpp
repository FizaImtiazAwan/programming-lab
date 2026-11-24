/*Lab: 01
Name: Fiza Imtiaz
Roll No: 26-SE-23
Date: 24-November-2026
Purpose: Find and fix 5 bugs
*/
#include <iostream>
using namespace std;//BUG 1: Missing ; after std.

int main()
 {
	cout << "Welcome to the lab!" << endl;//BUG 2: Missing ; after endl.
	cout << "Today we learn \"C++\"." << endl;//BUG 3: Cout should be cout.
	cout << "Files are in C:\\Lab01" << endl;//BUG 4: Missing second backslash.
	cout << "Bye!" << endl;//BUG 5: Missing " after Bye.
	return 0;
}