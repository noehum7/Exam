int    ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>

int main(void)
{
	printf("%d", ft_strcmp("Aola", "Bola"));
	return 0;
}
