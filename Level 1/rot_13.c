#include <unistd.h>

int main(int argc, char **av)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (av[1][i])
		{
			// if ((av[1][i] >= 'a' && av[1][i] < 'n') || (av[1][i] >= 'A' && av[1][i] < 'N'))
			// 	av[1][i] += 13;
			// else if ((av[1][i] >= 'n' && av[1][i] < 'z') || (av[1][i] >= 'N' && av[1][i] < 'Z'))
			// 	av[1][i] = (av[1][i] - 'a' + 13) % 26 + 'a';
			// else if (av[1][i] == 'z' || av[1][i] == 'Z')
			// 	av[1][i] -= 13;
			
			if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				char base = (av[1][i] >= 'a') ? 'a' : 'A';
				av[1][i] = ((av[1][i] - base + 13) % 26) + base;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}