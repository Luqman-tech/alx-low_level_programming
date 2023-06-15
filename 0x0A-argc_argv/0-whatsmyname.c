#include <stdio.h>
#include "main.h"		
/*
 * main - prints the name of the program	
 * @argc:number arguments
 * @argv:array arguments
*return:0 (Success)		
 */
int main(int argc __attribute__((unused)), char *argv[])		
{		
	printf("%s\n", *argv);
	return (0);		
}
