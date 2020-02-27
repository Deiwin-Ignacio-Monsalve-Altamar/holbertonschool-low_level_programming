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
	if (str == (str + e))
	{
		return (0);
	}
	if (str != (str + e))
	{
		return (0);
	}
	if (str < (str + (e + 1)))
	{
		return (isPalindromeRec(str, s + 1, e - 1));
	}
	return (1);
}
/**
  * _strlen_recursion - Return int
  * @s: pointer
  * Return: int
  */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		return (n);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
  * is_palindrome - Return char
  * @s: pointr
  * Return: int
  */

int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
	{
	return (1);
	}
	return (isPalindromeRec(s, 0, n - 1));
}

