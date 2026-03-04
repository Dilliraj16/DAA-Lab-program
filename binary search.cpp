#include <stdio.h>

int main()
{
    int arr[]={-9,3,4,6,8,9,10,30};
    int n=8,key=10;

    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==key)
        {
            printf("Element found at position %d",mid);
            return 0;
        }

        if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Element not found");
}
