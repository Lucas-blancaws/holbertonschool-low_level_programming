#include <stdio.h>
#include "main.h"
/**
 * _strstr - Finds first occurrence of substring.
 * @haystack: Main string to search in.
 * @needle: Substring to search for.
 *
 * Return: Pointer to start of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
