#include <stdio.h>

int main()
{
    int year[3000];
    int b1 = 1, b2 = 1, b3 = 0, lend;
    int totalBee;
    int i = 0, i_num;
    scanf(" %d", &year[i]);
    do
    {
        i++;
        scanf(" %d", &year[i]);
    } while (year[i] != -1);

    i_num = i;
    i = 0;
    for (int j = 0; j < i_num; j++)
    {
        for (int k = 0; k < year[i]; k++)
        {
            lend = b3;
            b3 = b2;
            b2 = b1 + b2 + lend;
        }
        totalBee = b2 + b3 + b1;
        printf("%d %d\n", b2, totalBee);
        b1 = 1;
        b2 = 1;
        b3 = 0;
        i++;
    }
}