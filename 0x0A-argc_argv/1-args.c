#include <stdio.h>
#include "main.h"		
/*
 * main-print number arguments passed to program		
 *@argc:number arguments		
 *@argv:array arguments		
 *return:null		
 */
int main(int argc, char *argv[])		
{	
(void) argv;
	printf("%d\n", argc - 1);		
	return (0);		
}
