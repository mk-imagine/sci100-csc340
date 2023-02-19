#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;

int main() {
    int arrSize;
    string prompt = "Please enter in the greatest number of asterisks you would like in your "
                    "diamond: ";
    cout << prompt;
    cin >> arrSize;

    // Check to see if the number of asterisks is even or odd
    bool wasEven = arrSize % 2 == 0 ? true : false;

    // If the number of asterisks is even, add spaces between them to create an odd-sized array,
    // otherwise keep the array size the same
    arrSize = arrSize % 2 == 0 ? arrSize * 2 - 1 : arrSize;
    cout << "Array Size: " << arrSize << "\n";
    char starAry[arrSize][arrSize];
    int count = 1;
    for (int i = 0; i < arrSize; i++) {
        // set the offset to determine which index gets a blank character vs an asterisk. this
        // values is the size of the array minus the number of asterisks divided by 2.
        int offset = (arrSize - count) / 2;
        for (int j = 0; j < arrSize; j++) {
            // put in a blank character if the column index is less than or greater than the area
            // occupied by the asterisks. otherwise put in an asterisk
            if (j < offset || j > arrSize - offset - 1) {
                starAry[i][j] = ' ';
            } else {
                starAry[i][j] = '*';
            }
        }
        // increment the count by two if the row index is less than the midpoint, decrement if
        // the row index is greater than the midpoint
        count = i < (int)(arrSize / 2) ? count + 2: count - 2;
    }

    // this handles the case where the greatest number of asterisks is even.  replaces all extra
    // asterisks (e.g. every other asterisk) with spaces to produce the desired format.
    if (wasEven) {
        for (int i = 0; i < arrSize; i++) {
            for (int j = 0; j < arrSize; j++) {
                // if the row is even, put spaces on the even pair of indices, if the row is odd,
                // put spaces in the odd pair of indices
                if ((i % 2 == 0 && j % 2 == 0) ||(i % 2 == 1 && j % 2 == 1)) {
                    starAry[i][j] = ' ';
                }
            }
        }
    }

    // print the array
    for (int i = 0; i < arrSize; i++) {
        for (int j = 0; j < arrSize; j++) {
            cout << starAry[i][j];
        }
        cout << "\n";
    }
}