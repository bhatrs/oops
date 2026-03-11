#include <iostream>
using namespace std;
void fun (int count)
{
    if (count ==0)
    cout << count;
    else{
        cout<<count<<endl;
        fun(--count);
        return;
    }
}
int main() {
    // Write C++ code here
   fun(10);
    return 0;
}
/*
10
9
8
7
6
5
4
3
2
1
0

*/
