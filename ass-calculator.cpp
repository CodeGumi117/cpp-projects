#include <iostream>

using namespace std;
int main() {
	while (true) {
		cout << "1st Operand: ";
	    int num1;
    	cin >> num1;

	    cout << "2nd Operand: ";
	    int num2;
	    cin >> num2;
  
     	cout << "Operator (+, -, /, *): ";
    	char op;
    	cin >> op;
 
		if (op == '/') {
			cout << num1 / num2 << "\n\n";
			cout << "Do you wanna know the rest of this division? (y/n): ";
			char l;
			cin >> l;
			if (l == 'y') {
				cout << "\n\nThe rest of this division is " << num1 % num2;
			}
			else {
				return 1;
			}
			if (op == '*') { cout << num1 * num2 << "\n\n"; }
			else if (op == '-') { cout << num1 - num2 << "\n\n"; }
			else if (op == '+') { cout << num1 + num2 << "\n\n"; }

		}
return 0;
}
