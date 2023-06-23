#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings: prints strings, then a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to function.
 * @...: number of string variable to be printed.
 * description: when separator is NULL, not printed.
 *              when one of the strings is NULL, NILL  printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
