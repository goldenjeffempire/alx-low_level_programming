#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("%d and is greater than 5\n", lastDigit);
	else if (lastDigit == 0)
		printf("%d and is 0\n", lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("%d is and is less than 6 and not 0\n", lastDigit);
	return (0);
}
