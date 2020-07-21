#include <stdio.h>

// 아래에 작성한 함수를 위에서도 사용할 수 있도록 컴퓨터를 속이는 방법
// = 함수 프로토타입
void cough(int n);

int main(void)
{
    cough(3);
}

// 함수 왼쪽 : 출력의 종류
// 함수 오른쪽 : 입력의 종류
// void : 입출력이 없다.
void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough!\n");
    }
}
