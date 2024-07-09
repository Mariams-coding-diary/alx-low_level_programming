#include <stdio.h>

/**
 * main - print combinations of 2 digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	j = 48;
	while ( i <= 57)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == j)
			{
				continue;
			}
			else
			{
				if (i < j)
				{
					putchar(i);
					putchar(j);
					if (i == 57)
						if (j == 57)
							break;
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
