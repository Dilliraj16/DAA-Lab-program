#include <stdio.h>

int distinct(int arr[],int start,int end)
{
    int count=0;

    for(int i=start;i<=end;i++)
    {
        int flag=1;

        for(int j=start;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=0;
                break;
            }
        }

        if(flag)
            count++;
    }

    return count;
}

int main()
{
    int nums[]={1,2,1};
    int n=3;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int d=distinct(nums,i,j);
            sum+=d*d;
        }
    }

    printf("%d",sum);
}
