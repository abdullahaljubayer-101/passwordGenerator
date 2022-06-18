#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, i, count;

    printf("Length of the Password: ");
    scanf("%d", &count);

    srand(time(0));

    for (i = 0; i < count; i++)
    {
        num = (rand() % (126 - 33 + 1)) + 33;

        printf("%c", num);
    }

    printf("\n");
}