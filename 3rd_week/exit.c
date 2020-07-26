#include <stdio.h>
#include <cs50.h>

// argv[0] 에는 처음에 입력하는 프로그램 이름이 저장됨
// 그리고 우리가 입력하는 게 argv[1] 부터 저장됨
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1; // == exit
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}
