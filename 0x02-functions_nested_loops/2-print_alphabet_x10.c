#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: function uses _putchar function to print
 */
void print_alphabet_x10(void)
{
char c = 'a';
int a = 0;
while (a < 10)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
c = 'a';
a++;
_putchar('\n');
}
}
