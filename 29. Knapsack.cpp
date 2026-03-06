#include <stdio.h>

int main()
{
    int w[]={2,3,1};
    int v[]={4,5,3};

    int capacity=4;
    int max=0;

    for(int i=0;i<(1<<3);i++)
    {
        int weight=0,value=0;

        for(int j=0;j<3;j++)
        {
            if(i & (1<<j))
            {
                weight+=w[j];
                value+=v[j];
            }
        }

        if(weight<=capacity && value>max)
            max=value;
    }

    printf("Maximum Value: %d",max);
}
