//Generate a series of Odd numbers and even numbers (up to 20) using for  loop
#include <iostream>
using namespace std;
int main() {
int odd = 1;
int even = 2;
cout<< "Odd\t\tEven" << endl;
while (odd <= 19 && even <= 20) {
cout<< odd << "\t\t" << even << endl;
odd += 2;   
even += 2;}  
return 0;}