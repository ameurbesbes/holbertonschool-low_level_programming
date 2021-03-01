#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print argc - 1
 * @argc : int
 * @argv : pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] ; j++)
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
return (0);
}
