#include <stdio.h>
#include <stdlib.h>

int main()
{
	char lower = 'a';
	while (lower <= 'z'){
		if (lower == 'e' || lower == 'q')		
			++lower;
			putchar(lower);
			++lower;
	}
		putchar('\n');

		return (0);
}

