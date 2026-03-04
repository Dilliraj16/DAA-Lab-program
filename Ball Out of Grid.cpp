#include <stdio.h>

int m=2,n=2;

int move(int i,int j,int steps)
{
    if(i<0 || j<0 || i>=m || j>=n)
        return 1;

    if(steps==0)
        return 0;

    return move(i+1,j,steps-1)+
           move(i-1,j,steps-1)+
           move(i,j+1,steps-1)+
           move(i,j-1,steps-1);
}

int main()
{
    printf("%d",move(0,0,2));
}
