#include "holberton.h"
#include <stdio.h>
/**
 * muse - best band ever
 *@a: int
 *@b: int
 * Return: return 1 if n is prime
 */
int muse(int a, int b)
{
if (a < 2 || !(a % b))
return (0);
if (a > b / 2)
return (1);
else
return (muse(a, (b + 1)));

}
/**
 * is_prime_number - tell us whether the number is prime or not
 *@n: int
 * Return: 1 (prime number)
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
else
return (muse(n, 2));
}
