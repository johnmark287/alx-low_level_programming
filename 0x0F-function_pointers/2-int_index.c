#include "function_pointers.h"
/**
 * int_index -  searches for an integer.
 * @array: Array to search elelment.
 * @size: Array size.
 * @cmp: Pointer to perform action function.
 * Return: index to the match element on success,
 * -1 on failure.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
