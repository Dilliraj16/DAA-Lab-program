#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int swapped;

    for(int i=0;i<n-1;i++)
    {
        swapped = 0;

        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                swapped = 1;
            }
        }

        if(swapped == 0)
            break;
    }
}

int main()
{
    int arr[] = {64,25,12,22,11};
    int n = 5;

    bubbleSort(arr,n);

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
