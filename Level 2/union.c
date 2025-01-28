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

void process_string(char *av, char *list, int *j)
{
	int i = 0;
	while (av[i])
	{
		if (!char_repeat(list, av[i]))
		{
			list[*j] = av[i];
			write(1, &av[i], 1);
			(*j)++;
		}
		i++;
	}
}

int main(int argc, char *av[])
{
	if (argc == 3)
	{
		int j = 0;
		char str[256] = {0}; // Array para almacenar caracteres únicos, todos los de la tabla ASCII

		process_string(av[1], str, &j);
		process_string(av[2], str, &j);
	}
	write(1, "\n", 1);
	return 0;
}
