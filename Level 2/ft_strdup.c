#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char* copy;
	int length = 0;

	while (src[length])
		length++;
	copy = malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
		return NULL;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';

	return (copy);
}