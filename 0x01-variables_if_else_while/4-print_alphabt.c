#include <stdio.h>
/**
 * main - A program that prints all letters except q and e
 *
 * Return: 0 (Perfect)
 */
int main(void)
{
	char h;

	for (h = 'a' ; h <= 'z' ; h++)
		if (h != 'q' && h != 'e')
			putchar(h);
	putchar('\n');
	return (0);
}
