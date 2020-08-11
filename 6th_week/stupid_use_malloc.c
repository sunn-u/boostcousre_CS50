#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    // 만약 malloc으로 메모리를 할당하지 못한다면
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // 배열의 크기를 바꾸는 실험
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }

    // copy integers from old array into new array
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    free(list);

    // update - rename tmp to list
    list = tmp;

    for(int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
}
