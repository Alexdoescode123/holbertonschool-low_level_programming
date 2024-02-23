#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	n = 97;
	for (; n <= 122;)
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
