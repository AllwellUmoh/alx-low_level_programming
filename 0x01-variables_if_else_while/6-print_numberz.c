#include <stdio.h>

/**
 * main - Print all single digit numbers using only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
	putchar(digits + '0');
	putchar('\n');

	return (0);
}
