#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int *range;
	int length = (start > end) ? (start - end) : (end - start);
	length += 1; // Para incluir tanto start como end

	range = malloc(sizeof(int) * (length));
	if (range == NULL)
		return NULL;
	if (start <= end)
	{
		while (start <= end)
			range[i++] = start++;
	}
	else
	{
		while (start >= end)
			range[i++] = start--;
	}
	return (range);
}
