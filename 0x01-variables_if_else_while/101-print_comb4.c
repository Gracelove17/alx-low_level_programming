#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0 (perfect)
 */
int main(void)
{
        int m, n, o;

        for (m = '0' ; m < '9' ; m++)
        {
                for (n = m + 1; n <= '9' ; n++)
                {
			for (0 = n + 1; 0 <= '9' ; 0++)
			{
				if ((n != m) != o)
				{
					putchar(m);
					putchar(n);
					putchar(o);
                                if (m == '7' && n == '8')
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
