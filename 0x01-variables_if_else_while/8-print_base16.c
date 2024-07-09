#include <stdio.h>

/**
 * main - printing numbers in base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0x30; i <= 0x39; i++)
	{
		putchar(i);
	}
	for (j = 0x61; j <= 0x66; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
