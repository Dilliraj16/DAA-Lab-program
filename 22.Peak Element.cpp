#include <stdio.h>

int findPeak(int arr[], int n)
{
    int low = 0, high = n-1;

    while(low < high)
    {
        int mid = (low + high)/2;

        if(arr[mid] < arr[mid+1])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main()
{
    int nums[] = {1,2,3,1};
    int n = 4;

    printf("Peak index: %d", findPeak(nums,n));
}
