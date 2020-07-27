#include <stdio.h>
#define SIZE 500000


int main(int argc, char *argv[])
{
    int file_num;
    scanf("%d", &file_num);

    int partArr[SIZE];
    int lengthOfPartArr = file_num-1;

    int sort_list[file_num];

    for (int k = 0; k < file_num; k++)
    {
        sort_list[k] = -1;
        //printf("%i", sort_list[k]);
    }

     for(int i=0; i < lengthOfPartArr; i++)
     {
        scanf("%d", &partArr[i]);
        for (int j=1; j < file_num+1; j++)
        {
            if (j == partArr[i])
            {
                sort_list[j-1] = j;
                break;
            }
        }
     }


    int res;
     for (int k=0; k < file_num; k++)
     {
        if (sort_list[k] == -1)
            res = k+1;
     }

    printf("k: %i\n", res);
    return 0;
}
