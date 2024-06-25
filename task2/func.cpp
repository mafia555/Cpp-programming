#include "func.h"
#include <cmath>

int binaryToDecimal(char* binaryString, int length) {
    int decimal = 0;

    for (int i = 0; i < length; i++) {
        if (binaryString[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }

    return decimal;
}
