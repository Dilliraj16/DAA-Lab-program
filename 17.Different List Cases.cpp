#include <stdio.h>

void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j] > arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
}

int main()
{
    int arr[] = {-5,-1,-3,-2,-4};
    int n = 5;

    if(n==0)
    {
        printf("[]");
        return 0;
    }

    sort(arr,n);

    printf("[");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        if(i<n-1) printf(", ");
    }
    printf("]");
}
