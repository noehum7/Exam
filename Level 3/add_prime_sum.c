#include <unistd.h>

int	ft_atoi(char *str)
{
	int result = 0;

	while (*str)
		result = result * 10 + *str++ - '0';
	return (result);
}

int ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return 0;
	if (nb == 2)
		return 1;
	if (nb % 2 == 0)
        return 0;
	i = 3;
	while (i < nb)
	{
		if (nb % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

void	ft_put_nbr(int n)
{
	if (n > 9)
		ft_put_nbr(n / 10);
	char c;
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int result = 0;
	if (argc == 2)
	{
		int nb = ft_atoi(argv[1]);
		while (nb > 0)
		{
			if (ft_is_prime(nb))
				result += nb;
			nb--;
		}
	}
	ft_put_nbr(result);
	write(1, "\n", 1);
	return 0;
}
