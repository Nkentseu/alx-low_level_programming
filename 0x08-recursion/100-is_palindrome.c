#include "main.h"

/**
 * leng - size
 * @s: string
 * Return: leng of s
 */
int leng(char *s)
{
	return ((s == 0 || s[0] == '\0') ? 0 : 1 + leng((s + 1)));
}

/**
 * palindrome - pal
 * @s: string
 * @taille: size of s
 * @position: position to determine
 * Return: 0 if s[position] is not equal to s[taille - position - 1] else 1
 */
int palindrome(char *s, int taille, int position)
{
	if (position >= taille - position)
		return (1);
	if (s[position] != s[taille - position - 1])
		return (0);
	return (palindrome(s, taille, position + 1));
}

/**
 * is_palindrome - palindrom
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int taille = leng(s);

	if (s == 0)
		return (0);
	if (taille == 0 || taille == 1)
		return (1);
	return (palindrome(s, taille, 0));
}
