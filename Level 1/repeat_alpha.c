#include <unistd.h>

void ft_putchar(char c, int n)
{
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}

void repeat_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str, *str - 'a' + 1);
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str, *str - 'A' + 1);
		else
			write(1, str, 1);
		str++;
	}
}

int main(int argc, char **av)
{
	if (argc == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}

int main(int argc, char** argv)
{
	int i;
	int count;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				count = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count = argv[1][i] - 'A' + 1;
			else count = 1;
			while (count --)
				write(1, argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}