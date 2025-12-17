//Write a program that prints the table of number 5 up to 15 (i.e 1*5=5 ……… 15*5=75)
#include <iostream>
using namespace std;
int main() {
int number = 5;
for (int i = 1; i <= 15; ++i) {
cout << i << " * " << number << " = " << i * number << endl;
return 0;}
}
