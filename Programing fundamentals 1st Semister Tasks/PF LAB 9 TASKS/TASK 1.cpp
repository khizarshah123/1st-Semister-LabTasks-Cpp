//Write a program that reads a group of numbers from the user and places them in an array of type float.
//Once the numbers are stored in the array, the program should print them. Use pointer notation whenever possible.
#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter the number of elements: ";
    cin >> n;
    float *arr = new float[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
    cout << "Number " << (i + 1) << ": ";
       cin >> *(arr + i); 
}
    cout << "\nThe numbers you entered are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Number " << (i + 1) << ": " << *(arr + i) << endl; 
    }
    delete[] arr;
    return 0;}
