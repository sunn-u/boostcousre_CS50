#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

    for (int i = 0; i < 4; i++)
    {
        // 문자열 비교는 == 로 되지 않는다.
        // 문자열 비교를 하고 싶으면 문자 하나하나를 비교해야한다.
        if (strcmp(names[i],"EMMA")==0)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
