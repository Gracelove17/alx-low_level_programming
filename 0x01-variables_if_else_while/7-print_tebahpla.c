#include <stdio.h>
/**
 * main - prints the lower case alphabet in reverse
 *
 * Return: 0 (Perfect)
 */
int main(void)
{
	int i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
