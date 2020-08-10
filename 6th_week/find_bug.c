#include <stdlib.h>

int main(void)
{
    int *x; // pointer
    int *y;

    x = malloc(sizeof(int)); // pointee

    *x = 42; // pointer와 pointee가 연결되어 있기에 가능
    // *y = 13; // pointee가 없기에 가짜주소(쓰레기값) 또는 오류

    y = x;
    *y = 13;
    // pointer x와 y가 같은 pointee를 공유하므로
    // 현재 x와 y는 모두 13!
}
