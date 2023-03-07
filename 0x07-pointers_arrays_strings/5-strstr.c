#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack.
 *
 * @haystack: pointer to a string to search in
 * @needle: pointer to a substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i, k = 0; needle[k] != '\0'; j++, k++)
			{
				if (needle[k] != haystack[j] || haystack[j] == '\0')
					break;
			}
			if (needle[k] == '\0')
				return (haystack + i);
		}
	}
	return (0);
}

