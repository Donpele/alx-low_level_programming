#include <stdio.h>

/**
* main - print all possible different comnination of three digits
* Return Always 0 (success)
*/
int main (void)
{
int n; m, I;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (I = 50; I < 58; I++)
{
if (I > m && m > n)
{
putchar(n);
putchar(m);
putchar(I);
if (n != 55 || m != 56)
{
putchar(' , ');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
