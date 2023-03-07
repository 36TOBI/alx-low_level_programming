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
    char *start = haystack;
    char *substr, *match;

    while (*start != '\0')
    {
        substr = needle;
        match = start;

        while (*substr != '\0' && *match == *substr)
        {
            match++;
            substr++;
        }

        if (*substr == '\0')
            return start;

        start++;
    }

    return NULL;
}
