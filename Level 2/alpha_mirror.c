#include <unistd.h>

int main(int argc, char **av)
{

	if (argc == 2)
	{
		while (*av[1])
		{
			if ((*av[1] >= 'a' && *av[1] <= 'z') || (*av[1] >= 'A' && *av[1] <= 'Z'))
				*av[1] = (*av[1] >= 'a' && *av[1] <= 'z') ? 'm' - (*av[1] - 'n') : 'M' - (*av[1] - 'N');
			write(1, av[1]++, 1);
			// if (*av[1] >= 'a' && *av[1] <= 'z')
			// 	*av[1] = 'z' - (*av[1] - 'a');
			// else if (*av[1] >= 'A' && *av[1] <= 'Z')
			// 	*av[1] = 'Z' - (*av[1] - 'A');
			// write(1, av[1]++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}