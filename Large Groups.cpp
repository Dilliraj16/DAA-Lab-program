#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="abbxxxxzzy";
    int n=strlen(s);

    for(int i=0;i<n;)
    {
        int j=i;

        while(j<n && s[i]==s[j])
            j++;

        if(j-i>=3)
            printf("[%d,%d] ",i,j-1);

        i=j;
    }
}
