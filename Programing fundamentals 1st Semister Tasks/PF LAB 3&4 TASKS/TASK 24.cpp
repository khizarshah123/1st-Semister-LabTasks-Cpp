//Write a C++ program that takes a single word from the user and prints only the first character
#include <iostream>
using namespace std;
int main() {
string word;
cout<< "Enter a word: ";
cin>> word;
cout<< "First letter: " << word[0] << endl;
return 0;}
