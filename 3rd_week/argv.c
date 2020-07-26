#include <stdio.h>
#include <cs50.h>


// 왜 shell : ./argv david 라고 쳤는데
// hello, david 라고 출력되는 걸까?

// --- argc 는 main 함수가 받게 될 입력의 개수
// --- argv[] 그 입력이 포함되어 있는 배열

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
