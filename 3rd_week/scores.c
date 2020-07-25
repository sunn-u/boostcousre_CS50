#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // 배열(array) : ↓ 정수 3개 만큼의 메모리를 내놔!
    int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %i\n", (scores[0] + scores[1] + scores[2])/3);
}
