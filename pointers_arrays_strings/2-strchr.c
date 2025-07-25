#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search in
 * @c: character to find
 *
 * Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
