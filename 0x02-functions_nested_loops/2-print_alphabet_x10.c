#include "main.h"

/**
 * main - Write a function that prints 10 times the alphabet, in lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int lowers;
	int i;

	for (i = 0; i <= 10; i++)
	{
	for (lowers = 'a'; lowers <= 'z'; lowers++)  
	{
	_putchar(lowers);
	}
	_putchar("\n");
	}
}

