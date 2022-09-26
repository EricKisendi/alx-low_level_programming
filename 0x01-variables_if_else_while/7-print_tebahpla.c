#include <stdio.h>
#include <stdlib.h>

int main()
{
	char lower = 'z';

	while (lower <= 'a'){
		putchar(lower);
		--lower;
	}
	putchar('\n');

	return (0);
}
