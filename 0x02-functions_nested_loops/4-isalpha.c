#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: function argument
 * Return: 1 if c is a lowercase, letter or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	/*Checks uppercase*/
	if (c >= 'A' && c <= 'Z')
	{
		return	(1);
	}
	/*checks lowercase*/
	else if (c >= 'a' && c <= 'z')
	{
		return	(1);
	}
	/*if it's not a letter*/
	else
	{
		return	(0);
	}
}
