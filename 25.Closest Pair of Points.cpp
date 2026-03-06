#include <stdio.h>
#include <math.h>

int main()
{
    int x[]={1,4,7,3};
    int y[]={2,5,8,1};
    int n=4;

    float min=9999;
    int p1=0,p2=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            float d = sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));

            if(d < min)
            {
                min = d;
                p1=i;
                p2=j;
            }
        }
    }

    printf("Closest pair: (%d,%d) - (%d,%d)\n",x[p1],y[p1],x[p2],y[p2]);
    printf("Distance: %f",min);
}
