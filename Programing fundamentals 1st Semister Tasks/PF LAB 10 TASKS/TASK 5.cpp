//Task # 5 Demonstrate the use of the following: 
//Constructor 
//Access specifiers  private and public. 
//Set() and ge() functions.
//static class members.
#include <iostream>
using namespace std;

class MyClass {
private:
    int data;  // Private data member to store data
    static int count;  // Static data member to keep track of the number of objects created

public:
    // Constructor: Initializes the data member and increments the count
    MyClass() {
        data = 0;  // Default value for data
        count++;   // Increment the static count each time an object is created
    }

    // Set function to assign a value to the private data member
    void setData(int value) {
        data = value;
    }

    // Get function to retrieve the value of the private data member
    int getData() const {
        return data;
    }

    // Function to get the total number of objects created (static member function)
    static int getCount() {
        return count;
    }
};

// Initialize the static member variable
int MyClass::count = 0;

int main() {
    // Create three objects of MyClass
    MyClass obj1, obj2, obj3;

    // Set values for the objects using the setData function
    obj1.setData(10);
    obj2.setData(20);
    obj3.setData(30);

    // Get and display values for each object using the getData function
    cout << "Object 1 data: " << obj1.getData() << endl;
    cout << "Object 2 data: " << obj2.getData() << endl;
    cout << "Object 3 data: " << obj3.getData() << endl;

    // Display the count of objects created using the static member function
    cout << "Total number of objects created: " << MyClass::getCount() << endl;

    return 0;
}
