#include <unistd.h>

int ft_compare_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}

int ft_index_repeat(char *str, int i, char c)
{
	int j = 0;

	while (j < i)
	{
		if (str[j] == c)
			return 1;
		j++;
	}
	return 0;
}

int main(int argc, char **av)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (argc == 3)
	{
		while (av[1][i])
		{
			if (ft_index_repeat(av[1], i, av[1][i]))
				i++;
			else
			{
				n = ft_compare_char(av[2], av[1][i]);
				if (n)
					write(1, &av[1][i], 1);
				i++;
			}
		}
	}

	write(1, "\n", 1);
	return (0);
}