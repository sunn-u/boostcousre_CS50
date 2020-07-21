#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");
    
    // 저장공간이 유한하기 때문에 정확하게 계산할 수 없다.
    // 저장할 수 있는 값들 중에 1/10과 가까운 값을 저장한다.
    printf("x / y = %f\n", x/y);
}
