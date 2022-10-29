#include<bits/stdc++.h>
using namespace std;

void printGrid(int grid[][9])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<grid[i][j]<<"  ";
        }
        cout<<endl;
    }
}
bool is_safe(int grid[][9],int row,int col,int val)
{
    for(int i=0;i<9;i++)
    {
        if(grid[row][i]==val)
        {
            return false;
        }
    }

    for(int j=0;j<9;j++)
    {
        if(grid[j][col]==val)
        {
            return false;
        }
    }

    int smi=(row/3)*3;
    int smj=(col/3)*3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[smi+i][smj+j]==val)
            {
                return false;
            }
        }
    }
    return true;
}
bool find_unassigned_location(int grid[][9],int &row,int &col)
{
    int i,j;
    for(row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            if(grid[row][col]==0)
            {
                return true;
            }
        }
    }
    return false;
}
bool SolveSudoku(int grid [][9])
{
    int row=0,col=0;
    if(!find_unassigned_location(grid,row,col))
    {
        return true;
    }
    else
    {
        for(int pos=1;pos<=9;pos++)
        {
            if(is_safe(grid,row,col,pos))
            {
                grid[row][col]=pos;
                if(SolveSudoku(grid))
                {
                    return true;
                }
                grid[row][col]=0;
            }
        }
    }
    return false;
}
int main()

{

    int grid[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},

                      {5, 2, 0, 0, 0, 0, 0, 0, 0},

                      {0, 8, 7, 0, 0, 0, 0, 3, 1},

                      {0, 0, 3, 0, 1, 0, 0, 8, 0},

                      {9, 0, 0, 8, 6, 3, 0, 0, 5},

                      {0, 5, 0, 0, 9, 0, 6, 0, 0},

                      {1, 3, 0, 0, 0, 0, 2, 5, 0},

                      {0, 0, 0, 0, 0, 0, 0, 7, 4},

                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    if (SolveSudoku(grid) == true)

        printGrid(grid);

    else

        cout << "No solution exists" << endl;

    return 0;

}

