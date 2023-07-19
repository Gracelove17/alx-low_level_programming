#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabetin lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char num, letter;

	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

