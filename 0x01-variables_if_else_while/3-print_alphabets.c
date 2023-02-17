#include <stdio.h>

/**
 * main - prints lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char cd;

	for (cd = 'a'; cd <= 'z'; cd++)
		putchar(cd);

	for (cd = 'A'; cd <= 'Z'; cd++)
		putchar(cd);

	putchar('\n');

	return (0);
}
