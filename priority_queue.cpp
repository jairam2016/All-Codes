#include<bits/stdc++.h>
using namespace std;
int main()
{
    // DEFAULT IS ALWAYS MAX_HEAP
    priority_queue<int> qu; 
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(9);
    qu.push(4);
    qu.push(5);
    qu.push(6);
    qu.push(-3);
    qu.push(0);
    qu.push(7);
    qu.push(8);
    while(qu.empty()==false)
    {
        cout<<qu.top()<<"  ";
        qu.pop();
    }
    cout<<endl;
    //  PRIORITY QUEUE IN MIN_HEAP
    priority_queue<int,vector<int>,greater<int>> qp;
    qp.push(1);
    qp.push(2);
    qp.push(3);
    qp.push(9);
    qp.push(4);
    qp.push(5);
    qp.push(6);
    qp.push(-3);
    qp.push(0);
    qp.push(7);
    qp.push(8);
    while(qp.empty()==false)
    {
        cout<<qp.top()<<"  ";
        qp.pop();
    }
    return 0;
}