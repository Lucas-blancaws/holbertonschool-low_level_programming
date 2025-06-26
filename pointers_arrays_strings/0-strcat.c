#include <stdio.h>
#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: A pointer to the string whose length is to be calculated
 *
 * Return: The length of the string (not including the null byte)
 */

int _strlen(char *s)
{
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
        }
        return (i);
}

#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copie la string pointe par src vers dest
 * @dest: Destinatioon
 * @src: Source string
 *
 * Return: pointeur sur dest
 */

char *_strcpy(char *dest, char *src)
{
        int i;

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }
        dest[i] = '\0';
        return (dest);
}

#include <stdio.h>
#include "main.h"



char *_strcat(char *dest, char *src)
{
	size_t len;

	len = _strlen(dest);
	_strcpy(dest + len, src);

	return (dest);
}

