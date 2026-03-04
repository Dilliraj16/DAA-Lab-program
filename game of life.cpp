#include <stdio.h>

int main()
{
    int board[4][3]={{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
    int next[4][3];

    int m=4,n=3;

    int dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int live=0;

            for(int d=0;d<8;d++)
            {
                int x=i+dir[d][0];
                int y=j+dir[d][1];

                if(x>=0 && y>=0 && x<m && y<n)
                    live+=board[x][y];
            }

            if(board[i][j]==1 && (live<2 || live>3))
                next[i][j]=0;
            else if(board[i][j]==1 && (live==2 || live==3))
                next[i][j]=1;
            else if(board[i][j]==0 && live==3)
                next[i][j]=1;
            else
                next[i][j]=board[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",next[i][j]);
        printf("\n");
    }
}
