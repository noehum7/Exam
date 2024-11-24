#include <unistd.h>

int ft_str_length(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char *rev_print(char *str)
{
	int i = ft_str_length(str);

	while (i-- >= 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
	return (str);
}

int main(void)
{
	rev_print("Hello world");
	write(1, "\n", 1);
	rev_print("tnirp esreveR");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}