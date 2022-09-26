#include <stdio.h>
#include <stdlib.h>

int main()
{
	char lower = 'a';

	while (lower <= 'z'){
		putchar(lower);
		--lower;
	}
	putchar('\n');

	return (0);
}
