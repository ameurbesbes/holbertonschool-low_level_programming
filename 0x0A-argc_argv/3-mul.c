#include <stdio.h>
#include <stdlib.h>
/**
 * main - print mul
 * @argc : int
 * @argv : pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
	printf("error");
	return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

