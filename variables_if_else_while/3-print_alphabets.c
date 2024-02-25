#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int N;
n = 97; // Lowercase 'a'
N = 65; // Uppercase 'A'
while (n <= 122)
{
putchar(n++);
}
while (N <= 90)
{
putchar(N++);
}
putchar('\n');
return (0);
}
