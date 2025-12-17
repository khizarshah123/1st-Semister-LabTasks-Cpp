//Write a//C++ program that takes a single character as input 
//And tells whether it is a vowel or a consonant (Use Conditional operator)
#include <iostream>
using namespace std;
int main(){
char ch;
cout << "Enter a character: ";
cin >> ch;
(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
?cout << ch << " is a vowel"
:cout << ch << " is a consonant";
return 0;}


