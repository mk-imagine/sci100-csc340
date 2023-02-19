
#include <iostream>
#include <string>
using namespace std;

int main() {

	int number;
	string prompt = "Please enter an integer then press Enter key: ";
	cout << prompt;
									// or while (cin.fail()) {}
	while (!(cin >> number)) {		// If input was not an integer       
		cin.clear();				// Reset error flag         
		cin.ignore(1000,'\n');		// Skip next 1000 chars or until newline  
		cout << prompt;
	}
	cout << "Your integer:\t" << number << endl;
	cout << "Thank you." << endl;
	return 0;
}