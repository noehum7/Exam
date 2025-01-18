#include <unistd.h>

void ft_put_nbr(int nb)
{
	char c;
	if (nb > 9)
		ft_put_nbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	(void)argv;
	ft_put_nbr(argc - 1);
	write(1, "\n", 1);
	return 0;
}
