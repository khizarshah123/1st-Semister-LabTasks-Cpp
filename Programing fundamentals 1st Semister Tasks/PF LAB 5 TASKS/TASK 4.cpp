//

//Task # 4: Consider Task=#1 and separate vowels and consonants.

//Expected Output 

//Vowels		Consonants

//A			      B

//E			      C
#include <iostream>
using namespace std;

int main() {
    // Print the headers for Vowels and Consonants
    cout << "Vowels\t\tConsonants" << endl;

    // Loop through ASCII values from 'A' to 'Z' (65 to 90)
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        // Check if the character is a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            // Print vowels
            cout << ch;
        } else {
            // Print consonants
            cout << "\t\t" << ch << endl;
        }
    }

    return 0;
}