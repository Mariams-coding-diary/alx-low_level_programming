#include <stdio.h>

/**
 * main - print alphabet in lowecase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e')
		{
			continue;
		}if (l == 'q'){
			continue;
		}
		putchar(l);
	}
	putchar('\n');
	return (0);
}
