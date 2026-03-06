#include <stdio.h>
#include <math.h>

struct Point
{
    float x;
    float y;
};

float distance(struct Point a, struct Point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

void closestPair(struct Point p[], int n)
{
    float min = 9999;
    int p1=0,p2=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            float d = distance(p[i],p[j]);

            if(d < min)
            {
                min = d;
                p1 = i;
                p2 = j;
            }
        }
    }

    printf("Closest Pair: (%.1f,%.1f) and (%.1f,%.1f)\n",
            p[p1].x,p[p1].y,p[p2].x,p[p2].y);

    printf("Minimum Distance: %f\n",min);
}

int main()
{
    struct Point points[] =
    {
        {1,2},{4,5},{7,8},{3,1}
    };

    int n = 4;

    closestPair(points,n);

    return 0;
}
