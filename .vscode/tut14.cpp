#include <bits/stdc++.h>
using namespace std;

//STRUCTURE IS A USER DEFINE DATA TYPE
typedef struct student
{
    int id;
    float salary;
}student;

//IN UNION ANY ONE OF DATA TYPE IS USED
//USING OTHER WILL GIVE GARBAGE VALUE
//THIS IS TO OPTIMISE MEMORY
union teacher
{
    int id1;
    char subject[20];
    char name[30];
};

int main()
{   
    struct student arr[60];
    arr[0].id=8569; 
    struct student jairam;
    jairam.id=5639;
    jairam.salary=100000;
    student hari;
    hari.id=852147; 

    union teacher abc;
    abc.id1=2565;
    // strcpy(abc.subject,"maths");
    cout<<abc.id1;
    // cout<<endl<<abc.subject;
    return 0;
}

