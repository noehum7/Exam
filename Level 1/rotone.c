#include <unistd.h>

int main(int argc, char **av)
{
	int i = 0;
	if (argc == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				char base = (av[1][i] >= 'a') ? 'a' : 'A';
				av[1][i] = ((av[1][i] - base + 1) % 26) + base;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
*/