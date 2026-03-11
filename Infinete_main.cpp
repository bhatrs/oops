#include <iostream>
using namespace std;
int & fun (int & x)
{
   x++;
   return (x);
}
int main() {
    // Write C++ code here
   
   
   cout<<"Hello"<<endl;
   main();
    return 0;
}
/* Hello 
   Hello 
   Hello 
..goes on */
