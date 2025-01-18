#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int* result;
	int length = (start > end ? (start - end) : (end - start));
	int i;

	i = 0;
	length += 1;
	result = malloc(sizeof(int) * (length));
	if (result == NULL)
		return NULL;
	while (i < length)
	{
		result[i++] = end;
		if (start > end)
			end++;
		else 
			end--;
	}
	return (result);
}