#include "main.h"
/**
 * print_alphabet_x10 - Function to print 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int count, i;

	count = 0;

	while (count < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		count++;
		_putchar('\n');
	}
}
