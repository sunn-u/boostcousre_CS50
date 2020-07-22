// 헤더 파일 : c로 작성된 라이브러리
// clang으로 3_hello.c를 읽을 때, printf의 역할을 알려준다.

// clang -o hello 3_hello.c
// clang -o hello 3_hello.c -lcs50 : link in cs50
// make hello
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("what's your name?\n");
    printf("hello, %s!\n", name);
}
