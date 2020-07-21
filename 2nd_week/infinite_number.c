#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // 중간에 조건을 빼먹음 > ;로 빈칸으로 냅둠
    for (int i = 1; ;i *= 2)
    {
        printf("%i\n", i);
        sleep(1);
    }
}
