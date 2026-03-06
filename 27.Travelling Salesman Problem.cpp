#include <stdio.h>
#include <math.h>

float dist(int x1,int y1,int x2,int y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main()
{
    int x[]={1,4,7,3};
    int y[]={2,5,1,6};

    float total=0;

    for(int i=0;i<3;i++)
        total+=dist(x[i],y[i],x[i+1],y[i+1]);

    total+=dist(x[3],y[3],x[0],y[0]);

    printf("Total Distance: %f",total);
}
