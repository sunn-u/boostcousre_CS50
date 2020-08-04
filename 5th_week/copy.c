#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");
    // string t = s; -- s의 주소를, s와 t 모두에게 넣은 것
    // > 따라서 s가 바뀌면 t도, t가 바뀌면 s도 바뀐다.

    char *t = malloc(strlen(s)+1); // \0 까지 할당

    // for (int i = 0, n = strlen(s); i < n+1 ; i++)
    // {
    //     t[i] = s[i];
    // }
    strcpy(t,s);
    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}
