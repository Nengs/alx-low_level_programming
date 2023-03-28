#include "main.h"

/**
* rev_string - Reverses a string
*
* @s: Input string
* Return: String in reverse
*/

void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
int i, j;

while (s[counter] != '\0')
counter++;

for (i = 0, j = counter - 1; i < j; i++, j--)
{
rev = s[i];
s[i] = s[j];
s[j] = rev;
}
}

