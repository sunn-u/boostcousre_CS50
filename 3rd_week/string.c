#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("intput: ");
    printf("output: ");

    // 2. int n = strlen(s);
    // 만약 for문 안에서 i < strlen(s);을 적으면 시간이 오래 걸리고
    // 이렇게 int n 으로 명시하면 시간 대신 저장공간이 든다.

    // 1. for (int i = 0; s[i] != '\0'; i++)
    // 2. for (int i = 0; i < n; i++)

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
