#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @f:function callback for printing a name
 * @name: name to print.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		return;
	f(name);
}
