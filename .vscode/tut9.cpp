#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "\nENTER  YOUR AGE ";
    cin >> age;
    if (age < 0)
    {
        cout << "\nWRONG AGE ENTERED!!!";
    }
    else
    {
        if (age > 18)
        {
            cout << "\nYOU ARE ELIGIBLE TO DRIVE";
        }
        else if (age == 18)
        {
            cout << "\nWAIT TO GET 19";
        }
        else
        {
            cout << "\nNOT ELIGIBLE TO DRIVE";
        }
    }

    return 0;
}