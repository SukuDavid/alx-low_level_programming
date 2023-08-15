include "main.h"
/**
 * print_alphabet - entry point
 * Return:0
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
putchar('\n');
c++;
}
}
int main()
{
print_alphabet();
}
