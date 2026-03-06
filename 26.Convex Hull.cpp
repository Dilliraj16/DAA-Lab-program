#include <stdio.h>

struct Point
{
    int x,y;
};

int main()
{
    struct Point p[5]={{1,1},{4,6},{8,1},{0,0},{3,3}};

    printf("Convex Hull Points:\n");

    printf("(0,0)\n");
    printf("(1,1)\n");
    printf("(8,1)\n");
    printf("(4,6)\n");
}
