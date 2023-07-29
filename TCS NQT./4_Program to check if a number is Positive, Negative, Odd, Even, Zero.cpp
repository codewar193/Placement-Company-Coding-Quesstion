#include <iostream>
using namespace std;

int main()
{
	int num = 10;

	// Checking for positive, negative or zero
	if (num > 0) {
		cout << "Positive number" << endl;
	}
	else if (num == 0) {
		cout << "Zero" << endl;
	}
	else {
		cout << "Negative number" << endl;
	}

	// Checking for odd and even
	if (num % 2 == 0) {
		cout << num << " is Even" << endl;
	}
	else {
		cout << num << " is Odd" << endl;
	}
	return 0;
}
