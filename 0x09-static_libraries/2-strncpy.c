#include "main.h"

/**
* _strncpy - copy a string
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: maximum number of characters to be copied
*
* Return: pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
