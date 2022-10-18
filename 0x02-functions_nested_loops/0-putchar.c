#include "main.h"

/**
 * Description: Geting to print puchchar_
 *
 * Return: Allways (0)
 */

int main(void)
{
	int i;
	char pc[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(pc[i]);
	}
	_putchar('\n');
	return (0);
}
