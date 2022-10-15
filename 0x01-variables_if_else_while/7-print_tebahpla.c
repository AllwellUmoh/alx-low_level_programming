#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
	putchar(alphab);
	putchar('\n');

	return (0);
}
