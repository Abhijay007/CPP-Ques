#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age " << endl;
    cin >> age;

    if (age >= 18)
    {
        cout <<"You can vote";
    }
    else
    {
        cout <<"You cannot vote";
    }

    return 0;
}