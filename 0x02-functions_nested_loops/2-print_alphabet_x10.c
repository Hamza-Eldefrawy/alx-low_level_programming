#include"main.h"

/**
 * print_alphabet_x10 use the function _putchar to print
 * alphabt a - z 10 times
*/

void print_alphabet_x10(void)
{
	int i = 0, ch;

	for (; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
