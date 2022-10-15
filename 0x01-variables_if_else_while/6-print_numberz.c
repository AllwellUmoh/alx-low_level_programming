#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
	putchar(digits);
	putchar('\n');

	return (0);
}
