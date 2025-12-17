// Write a program to print the table of characters that are equivalent to the Ascii codes from 97 to 122.
//The program will print 10 characters per line.
#include <iostream>
using namespace std;
int main() {
    for (int i = 97; i <= 122; ++i) {
        cout << (char)i << " "; 
        if ((i - 96) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}
