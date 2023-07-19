#include <stdio.h>

#define LIMIT 50

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *              Numbers are separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int fib1 = 1, fib2 = 2, next;

	printf("%ld, %ld", fib1, fib2);

	for (i = 3; i <= LIMIT; i++)
	{
		next = fib1 + fib2;
		printf(", %ld", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}
