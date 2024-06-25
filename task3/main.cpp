#include <iostream>
#include "task30t.h"
#include "task30t.c"
#include "task41.h"

using namespace std;

int main()
{
    cout << "Here's task 3_0:" << endl;

    char chArra[10] = {'a', '1', 'b', '2', 'c', '3', 'd', '4', 'e', '5'};

    cout << "Original array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << chArra[i] << " ";
    }
    cout << endl;

    replaceDigits(chArra, 10);

    cout << "Modified array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << chArra[i] << " ";
    }
    cout << "\n" << endl;


    cout << "And that's a 4_1:" << endl;

    char myString[MAX_LENGTH] = "Hello   world   how   are   you?";
    cout << "Original string: " << myString << endl;

    char* compressedString = spaceCleaner(myString);

    cout << "Compressed string: " << compressedString << endl;

    delete[] compressedString;

    return 0;
}
