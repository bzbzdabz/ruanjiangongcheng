#include<stdio.h>

void Prime_number(int m, int n)

{

    int i, j, count = 0;

    for(i = m; i <= n; i++)

    {

        for(j = 2; j < i; j++)

        {

            if(i % j == 0)

            {

                break;

            }

        }

        if(j == i)

        {

            count++;

            printf("%d ", i);

            if(count % 5 == 0)

            {

                printf("\n");

            }

        }

    }

    printf("\n");

}

int main()

{

    int m, n, result = 0;

    printf("Please enter the scope:\n\n");

    printf("First values:\n");

    scanf("%d", &m);

    printf("Second values:\n");

    scanf("%d", &n);

    printf("\nAll the numbers:\n");

    Prime_number(m, n);

    return 0;

}
