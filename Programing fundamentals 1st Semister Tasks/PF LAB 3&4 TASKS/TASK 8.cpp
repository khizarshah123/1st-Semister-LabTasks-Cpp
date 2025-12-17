//In the following program, explain why the value "6" is printed twice in a row:
int main()
{
int i = 3;i++;
out << i<<endl;    // "4"
++i;                    
cout<<i <<endl;    // "5"
cout<<++i<<endl;   // "6"
cout<<i++<<endl;   // "6"
cout<<i;           // "7"    
} 
//The value "6" is printed twice because of the following two lines:
//cout << ++i << endl;: This prints 6 because i is incremented from 5 to 6 (pre-increment).
//cout << i++ << endl;: This also prints 6 because i was 6 at that point, 
//and the post-increment operator only increments i after printing.
//Therefore, i is incremented from 6 to 7 after it is printed.
