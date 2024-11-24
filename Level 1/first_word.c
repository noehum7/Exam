#include <unistd.h>

int	main(int argc, char** argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
	}
	write(1, "\n", 1);
	return (0);
}

//Con punteros:
int	main(int argc, char** argv)
{
    char *str;

    if (argc == 2)
    {
        str = argv[1];
        while (*str == ' ' || *str == '\t')
            str++;
        while (*str && *str != ' ' && *str != '\t')
        {
            write(1, str, 1);
            str++;
        }
    }
    write(1, "\n", 1);
    return (0);
}