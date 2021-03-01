#include <stdio.h>
/**
 * main - print argc - 1
 * @argc : int
 * @argv : pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
