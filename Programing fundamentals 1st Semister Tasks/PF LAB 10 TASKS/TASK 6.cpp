//Develop the Student Registration System by the object oriented scenarios.
// It should consist of two classes namely Student,and Course.
//using OOP to write  a C++ Program to Store Information of a Student in a class
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class for Course
class Course {
private:
    string courseName;  // Name of the course
    string courseCode;  // Course code
    int credits;        // Number of credits for the course

public:
    // Constructor to initialize course details
    Course(string name, string code, int credit) {
        courseName = name;
        courseCode = code;
        credits = credit;
    }

    // Function to display course details
    void displayCourse() const {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
    }

    // Getters for course details
    string getCourseName() const { return courseName; }
    string getCourseCode() const { return courseCode; }
    int getCredits() const { return credits; }
};

// Class for Student
class Student {
private:
    string studentName;        // Name of the student
    int rollNumber;            // Roll number of the student
    vector<Course> courses;    // List of courses the student is enrolled in

public:
    // Constructor to initialize student details
    Student(string name, int rollNo) {
        studentName = name;
        rollNumber = rollNo;
    }

    // Function to enroll the student in a course
    void enrollCourse(const Course &course) {
        courses.push_back(course);
    }

    // Function to display student details along with enrolled courses
    void displayStudentInfo() const {
        cout << "Student Name: " << studentName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Enrolled Courses: " << endl;

        if (courses.empty()) {
            cout << "No courses enrolled!" << endl;
        } else {
            for (const auto &course : courses) {
                course.displayCourse();
                cout << "---------------------------------" << endl;
            }
        }
    }
};

int main() {
    // Creating some course objects
    Course course1("Mathematics", "MATH101", 3);
    Course course2("Physics", "PHYS101", 4);
    Course course3("Chemistry", "CHEM101", 3);
    
    // Creating student objects
    Student student1("KHIZAR SHAH", 1001);
    Student student2("QAMBAR ALI", 1002);

    // Enrolling students in courses
    student1.enrollCourse(course1);
    student1.enrollCourse(course2);
    
    student2.enrollCourse(course2);
    student2.enrollCourse(course3);

    // Displaying student information with enrolled courses
    cout << "\nStudent 1 Information:" << endl;
    student1.displayStudentInfo();

    cout << "\nStudent 2 Information:" << endl;
    student2.displayStudentInfo();

    return 0;
}