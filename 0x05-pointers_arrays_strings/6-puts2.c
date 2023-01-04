#include "main.h"

/**
  * puts2 - prints every other character of a string strating with nthe first
  *
  * @str - input string
  *
  * Return: void
  */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
