#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Use `purchar` to print all lowercase without q and e
 * Return: 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
