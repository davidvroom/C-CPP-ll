#include "main.ih"

int main()
{
	cout << "Testcase 1:\n";
	Demo testMoveCon(factory());	// move constructor could be used

	cout << "\nTestcase 2:\n";
	Demo testCopyAss;
	testCopyAss = testMoveCon;		// copy assignment is used

	cout << "\nTestcase 3:\n";
	Demo testMoveAss;
	testMoveAss = factory();		// move assignment is used

	cout << "\nDestructors:\n";
}