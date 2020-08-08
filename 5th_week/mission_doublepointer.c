#include <stdio.h>

int main(void)
{
    int arr[6][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15},
                       {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};

    int cnt = sizeof(arr)/sizeof(int);

    int out_n = 0;
    while (cnt > 0)
    {
        int in_n = sizeof(arr[out_n])/sizeof(int);
        cnt -= in_n;
        out_n += 1;
    }

    while (out_n != 0)
    {
        int in_n = sizeof(arr[out_n-1])/sizeof(int);
        for (int j = 0; j < in_n; j++)
        {
            printf("%d\t", *(arr[out_n-1]+j));
        }
        out_n -= 1;
        printf("\n");
    }
}
