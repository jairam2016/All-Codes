#include<bits/stdc++.h>
using namespace std;
void display(queue<int> qtr)
{
    if(qtr.empty())
    {
        cout<<"\nQUEUE IS EMPTY"<<endl;
    }
    else
    {
        for(int i=qtr.front();qtr.front()<=qtr.back();i++)
        {
            cout<<qtr.front()<<"  ";
            qtr.pop();
        }
    }
}
int main()
{
    queue<int> qtr;
    display(qtr);
    qtr.push(1);
    qtr.push(2);
    qtr.push(3);
    qtr.push(4);
    display(qtr);
    return 0;
}