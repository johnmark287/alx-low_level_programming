#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: Array to perform action on.
 * @size: Array size.
 * @action: Function pointer to the action to perform
 * on the array.
 * Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (size == 0)
		return;
	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
