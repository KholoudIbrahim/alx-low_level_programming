#include "main.h"

/**
 * move_past_star - iterates past *'s.
 * @s2: the 2nd string, that may contain wildcard.
 * Return: pointer pointing at the star.
*/

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else 
		return (s2);
}

/**
 * inception - makes magic a reality.
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: 1 in identical, or 0 if not.
*/

int inception(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcamo(s1 + 1, s2 + 1);
	r += inception(s1 + 1, s2);
	return (r);
}
