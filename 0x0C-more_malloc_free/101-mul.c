#include "main.h"
#include <stdlib.h>
/**
 * _print - moves a string one place too the left
 * and prints the string.
 * @str: string to move.
 * @l: size of string.
 * Return: void.
*/
void _print(char *str, int l)
{
int i, j;
i = j = 0;
while (i < l)
{
if (str[i] != '0')
j = 1;
if (j || i == l - 1)
_putchar(str[i]);
i++;
}
_putchar('\n');
free(str);
}
/**
 * mul - multiplies a character with a string
 * and places the answer into dest.
 * @n: character to multiply.
 * @num: string to multiply.
 * @num_index: las non NUL index of num.
 * @dest: destinations of multiplication.
 * @dest_index: hiest index to start addition.
 * Return: pointer to dest or NULL on failure.
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
int j, k, mul, mulRem, add, addRem;
mulRem = addRem = 0;
for (j = num_index, k = dest_index; j >= 0; j--, k--)
{
mul = (n - '0') * (num[j] - '0') + mulRem;
mulRem = mul / 10;
add = (dest[k] - '0') + (mul % 10) + addRem;
addRem = add / 10;
dest[k] = add % 10 + '0';
}
for (addRem += mulRem; k >= 0 && addRem; k--)
{
add = (dest[k] - '0') + addRem;
addRem = add / 10;
dest[k] = add % 10 + '0';
}
if (addRem)
{
return (NULL);
}
return (dest);
}
/**
 * check_for_digits - checks the arguments to ensure they are digits.
 * @av: pointer to arguments.
 * Return: 0 if digits, 1 if not digits.
*/
int check_for_digits(char **av)
{
int i, j;
for (i = 1; i < 3; i++)
{
for (j = 0; av[i][j]; j++)
{
if (av[i][j] < '0' || av[i][j] > '9')
return (1);
}
}
return (0);
}
/**
 * init - initialize a string.
 * @str: string to initialize.
 * @l: length of string.
 * Return: void.
*/
void init(char *str, int l)
{
int i;
for (i = 0; i < l; i++)
str[i] = '0';
str[i] = '\0';
}
/**
 * main - checks the program.
 * @argc: argument count.
 * @argv: Argument vector.
 * Return: zero, or exit status of 98 on failure.
*/
int main(int argc, char **argv)
{
int s1, s2, sn, el, i;
char *a;
char *t;
char error[] = "Error\n";
if (argc != 3 || check_for_digits(argv) == 1)
{
for (el = 0; error[el]; el++)
_putchar(error[el]);
exit(98);
}
for (s1 = 0; argv[1][s1]; s1++)
;
for (s2 = 0; argv[2][s2]; s2++)
;
sn = s1 + s2 + 1;
a = malloc(sn *sizeof(char));
if (a == NULL)
{
for (el = 0; error[el]; el++)
_putchar(error[el]);
exit(98);
}
init(a, sn - 1);
for (el = s2 - 1, i = 0; el >= 0; el--, i++)
{
t = mul(argv[2][el], argv[1], s1 - 1, a, (sn - 2) - i);
if (t == NULL)
{
for (el = 0; error[el]; el++)
_putchar(error[el]);
free(a);
exit(98);
}
}
_print(a, sn - 1);
return (0);
}
