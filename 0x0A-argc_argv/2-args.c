#include "main.h"

/**
 * main - main function prints all arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
