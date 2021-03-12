#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, res;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = fun(i, j);
	printf("%d\n", res);
	return (0);
}
