#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatène deux cha�es de caractères en allouant dynamiquemen
 * @s1: Premie�re chaîne de caract�
 * @s2: Deuxième chaîne de caractè
 * Return: Pointeur vers la nouvelle chaîne concténée, ou NU
 */
char *str_concat(char *s1, char *s2)
{
	char *resultat;
	unsigned int len1;
	unsigned int len2;
	unsigned int total_len;
	unsigned int i, j;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		{
			for (len1 = 0; s1[len1] != '\0'; len1++)
			{}
			for (len2 = 0; s2[len2] != '\0'; len2++)
			{}
			total_len = (len1 + len2 + 1);
	resultat = malloc(total_len * sizeof(char));
			if (resultat == NULL)
			{
				return (NULL);
			}
			for (i = 0; i < len1; i++)
			{
				resultat[i] = s1[i];
			}
			for (j = 0; j < len2; j++)
			{
				resultat[i + j] = s2[j];
			}
			{
				resultat[i + j] = '\0';
			}
		}
		return (resultat);
}
