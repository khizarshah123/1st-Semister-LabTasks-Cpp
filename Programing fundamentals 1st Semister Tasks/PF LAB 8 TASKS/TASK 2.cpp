//Create a Structure called Students that contains two members: 
//student’s obtained marks type(int).
//total marks (type int) 
//Ask the user  for obtained marks and total marks, store it in a  variable of type struct student, and then display the percentage
#include <iostream>
using namespace std;

struct Student {
    int obtained_marks; 
    int total_marks;     
};
int main() {
    Student student;
    cout << "Enter obtained marks: ";
    cin >> student.obtained_marks;

    cout << "Enter total marks: ";
    cin >> student.total_marks;

    float percentage = (float(student.obtained_marks) / student.total_marks) * 100;

    cout << "\nPercentage: " << percentage << "%" << endl;

    return 0;
}