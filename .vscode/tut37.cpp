#include <bits/stdc++.h>
using namespace std;
// BASE CLASS
class employee
{
    int id;
    public: 
            float salary;
            employee (int id1)
            {
                id=id1;
                salary=34;
            };
            employee(){}
};
// DERIVED CLASS
class programmer : public employee
{
    int langcode=9;
    public:
    programmer (int id1)
            {
                  langcode=id1;
            }
};
int main()
{
    employee harry(1),rohan(2);
    programmer skillf(1);
    return 0;
}