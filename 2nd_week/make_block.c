#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    int m;
    do
    {
        n = get_int("what is height?\n");
    }
    while (n < 1);
    do
    {
        m = get_int("what is width?\n");
    }
    while(m < 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
