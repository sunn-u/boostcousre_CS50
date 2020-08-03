#include <stdio.h>

int main(void)
{
    int n = 50;
    // int(4byte)
    // 메모리에서는 32bits 로 구성된 0과 1이 50을 표현하고 있을 것
    printf("%i\n", *&n);
    // %p + & : ~의 주소(=포인터:컴퓨터 메모리의 주소)
    // * : ~의 주소로 가줘
}
