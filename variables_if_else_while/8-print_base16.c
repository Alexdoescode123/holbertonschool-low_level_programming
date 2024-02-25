#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
int num;
int abc;
abc = 97;
num = 48;
for (; num <= 57;)
{
putchar(num++);
}
for (; abc <= 102;)
{
putchar(abc++);
}
putchar('\n');
return (0);
}
