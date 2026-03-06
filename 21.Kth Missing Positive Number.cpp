#include <stdio.h>

int main()
{
    int arr[] = {2,3,4,7,11};
    int n = 5;
    int k = 5;

    int missing = 0;
    int num = 1;
    int i = 0;

    while(missing < k)
    {
        if(i < n && arr[i] == num)
            i++;
        else
            missing++;

        if(missing == k)
        {
            printf("%d",num);
            return 0;
        }

        num++;
    }
}
