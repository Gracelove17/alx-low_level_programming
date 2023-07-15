#include <stdio.h>
/**
 * main - entry of program
 * Return: 0 success
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu bytes(s)\n", sizeof(int));
	printf("size of int long: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
