#include "3-calc.h"
/**
 * op_add - main
 * @a: a
 * @b: b
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - main
 * @a: a
 * @b: b
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - main
 * @a: a
 * @b: b
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - main
 * @a: a
 * @b: b
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a / b);
}
/**
 * op_mod - main
 * @a: a
 * @b: b
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
