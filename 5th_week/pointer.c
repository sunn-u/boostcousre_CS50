#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // pointer : 추상화를 위해 사용된다.
    printf("this is value : %i\n", *p);
    printf("this is value address : %p\n", p);
}
