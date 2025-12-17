//Write a C++ program to ask the user to input his/her age
//Then the program will show if the person is eligible to vote
//A person who is eligible to vote must be older than or equal to 18 years old
#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter person age = ";
cin>>age;
if(age>=18){
cout<<"You are eligible to vote.";}
else 
cout<<"you are not eligible to vote."<<endl;
return 0; }

