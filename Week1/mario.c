#include <stdio.h>


int main(void)
{

    int n;
    do
    {
        //enter number
        printf("Height: \n");
        scanf("%d", &n);

    }
    while (n < 1 || n > 8);//enter number

    for (int row = 1; row <= n; row++)
    {
        for (int k = 1; k <= n - row; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }

        printf(" ");
        printf(" ");//enter number
        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }

        printf("\n");
    }

}

