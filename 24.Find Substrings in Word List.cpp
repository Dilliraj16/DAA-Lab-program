#include <stdio.h>
#include <string.h>

int main()
{
    char words[4][20]={"mass","as","hero","superhero"};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i!=j && strstr(words[j],words[i]))
            {
                printf("%s ",words[i]);
                break;
            }
        }
    }
}
