#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int sum = 0;
	long int prev = 1;
	long int curr = 2;
	long int next;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
			sum += curr;

		next = prev + curr;
		prev = curr;
		curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}
