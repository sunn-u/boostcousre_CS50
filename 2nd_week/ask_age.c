#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("what is your age?\n");
    printf("you are at least %i days old.\n", age*365);
}
