#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the lowercase alphabet,
 *              followed by the uppercase alphabet, and a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase; /* Stores lowercase alphabet */
	char uppercase; /* Stores uppercase alphabet */

	/* Print lowercase alphabet */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	/* Print uppercase alphabet */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);

	putchar('\n'); /* Print new line */

	return (0);
}
