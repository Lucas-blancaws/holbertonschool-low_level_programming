#include <stdio.h>
#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * Each word is capitalized if it follows a non-letter character or is
 * the first character of the string.
 *
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 || str[i - 1] == ',' || str[i - 1] == '\t' ||
				str[i - 1] == '\n' || str[i - 1] == ';' || str[i - 1] == ' ' ||
				str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
				str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
				str[i - 1] == '{' || str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
