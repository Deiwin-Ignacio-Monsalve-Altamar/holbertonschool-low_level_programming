#include "holberton.h"
/**
  * isPalindromeRec - Return char
  * @str: pointr
  * @s: integer
  * @e: integer
  * Return: int
  */
int isPalindromeRec(char *str, int s, int e)
{
	if (s < e)
	{
		if (str[s] == str[e])
		{
			return (isPalindromeRec(str, s + 1, e - 1));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
}
/**
  * _strlen_recursion - Return int
  * @st: pointer
  * Return: int
  */

int _strlen_recursion(char *st)
{
	if (*st == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(st + 1));
	}
}
/**
  * is_palindrome - Return char
  * @s: pointr
  * Return: int
  */

int is_palindrome(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = _strlen_recursion(s);
		return (isPalindromeRec(s, 0, n - 1));
	}
	else
	{
		return (1);
	}
}
