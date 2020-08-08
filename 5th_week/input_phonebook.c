#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // FILE : 새로운 자료형, file : 변수의 이름
    // r : 읽기, w : 쓰기, a : 덧붙이기
    FILE *file = fopen("phonebook.csv","a");

    char *name = get_string("name : ");
    char *number = get_string("number : ");

    // 파일용 printf
    fprintf(file, "%s, %s\n", name, number);
    fclose(file);
}
