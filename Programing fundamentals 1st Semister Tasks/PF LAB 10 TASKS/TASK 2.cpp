//Task # 2 
//Create a class called MyClass that has one int member. 
//Include member functions to initialize it to 0, to initialize it to an integer value, to display it. 
//Write a program to test this class
#include <iostream>
using namespace std;

class MyClass {
private:
    int num;  // Integer member variable

public:
    // Default constructor to initialize the member to 0
    MyClass() {
        num = 0;
    }

    // Function to initialize the member with a given value
    void initialize(int value) {
        num = value;
    }

    // Function to display the value of num
    void display() const {
        cout << "Value: " << num << endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // Display the initial value (should be 0)
    cout << "Initial value (should be 0): ";
    obj.display();

    // Initialize the object with a specific value
    obj.initialize(42);
    cout << "After initializing to 42: ";
    obj.display();

    return 0;
}