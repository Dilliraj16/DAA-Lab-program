#include <stdio.h>

int main()
{
    int nums1[]={2,3,2};
    int nums2[]={1,2};

    int n1=3,n2=2;
    int a1=0,a2=0;

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(nums1[i]==nums2[j])
            {
                a1++;
                break;
            }
        }
    }

    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(nums2[i]==nums1[j])
            {
                a2++;
                break;
            }
        }
    }

    printf("[%d,%d]",a1,a2);
}
