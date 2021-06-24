// C++ program to demonstrate function
// declaration outside class
 
#include <bits/stdc++.h>
using namespace std;
class member
{
    public:
    string MemberName;
    int id;
     
    void printname();
     
    void printid()
    {
        cout << "Geek id is: " << id;
    }
};
 
void member::printname()
{
    cout << "Geekname is: " << MemberName;
}
int main() {
     
    memberName obj1;
    obj1.MemberName = "xyz";
    obj1.id=15;
     
    // call printname()
    obj1.printname();
    cout << endl;
     
    // call printid()
    obj1.printid();
    return 0;
}
