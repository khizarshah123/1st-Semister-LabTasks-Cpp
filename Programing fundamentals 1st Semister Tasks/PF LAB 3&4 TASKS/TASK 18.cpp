//A shop will give discount of 10% if the cost of purchased quantity is more than 1000
//Ask user for quantity
//Suppose, one unit will cost 100
//Judge and print total cost for user
#include <iostream>
using namespace std;
int main(){
int quantity;
const int unit_cost = 100;  
float total_cost;
cout<<"Enter the quantity of items purchased: ";
cin>>quantity;
total_cost = quantity * unit_cost;
if(total_cost > 1000){
total_cost = total_cost - (total_cost * 0.10);}
cout << "The total cost is: " << total_cost << endl;
return 0;}

