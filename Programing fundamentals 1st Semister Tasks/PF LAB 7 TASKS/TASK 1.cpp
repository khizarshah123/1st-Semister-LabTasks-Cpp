//Create a function called Largernum()  that receives two integer 
//numbers as arguments and returns the Larger number out of them. 
#include <iostream>
using namespace std;
int Largernum(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
    int larger = Largernum(num1, num2);
    cout << "The larger number is: " << larger << endl;
    return 0;
}
