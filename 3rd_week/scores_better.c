#include <stdio.h>
#include <cs50.h>

// 함수 프로토 타입
float average(int length, int array[]);

int main(void)
{
    int n = get_int("Number of scores: ");
    int scores[n];

    for (int i = 0; i <n; i++)
    {
        scores[i] = get_int("Score %i: ", i+1);
    }

    printf("Average: %.1f\n", average(n, scores));
}

float average(int length, int array[])
{
    float sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return sum / length;
}
