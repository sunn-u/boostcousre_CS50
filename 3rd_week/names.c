#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string names[4];
    names[0] = "EMMA";
    names[1] = "RODRIGO";
    names[2] = "BRIAN";
    names[3] = "DAVID";

    printf("%s\n", names[0]);
    // 컴퓨터가 string 이 언제 끝나는지 어떻게 알지?
    // > 문자열이 끝나는 지점 + 1 에 null(\0)을 넣어서 알고 있다!
    printf("%c%c%c%c%i\n", names[0][0], names[0][1], names[0][2], names[0][3], names[0][4]);
}
