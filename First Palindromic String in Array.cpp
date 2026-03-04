#include <stdio.h>
#include <string.h>

int palindrome(char s[])
{
    int i=0,j=strlen(s)-1;

    while(i<j)
    {
        if(s[i]!=s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char words[][20]={"abc","car","ada","racecar","cool"};
    int n=5;

    for(int i=0;i<n;i++)
    {
        if(palindrome(words[i]))
        {
            printf("%s",words[i]);
            break;
        }
    }
}
