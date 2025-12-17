//Write a function called swap() that interchanges two int values 		
//passed to it by the calling program
#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;  
    a = b;        
    b = temp;      
}
int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
    cout << "\nBefore swap:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    swap(num1, num2);

    cout << "\nAfter swap:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}