#include <stdio.h>
#include <stdlib.h>

/**
 * main - print argc - 1
 * @argc : int
 * @argv : pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
int sum = 0, i;
if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
