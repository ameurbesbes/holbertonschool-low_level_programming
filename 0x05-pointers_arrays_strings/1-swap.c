include"holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int pointer to a
 * @b: int pointer to b
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
