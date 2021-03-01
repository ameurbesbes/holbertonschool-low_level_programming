#include <stdio.h>
#include <stdlib.h>
/**
 * main - change for an amount of money.
 * @argc : int
 * @argv : pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
int n = atoi(argv[1]), i, sum = 0;
int t[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
if (n < 0)
{
printf("0\n");
return (1);
}
while (n != 0)
{
for (i = 0; i < 5; i++)
{
sum += n / t[i];
n = n % t[i];
}
}
printf("%d\n", sum);
return (0);
}
