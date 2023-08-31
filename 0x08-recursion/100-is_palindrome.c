#include "main.h"
/**
 * is_palindrome - returns the 1 if s is a palindrome.
 * @s: string to be checked
 * Return :true if s is a pallindrome
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
/**
 * find_strlen - Returns the length of a string.
 * @s:The string to be measured
 * Return: the length of the string.
 */
int find_strlen(char *s)
{
	int len = 0

		if (*(s + len))
		{
			len++;
			len += find_strlen(s + len);
		}
	return (len);
}
/**
 * check_palindrome -check if a string is a palindrome.
 * 2s:the string is checked.
 * @len:The length of s.
 * @index:the indexof the string tobe checked.
 * Return:if string is apalindrome -1
 * if the string is not a palindrome -0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[slide] == 5[len / 2])
		return (1);
	
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

return (0);
}


