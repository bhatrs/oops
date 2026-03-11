#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   float a=12.2;
   if(a ==  (12.2))
     cout<<"equal"<<endl;
   else
     cout<<"not equal"<<endl;
    return 0;
}
//output Not equal

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   float a=12.2;
   if(a == float (12.2))
     cout<<"equal"<<endl;
   else
     cout<<"not equal"<<endl;
    return 0;
}
//Output :equal
