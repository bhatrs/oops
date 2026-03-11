// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int & fun (int & x)
{
   x++;
   return (x);
}
int main() {
    // Write C++ code here
   int a=5;
   fun(a)=a;
   cout<<a<<endl;
   fun(a)=++a;
   cout<<a<<endl;
   fun(a)=a++;
   cout<<a<<endl;
    return 0;
}
/*
5
6
6


*/
