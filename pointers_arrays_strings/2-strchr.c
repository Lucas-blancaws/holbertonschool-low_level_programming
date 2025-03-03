#include "main.h"
/**
 * _strchr - check the code
 * @s: pointeur
 * @c: char
 * Return: return
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	return (NULL);
}

