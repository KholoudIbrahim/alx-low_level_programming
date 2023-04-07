#include "main.h"

/**
 * last_index - function that returns the index
 * of a string.
 * @s: string pointer.
 * Return: integer value.
*/

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - a function that checks if a string
 * is a palindrome.
 * @s: the string to be checked.
 * Return: 0, or 1
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checks the palindrome.
 * @s: string.
 * @start: integer value that moves from right to left.
 * @end: integer value that moves from left to right.
 * @mod: integer value.
 * Return: 0, or 1.
*/

int check(char *s, int start, int end, int mod)
{
if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
return (1);
else if ((s[start] != s[end])
return (0);
else
return (check(s, start + 1, end - 1, mod));
}
