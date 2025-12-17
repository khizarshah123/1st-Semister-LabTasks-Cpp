//A student will not be allowed to sit in exam if his/her attendance is less than 75%
#include<iostream>
using namespace std;
int main(){
int classheld;cout<<"Total classes"<<endl;
cin>>classheld;
int classattend;cout<<"classes held"<<endl;
cin>>classattend;
float per=((float)classattend/classheld*100);
cout<<"The percentage is = "<<per<<endl;
if(per>=75){cout<<"you can sit in exam"<<endl;}
else cout<<"you cannot sit in exam"<<endl;
return 0;
}