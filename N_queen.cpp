#include <bits/stdc++.h>
using namespace std;
void print_path(int sol[4][4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<sol[i][j]<<"  ";
        }
        cout<<endl;
    }
}
bool is_safe(int row, int col, int sol[4][4])
{
    for(int i=0;i<col;i++)
    {
        if(sol[row][i]==1)
        {
            return false;
        }
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i++,j++)
    {
        if(sol[i][j]==1)
        {
            return false;
        }
    }
    for(int i=row-1,j=col-1;i<4 && j>=0 ;i++,j--)
    {
        if(sol[i][j]==1)
        {
            return false;
        }
    }

    return true;
}
bool queen_path(int col,int sol[4][4])
{
    if(col>=4)
    {
        return true;
    }
    else
    {
        for(int row=0;row<4;row++)
        {
            if(is_safe(row,col,sol))
            {
                sol[row][col]=1;
            }
            if(queen_path(col+1,sol))
            {
                return true;
            }

            sol[row][col]=0;
        }
    }
    return false;
}
void queen_problem(int n)
{
    int sol[4][4];
    if(!queen_path(0,sol)) 
    {
        cout<<"\nNO PATH POSSIBLE"<<endl;
    }
        print_path(sol);
}
int main()
{
    int n=4;
    queen_problem(n);
    return 0;
}