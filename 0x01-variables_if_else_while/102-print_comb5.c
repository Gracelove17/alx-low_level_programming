#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of two-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int m, l;

	for (m = 0; m <= 98; m++)
	{
		for (l = m + 1; l <= 99; l++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((l / 10) + '0');
			putchar((l % 10) + '0');
			if (m == 98 && l == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

