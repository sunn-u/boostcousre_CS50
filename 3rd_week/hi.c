#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", (int)c1, (int)c2, (int)c3);
    // char > int 형변환(반대도 가능) : 72 73 33
    // RAM 에 실제로 저장된 건 char 가 아니라 2진법의 72, 73, 33
}
