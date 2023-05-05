#include <iostream>
#include <string>
#include "LogElement.h"
#include "LogElement.cpp"
using namespace std;

int main() {
	LogicalElement A;
	LogicalElement B;

	cout << "Before:" << endl;
	cout << "A: " << A.Statement << endl;
	cout << "B: " << B.Statement << endl;

	A.Statement = true;
	B.Statement = true;

	cout << "After:" << endl;
	cout << "A: " << A.Statement << endl;
	cout << "B: " << B.Statement << endl;


    return 0;
}
