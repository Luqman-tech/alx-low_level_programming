#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add: return sum of numbers.
 * @a: first figure.
 * @b: second figure.
 * return: sum a & b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub: return difference.
 * @a: first figure.
 * @b: second figure.
 * return: difference a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul: return product.
 * @a: first figure.
 * @b: second figure
 * return : product a and b
 */
 int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return division of numbers.
 * @a: first figure.
 * @b: second figure.
 * return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return remnants of division.
 * @a: first figure.
 * @b: second figure.
 * return: remnant of a and b division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
