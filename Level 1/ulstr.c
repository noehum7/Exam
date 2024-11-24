#include <unistd.h>

int main(int argc, char** av)
{
	if (argc == 2)
	{
		while(*av[1])
		{
			if ((*av[1] >= 'a' && *av[1] <= 'z') || (*av[1] >= 'A' && *av[1] <= 'Z'))
				*av[1] = *av[1] >= 'a' && *av[1] <= 'z' ? *av[1] - 32 : *av[1] + 32;
			write(1, av[1]++, 1);
		}
	}

	write(1, "\n", 1);
	return (0);
}

		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			write(1, &argv[1][i], 1);
			i++;	
		}