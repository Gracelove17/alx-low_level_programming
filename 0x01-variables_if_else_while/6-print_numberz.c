#include <stdio.h>
/**
 * main - All single numbers of base 10 starting from 0
 *
 * Return: 0 (succes)
 */
int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}
