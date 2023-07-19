#include <stdio.h>

#define LIMIT 1024

/**
 * main - Entry point of the program
 *
 * Description: Computes and prints the sum of all multiples of 3 or 5 below
 *              1024 (excluded).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < LIMIT; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
