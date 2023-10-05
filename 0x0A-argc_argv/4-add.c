
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: Argument Count.
 * @argv: Argument Vector.
 * Return: int.
*/
int main(int argc, char **argv)
{
    int i, sum;

    sum = 0;
    if (argc > 1)
    {
        for (i = 1; i < argc; i++)
        {
            if (typeof(argv[i]) != int)
            {
                printf("Error\n");
                break;
            }
            else
            {
                sum += atoi(argv[i]);
            } 
        }
        printf("%d\n", sum);
    }
    else
        printf("%d\n", sum);
    return (0);
}
