#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("before: ");
    printf("after: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // 1. upper part -1
        // if (s[i] >= 'a' && s[i] <= 'z') // 소문자
        // {
        //     //convert to uppercase
        //     // https://www.asciichart.com/
        //     printf("%c", s[i] - 32);

        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }

        // 2. upper part -2
        printf("%c", toupper(s[i]));

    }
    printf("\n");
}
