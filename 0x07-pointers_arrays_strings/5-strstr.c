char *_strstr(char *haystack, char *needle)
{
    char *h, *n;
    for (; *haystack != '\0'; haystack++)
    {
        h = haystack;
        n = needle;
        while (*h == *n && *n != '\0')
        {
            h++;
            n++;
        }
        if (*n == '\0')
            return haystack;
    }
    return NULL;
}
