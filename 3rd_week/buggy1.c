#include <stdio.h>

int main(void)
{
    // 1. 10번 출력이 목표이나 11번 출력 됨
    for (int i = 0; i <= 9; i++)
    {
        // 2. 디버깅을 위해 가장 간단한 방법인 printf 으로 값 출력
        // 3. i <= 10 → i < 10 or i <= 9 로 수정
        printf("i is now %i: ", i);
        printf("#\n");
    }
}
