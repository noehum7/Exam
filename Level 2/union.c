#include <unistd.h>

int ft_char_repeat(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		char str[256] = {0}; // Array para almacenar caracteres únicos, todos los de la tabla ASCII

		while (argv[1][i])
		{
			if (!ft_char_repeat(str, argv[1][i]))
			{
				str[j] = argv[1][i];
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}

		i = 0;
		while (argv[2][i])
		{
			if (!ft_char_repeat(str, argv[2][i]))
			{
				str[j] = argv[2][i];
				write(1, &argv[2][i], 1);
				j++;
			}
			i++;
		}
	}

	write(1, "\n", 1);
	return 0;
}
