#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *copy;
    char *result;
    int length = 0;

    while (src[length])
        length++;
    copy = malloc(sizeof(char) * (length + 1));
    if (!copy)
        return NULL;
    result = copy;
    while (*src)
        *copy++ = *src++;
    *copy = '\0';
    return result;
}
