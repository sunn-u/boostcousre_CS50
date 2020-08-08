#include <stdio.h>

int main(void)
{
    // NULL : 메모리 공간이 할당되지 않음
    // char *s = NULL;

    char s[5];
    printf("s: ");

    // char *는 그 자체가 주소이기 때문에 &가 필요없다.
    scanf("%s", s);
    printf("s: %s\n", s);
}
