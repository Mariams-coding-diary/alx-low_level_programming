#include <stdio.h>

/**
 * main - print all alphabet in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l;

	l = 'a';
	while (l < 'z')
	{
		putchar(l);
		l++;
	}
	return (0);
}
