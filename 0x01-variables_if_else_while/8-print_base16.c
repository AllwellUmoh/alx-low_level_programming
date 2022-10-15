#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alnum;
	int numal;

	for (numal = 0; numal < 10; numal++)
	putchar(numal + '0');

	for (alnum = 'a'; alnum <= 'f'; alnum++)
	putchar(alnum);
	putchar('\n');

	return (0);
}
