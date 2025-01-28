#include <unistd.h>

int ft_atoi(char *num)
{
	int result = 0;
	while (*num)
	{
		result = result * 10 + *num - '0';
		num++;
	}
	return (result);
}

void ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	char c = num % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int nb = ft_atoi(argv[1]);
	int i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(nb * i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

/*
	El ejercicio pide escribir un programa que muestre la tabla de multiplicar de un número. El parámetro siempre será un número estrictamente positivo que cabe en un int, y dicho número multiplicado por 9 también cabrá en un int. Si no hay parámetros, el programa debe mostrar un salto de línea (\n).
*/