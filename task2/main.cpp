#include <iostream>
#include "func.h"

using namespace std;

int main() {
    char* binaryNumber;
    int length;

    cout << "Enter length of your binary number so we can allocate some memory for it:\n";
    cin >> length;

    binaryNumber = new char[length + 1];

    cout << "Enter the binary itself:\n";
    cin >> binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber, length);

    cout << "Here's the decimal number: " << decimalNumber << endl;

    delete[] binaryNumber;

    return 0;
}
