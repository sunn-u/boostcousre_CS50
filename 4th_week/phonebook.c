#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
    // string numbers[4] = {"617-555-0100", "617-555-0101", "617-555-0102", "617-555-0103"};
    person people[4];

    people[0].name = "EMMA";
    people[0].number = "617-555-0100";

    people[1].name = "RODRIGO";
    people[1].number = "617-555-0101";

    people[2].name = "BRIAN";
    people[2].number = "617-555-0102";

    people[3].name = "DAVID";
    people[3].number = "617-555-0103";


    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].name,"EMMA")==0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
