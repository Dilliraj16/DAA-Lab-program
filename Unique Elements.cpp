#include <stdio.h>

int main()
{
    int arr[]={3,7,3,5,2,5,9,2};
    int n=8;

    for(int i=0;i<n;i++)
    {
        int flag=1;

        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=0;
                break;
            }
        }

        if(flag)
            printf("%d ",arr[i]);
    }
}
