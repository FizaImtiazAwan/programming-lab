/* Lab: 01
Name: Fiza Imtiaz
Roll No: 26-SE-23
Date: 24-November-2026
Purpose: Explain error with AI then fix and verify it
*/
/* Error : no match for 'operator<<' (operand types are 'std::basic_ostream <char>'
*          and '<unresolved overloaded function type>')
* AI tool: Claude
* AI said: The error occurred because I used end instead of endl.
*          The correct manipulator is endl.
* Fix    : Replaced end into endl in second cout line to fix the compilation error.
* Verdict: AI was correct, because after changing "end;" to "endl;" program
*          compiled and gave the expected output.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Lab 01 complete!" << endl;
	cout << "Next Lab: Variables and Input" << endl;
	return 0;
}