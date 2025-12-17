#include <iostream>
#include <conio.h>  // Include conio.h for getch() function
using namespace std;
int main() {
int num = 5;  // Given number
int square = num * num;  // Calculate square of the number
cout << "Press the spacebar to see the square of the number.\n";
// Wait for the user to press the spacebar
while (true) {
if (_kbhit()) {  // Check if a key has been pressed
char ch = _getch();  // Get the pressed key
if (ch == 32) {  // ASCII value of spacebar is 32
cout << "The square of " << num << " is " << square << endl;
break;  // Exit the loop after displaying the square
}
}
}
return 0;}