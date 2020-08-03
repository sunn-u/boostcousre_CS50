#include <stdio.h>

int main(void)
{
    char *name = "EMMA";
    printf("this is a value : %s\n", name);
    printf("this is a value address : %p\n", &name);
    printf("this is a value address : %p\n", name);
    printf("this is a first address of value address : %p\n", &name[0]);
}
