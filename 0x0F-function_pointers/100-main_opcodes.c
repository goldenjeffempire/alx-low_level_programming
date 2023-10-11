#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the opcodes of its own main function
  * @argc: The number of command-line argumentnts
  * @argv: An array of command-line argument strings
  * Return: 0 if successful, 1 if incorrect number of argument
  * 2 if negative bytes
  */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *opcodes = (unsigned char *)main;

	for (int i = 0; i < numBytes; i++)
	{
		printf("%02x", opcodes[i]);
	}
	printf("\n");

	return (0);
}
