#include <stdio.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}

int rob(int nums[],int start,int end)
{
    int prev1=0,prev2=0;

    for(int i=start;i<=end;i++)
    {
        int temp=max(prev1,prev2+nums[i]);
        prev2=prev1;
        prev1=temp;
    }

    return prev1;
}

int main()
{
    int nums[]={1,2,3,1};
    int n=4;

    int ans=max(rob(nums,0,n-2),rob(nums,1,n-1));

    printf("%d",ans);
}
