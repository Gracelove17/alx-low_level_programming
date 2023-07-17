#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0 (perfect)
 */
int main(void)
{
	int m, i;

	for (m = '0' ; m <= '9' ; m++)
	{
		for (i = m + 1; i <= '9' ; i++)
		{
			if (i != m)
			{
				putchar(m);
				putchar(i);
				if (m == '8' && i == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
