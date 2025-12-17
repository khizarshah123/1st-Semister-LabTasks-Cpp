//Write a program that declares an int variable, assign it a value of your choice. The program checks as
//if the number is even make it odd number
//if the number is odd prints its square
//if the number is equal to 0 make it a double figure number and prints its cube
#include <iostream>
#include <cmath> // For using pow() to calculate the cube
using namespace std;
int main() {
int num;
num = 5;  
if (num == 0) {
num = 10; 
cout<<"Number is 0. Changed to " << num << ". Cube: "<<pow(num,3)<<endl;}
else if (num % 2 == 0){ 
num = num + 1;  
cout << "Number was even. Changed to " << num <<"."<<endl;}
else{ 
cout<<"Number is odd. Square: " <<pow(num,2) <<endl;}
return 0;}
