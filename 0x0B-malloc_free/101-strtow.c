#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_word - number of words in str
 * @str: string
 * Return: number of words
 */
int count_word(char *str)
{
	int word = 0;
	int i = 0;

	if (str == 0 || str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if ((i > 0 && str[i - 1] == ' ') || i == 0)
				word++;
		}
		i++;
	}
	return (word);
}

/**
 * substr - get the sub string
 * @str: string
 * @debut: begin extract
 * @taille: number of caracter to extract
 * Return: substring
 */
char *substr(char *str, int debut, int taille)
{
	char *sub = 0;
	int i = 0;

	if (str == 0)
		return (0);
	sub = (char *)malloc(sizeof(char) * (debut + taille + 1));
	if (sub == 0)
		return (0);
	for (i = 0; i < taille; i++)
	{
		sub[i] = str[i + debut];
	}
	sub[debut + taille] = '\0';
	return (sub);
}

/**
 * free2d - free a 2 dimension array
 * @str: array of array
 * @debut: begin of free
 * @fin: end of free
 * Return: void
 */
void free2d(char **str, int debut, int fin)
{
	int i = 0;

	if (str == 0)
		return;
	for (i = debut; i <= fin; i++)
	{
		if (str[i] != 0)
		{
			free(str[i]);
			str[i] = 0;
		}
	}
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: all word
 */
char **strtow(char *str)
{
	int nbr_word = 0;
	char **words = 0;
	int debut = 0;
	int i = 0;

	if (str == 0 || str[0] == '\0')
		return (0);
	nbr_word = count_word(str);
	if (nbr_word == 0)
		return (0);
	words = (char **)malloc(sizeof(char *) * (nbr_word + 1));
	if (words == 0)
		return (0);
	for (i = 0; i < nbr_word; i++)
	{
		int p = 0;

		while (str[debut + p] != '\0' && str[debut + p] == ' ')
			p++;
		if (p == 0)
			break;
		debut = debut + p;
		p = 0;
		while (str[debut + p] != '\0' && str[debut + p] != ' ')
			p++;
		if (p == 0)
			break;
		words[i] = substr(str, debut, p);
		if (words[i] == 0)
		{
			free2d(words, 0, i - 1);
			return (0);
		}
		debut = debut + p;
	}
	words[nbr_word] = 0;
	return (words);
}
