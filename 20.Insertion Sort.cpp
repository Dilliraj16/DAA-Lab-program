#include <stdio.h>

int main()
{
    int arr[] = {3,1,4,1,5,9,2,6,5,3};
    int n = 10;

    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
