#include "main.h"
#include <stdlib.h>
/**
 * create array of size size and assign char c
 * @size:array size
 * @c:assig char
 * Description:create size array and assign char 
 * Return:pointer to arra
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
