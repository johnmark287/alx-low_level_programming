#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds number of arguments passed
 * @argc: argument count.
 * @argv: argument vector.
 * Return: int.
*/
int main(int argc, char **argv __attribute__((unused)))
{
    if (argc > 0)
        printf("%d\n", (argc - 1));
    else
        printf("%d\n", argc);
    return (0);
}
