#include <stdio.h>

/**
 * main - print alphabet in reverse followed by a newline
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
