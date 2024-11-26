char    *ft_strrev(char *str)
{
	int length;
	int i = 0;
	char temp;

	length = 0;
	while (str[length])
		length++;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char str[] = "Hola";
	printf("Original: %s\n", str);
	printf("Reversed: %s\n", ft_strrev(str));
	return (0);
}
