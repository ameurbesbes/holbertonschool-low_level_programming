#include "holberton.h"
/**
 * if_natural_square - check if a has natural square
 * @a: int
 * @b: int
 * Return: return success
 */
int if_natural_square(int a, int b)
{
if (a == (b * b))
return (b);
if (b  * b  >  a)
return (-1);
else
return (if_natural_square(a, b + 1));
}
/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: int
 * Return: success
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
else
return (if_natural_square(n, 1));
}
