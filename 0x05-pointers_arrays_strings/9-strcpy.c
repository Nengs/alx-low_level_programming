#include "main.h"

/**
* _strcpy - copies the string pointed to by src to dest
* @dest: destination buffer
* @src: source string
*
* Return: pointer to destination buffer
*/
char *_strcpy(char *dest, char *src)
{
int length = 0;
int i;

while (*(src + length) != '\0')
{
length++;
}

for (i = 0; i < length; i++)
{
dest[i] = src[i];
}

dest[length] = '\0';

return (dest);
}

