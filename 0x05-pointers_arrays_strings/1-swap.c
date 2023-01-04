#include "main.h"

/**
  * swap_int - swap two integers
  *
  * @a: int pointer to swap
  *
  * @b: int pointer to swap
  *
  * Return: 0 Success
  */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
