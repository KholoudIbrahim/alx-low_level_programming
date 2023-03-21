#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase, then in uppercase
 *
 * Return: 0 if successful
 */
int main(void)
{char ch = 'a';
char CH = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0); }
