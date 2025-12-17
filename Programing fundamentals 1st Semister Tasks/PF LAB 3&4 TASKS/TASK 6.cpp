//Task#6 Write a C++ program that prompts the user to enter any character and the program checks as
//•	the character is a lower case character case or upper case character
//•	if it is a lower case then convert it into upper case
//•	 if it is an upper case then convert it into lower case
#include<iostream>
using namespace std ;
int main (){
char c;
cout<<"enter the character"<<endl;
cin>>c;
if(c>=65&&c<=90)
cout<<"upper case";
else{
cout<<"lower case";}
return 0;}
