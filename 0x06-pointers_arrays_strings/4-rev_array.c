#include "main.h"
#include<stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: Array of integers.
 *
 * @n: is the number of elements of the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{       
        int i, j;
        
        j = n - 1;
	i = j;
        while (i < n && i != 0)
        {       
                if (i != j)
			printf(", ");
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
