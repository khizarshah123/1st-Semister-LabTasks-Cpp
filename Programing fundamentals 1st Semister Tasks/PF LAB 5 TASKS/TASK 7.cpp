//
//Task # 7: Write a program called SumAndAverage to produce the sum of 1, 2, 3, ...,
// to 100. Also compute and display the average. The output shall look like:
//The sum is 5050
//The average is 50.0
#include <iostream>
using namespace std;
int main() {
    int n = 100;
    // Calculate sum using the formula for the sum of the first n integers
    int sum = (n * (n + 1)) / 2;
    // Calculate average
    double average = static_cast<double>(sum) / n;
    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl;
    return 0;}
