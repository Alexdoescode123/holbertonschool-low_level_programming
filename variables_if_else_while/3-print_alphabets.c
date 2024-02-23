#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
int N;
N = 64;
n = 97;
for (; n <= 122;)
{
putchar(n++);
}
for (; N <= 90;)
{
putchar(N++);
}
putchar('\n');
return (0);
}
