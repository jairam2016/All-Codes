#include <bits/stdc++.h>
using namespace std;
bool is_safe(int maze[4][4],int x,int y)
{
    if(x>=0 && y>=0 && x<4 && y<4 && maze[x][y]==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool print_maze(int maze[4][4],int x,int y,int sol[4][4])
{
    if(x==(3) && y==(3) && maze[x][y]==1)
    {
        sol[x][y]=1;
        return true;
    }
    if(is_safe(maze,x,y))
    {
        sol[x][y]=1;

        if(print_maze(maze,x+1,y,sol))
        {
            return true;
        }

        if(print_maze(maze,x,y+1,sol))
        {
            return true;
        }

        sol[x][y]=0;
    }
    return false;
}
void print_path(int sol[4][4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<sol[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void print_rat_maze_path(int maze[4][4])
{
    int sol[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    if(!print_maze(maze,0,0,sol))
    {
        cout<<"\nNO PATH FOUND";
    }
    else
    {
        print_path(sol);
    }
}
int main()
{
    int maze[4][4]={{1,1,0,0},{1,1,1,0},{1,0,1,1},{0,0,1,1}};
    print_rat_maze_path(maze);
    return 0;
}