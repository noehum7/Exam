#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(int argc, char const *argv[])
{
	int i = 0;
	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && i >= 0)
			i--;
		i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return 0;
}
