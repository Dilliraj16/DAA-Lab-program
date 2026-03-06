#include <stdio.h>

int main()
{
    int cost[3][3] =
    {
        {3,10,7},
        {8,5,12},
        {4,6,9}
    };

    int min=9999;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(i!=j && j!=k && i!=k)
                {
                    int total = cost[0][i] + cost[1][j] + cost[2][k];

                    if(total < min)
                        min = total;
                }
            }
        }
    }

    printf("Minimum Cost: %d",min);
}
