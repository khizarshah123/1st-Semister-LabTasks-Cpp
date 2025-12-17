//Take three numbers from the user and print the greatest number
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter the first number = ";
cin>>a;
cout<<"enter the second number = ";
cin>>b;
cout<<"enter the third number = ";
cin>>c;
if(a>b&&a>c)
cout<<"greatest number is = "<<a<<endl;
else if(a<b&&b>c)
cout<<"greatest number is = "<<b<<endl;
else if(b<c&&a<c)
cout<<"greatest number is = "<<c<<endl;
else cout<<"invalid number"<<endl;
return 0;}