#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: unsigned int
 * @c: char
 * Return: s pointer
*/
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size == 0)
return (NULL);
s = malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
*(s + i) = c;
return (s);
}
