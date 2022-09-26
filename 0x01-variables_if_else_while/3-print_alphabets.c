#include <stdio.h>
/**
 * Looping_alphabet - creating a loop of upperand lower alphabet
 *
 * Return: Always success
 */
int main()
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		++upper;
	}
	putchar('\n');
	
	return (0);
}
