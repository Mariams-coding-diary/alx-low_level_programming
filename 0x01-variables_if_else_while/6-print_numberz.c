#include <stdio.h>

/**
 * main - print all single digits and newline
 *
 * Return: Always0 (success)
 */
int main(void)
{
	int l;

	l = 48;
	while (l < 58)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
