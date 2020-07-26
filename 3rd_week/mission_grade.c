#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>


const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const string GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};


void printf_int_array(const int number, const int argv[]);
void printf_char_array(const int number, const string argv[]);
string return_grade(const int number, const int int_argv[], const string str_argv[], int score);

int main(void)
{
    printf("학점 프로그램\n");
    printf("종료를 원하면 \"-1\" 를 입력\n");

    printf("[학점 테이블]\n");
    printf("점수: ");
    printf_int_array(NUMBER_OF_GRADES, SCORES);
    printf("학점: ");
    printf_char_array(NUMBER_OF_GRADES, GRADES);

    int score;
    while (true)
    {
        score = get_int("성적을 입력하세요 (0 ~ 100) : ");
        if (score == -1)
        {
            printf("학점 프로그램을 종료합니다.\n");
            break;
        }

        else if (score < 0 || score > 100)
        {
            printf("** %i 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", score);
        }
        else
        {
            string gra = return_grade(NUMBER_OF_GRADES, SCORES, GRADES, score);
            printf("학점은 %s 입니다.\n", gra);
        }
    }
}


void printf_int_array(const int number, const int argv[])
{
    for (int i = 0; i < number; i++)
    {
        printf("%i   ", argv[i]);
    }
    printf("\n");
}


void printf_char_array(const int number, const string argv[])
{
    for (int i = 0; i < number; i++)
    {
        if (strlen(argv[i]) == 1)
        {
            printf("%s    ", argv[i]);
        }
        else
        {
            printf("%s   ", argv[i]);
        }
    }
    printf("\n");
}


string return_grade(const int number, const int int_argv[], const string str_argv[], int score)
{
    string result = "\0";
    for (int i = 1; i < number; i++)
    {
        if (score >= int_argv[i-1])
        {
            result = str_argv[i-1];
            break;
        }
        else if (score < int_argv[i])
        {
            continue;
        }
        else
        {
            result = str_argv[i];
            break;
        }
    }
    return result;
}
