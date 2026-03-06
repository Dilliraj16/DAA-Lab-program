#include <stdio.h>
#include <string.h>

int main()
{
    char haystack[]="sadbutsad";
    char needle[]="sad";

    char *p = strstr(haystack,needle);

    if(p)
        printf("%ld",p-haystack);
    else
        printf("-1");
}
