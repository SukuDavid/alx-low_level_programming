#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting strring
 */
char *rot13(char *s)
{
int i, j;

char a[] = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
char b[] = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
}
}
return (s);
}
