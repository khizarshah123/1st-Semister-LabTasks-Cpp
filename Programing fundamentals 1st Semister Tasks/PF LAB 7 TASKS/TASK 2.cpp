//Write a function called zeroSmaller() that takes two integer 
//arguments by reference and then sets the smaller of the twonumbers to 0. 
//Write a main function to exercise this function.
#include <iostream>
using namespace std;
void zeroSmaller(int &num1, int &num2) {
    if (num1 < num2) {
        num1 = 0;  
    } else{
    }
}
int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
    zeroSmaller(num1, num2);
    cout << "After calling zeroSmaller():" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    return 0;
}