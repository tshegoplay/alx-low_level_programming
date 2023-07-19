#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Description:
 *   This function checks the sign of the number 'n' and prints the
 *   corresponding sign symbol. If 'n' is greater than zero, it returns 1
 *   and prints '+'. If 'n' is zero, it returns 0 and prints '0'. If 'n'
 *   is less than zero, it returns -1 and prints '-'.
 *
 * Return: 1 if 'n' is greater than zero, 0 if 'n' is zero,
 *         -1 if 'n' is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
