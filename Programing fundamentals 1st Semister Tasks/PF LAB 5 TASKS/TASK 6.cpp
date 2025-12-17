//Task # 6: Write a C++ program that takes two characters as input and display all the characters between these two characters. And also count the number of characters
//Test data
//Enter first character: d
//Enter second character: p
//Expected output
//Characters between ‘d’ and ‘p’ are: e f g h i j k l m n o 
//and Characters count : 11
#include <iostream>
using namespace std;

int main() {
    char first_char, second_char;
    cout << "Enter first character: ";
    cin >> first_char;
    cout << "Enter second character: ";
    cin >> second_char;
    if (first_char > second_char) {
        char temp = first_char;
        first_char = second_char;
        second_char = temp;
    }
    cout << "Characters between '" << first_char << "' and '" << second_char << "' are: ";
    
    int count = 0;
    for (char ch = first_char + 1; ch < second_char; ++ch) {
        cout << ch << " ";
        count++;
}
    cout << endl << "Characters count: " << count << endl;
    return 0;}
