int ft_atoi(char *nb)
{
	int result = 0;
	while (*nb)
	{
		result = result * 10 + (*nb - '0');
		nb++;
	}
	return (result);
}

void ft_print_hex(int nb)
{
	char base[] = "0123456789abcdef";
	if (nb >= 16)
		ft_print_hex(nb / 16);
	write(1, &base[nb % 16], 1);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
