//: Write a C++ program that takes a line of text from the user and prints only the first word 
#include <iostream>
#include <sstream>  // For using stringstream
using namespace std;
int main() {
string line;
cout<< "Enter a line of text: ";
getline(cin, line); 
// Use stringstream to extract the first word
stringstream ss(line);
string firstWord;
// Extract the first word
ss>>firstWord;
cout<< "First word: " << firstWord << endl;
return 0;}
