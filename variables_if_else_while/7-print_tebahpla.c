#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
n = 122;
for (; n >= 97;)
{
putchar(n--);
}
putchar('\n');
return (0);
}
