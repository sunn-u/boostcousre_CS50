#include <stdio.h>

int main(void)
{
    char *name = "EMMA";

    printf("print %%p and &name : %p\n", &name);
    printf("print %%p and name : %p\n", name);
    printf("print %%p and &name[0] : %p\n\n", &name[0]);

    printf("print %%s and name : %s\n\n", name);
    // printf("print %%s and *name : %s\n", *name); -- 에러(%c라고 지정해야함)

    // *name : name의 주소로 가달라!
    printf("print %%c and *name : %c\n", *name);
    printf("print %%c and *(name+1) : %c\n", *(name+1));
    printf("print %%c and *(name+1) : %c\n", *(name+2));
    printf("print %%c and *(name+1) : %c\n", *(name+3));
}
