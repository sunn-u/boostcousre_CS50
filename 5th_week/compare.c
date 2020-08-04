#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get_string으로 받은 문자가 똑같이 emma 여도 different가 반환된다.
    // > 왜냐면 둘의 메모리 주소가 다르니까! (서로 다른 곳을 반환)
    // string s = get_string("s: ");
    // string t = get_string("t: ");

    int s = get_int("i: ");
    int t = get_int("j: ");

    printf("%p\n", &s);
    printf("%p\n", &t);

    int *p = &s;
    int *q = &t;

    printf("%p\n", p);
    printf("%p\n", q);

    if (s==t)
    {
        printf("same!\n");
    }
    else
    {
        printf("different!\n");
    }
}
