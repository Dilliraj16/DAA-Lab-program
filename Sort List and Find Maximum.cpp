#include <stdio.h>

int main()
{
    int arr[]={3,1,4,2};
    int n=4;

    if(n==0)
    {
        printf("List empty");
        return 0;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }

    printf("%d",arr[n-1]);
}
