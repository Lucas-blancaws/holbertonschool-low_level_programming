#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - Concatenate two strings
* @s1: The first string
* @s2: The second string
*
* Return: A pointer to the newly allocated memory
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int i;
	int j;
	char *stock;

	if (s1 == NULL)
	{
		s1 = ""
	}
	if (s2 == NULL)
	{
		s2 = ""
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	stock = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (stock == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		stock[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		stock[i + j] = s2[j];
	}
	stock[i + j] = '\0';
	return (stock);
}
