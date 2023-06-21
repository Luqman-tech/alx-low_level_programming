#include "function_pointers.h"
#include <stdio.h>
/**
 * @name: add string
 * @f: function pointer
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
