#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int m, n, o;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (o = n + 1; o <= '9'; o++)
			{
				if (m != n && m != o && n != o)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m == '7' && n == '8' && o == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
