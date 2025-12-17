//Task # 4 Create a class that includes a data member that holds a “Serial number” for each object created from the class.
// That is, the first object created will be numbered 1, the second 2, and so on.
#include <iostream>
using namespace std;

class SerialNumber {
private:
    static int count;  // Static variable to keep track of the number of objects created
    int serial_number; // Data member to store the serial number of each object

public:
    // Constructor to assign a serial number to each object
    SerialNumber() {
        count++;  // Increment the static count every time a new object is created
        serial_number = count;  // Assign the current count as the serial number
    }

    // Function to display the serial number of the object
    void displaySerialNumber() const {
        cout << "Serial Number: " << serial_number << endl;
    }
};

// Initialize the static count variable to 0
int SerialNumber::count = 0;

int main() {
    // Create three objects of the SerialNumber class
    SerialNumber obj1;
    SerialNumber obj2;
    SerialNumber obj3;

    // Display the serial numbers for each object
    obj1.displaySerialNumber();  // Serial Number: 1
    obj2.displaySerialNumber();  // Serial Number: 2
    obj3.displaySerialNumber();  // Serial Number: 3

    return 0;
}
