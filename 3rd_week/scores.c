#include <stdio.h>
#include <cs50.h>

// 전역 변수(global vairable) : 함수 바깥에서 지정하는 변수
// 상수 : 변하지 않는 값
const int N = 3;

int main(void)
{
    int scores[N];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %i\n", (scores[0] + scores[1] + scores[2])/N);
}
