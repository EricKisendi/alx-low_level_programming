#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;

	while (a <= 9){
		putchar(a + '0');
		++a;
	}
	putchar('\n');

	return (0);
}
