#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {

	//Declaration of variables
	double num1, num2, result;

	cout << "Enter your numbers: " << endl;
	//Storing our variables
	cin >> num1;
	cin >> num2;

	cout << "These are your results: " << endl;

	//Sum
	result = sum(num1, num2);
	cout << "Sum: " << endl;
	cout << result << endl;

	//Difference
	result = difference(num1, num2);
	cout << "Difference: " << endl;
	cout << result << endl;

	//Product
	result = product(num1, num2);
	cout << "Product: " << endl;
	cout << result << endl;

	//Quotient
	result = quotient(num1, num2);
	cout << "Quotieng: " << endl;
	cout << result << endl;
}
