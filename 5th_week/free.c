#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s)+1); // \0 까지 할당

    strcpy(t,s);
    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);

    // valgrind ./copy 에서 메모리가 누수되고 있다는 경고 메세지를 받음!
    // malloc 으로 메모리를 할당하고 해지하지 않아서 생긴 문제
    // ↓ 해결 방안
    free(t);
}
