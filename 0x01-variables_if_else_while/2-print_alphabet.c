#include <stdio.h>

int main(void)
{
	char zh = 'a';
	while (zh <= 'z')
	{
		putchar(zh);
		++zh;
	}
	putchar('\n');

	return (0);
}
