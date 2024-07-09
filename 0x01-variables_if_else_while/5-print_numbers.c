#include <stdio.h>

/**
 * main - print digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int l;

	l = 1;
	while (l < 10)
		printf("%d", l++);
	printf("\n");
	return (0);
}
