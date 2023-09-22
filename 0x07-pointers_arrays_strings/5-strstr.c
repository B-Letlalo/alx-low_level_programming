#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: function parameters, char
 * @needle: function parameter, char
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *i = haystack;
	char *p = needle;

	while (*i == *p && *p != '\0')
	{
	i++;
	p++;
	}
	if (*p == '\0')
	return (haystack);
	}
	return (0);
}
