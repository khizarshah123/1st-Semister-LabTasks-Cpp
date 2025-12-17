//Task # 3: Write a program that prints all Roll numbers of your class using for loop. 
//Output should be as :
//20SW01     
//20SW02
//20SW03
//20SW10
//20SW11 and  so on
#include <iostream>
#include <cstdio>  // For printf function
using namespace std;
int main() {
for (int i = 1; ; ++i) {  
printf("20SW%02d\n", i);} 
return 0;} 
