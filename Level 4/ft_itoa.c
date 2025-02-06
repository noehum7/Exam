#include <stdlib.h>

int	absolute_value(int nbr)
{
	// Convertimos números negativos a positivos
	return (nbr < 0 ? -nbr : nbr);
}

// Calculamos la longitud del nº incluyendo signo
int	ft_num_length(int nb)
{
	int	length;

	length = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		length += 1;
	while (nb)
	{
		nb /= 10; // Eliminamos último digito
		length++;
	}
	return (length);
}

char	*ft_itoa(int nbr)
{
	char *result;
	int len;

	len = ft_num_length(nbr);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';

	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	// Convertimos los dígitos a caracteres: Decrementamos posicion porque guardamos digitos 
	// de derecha a izquierda
	while (nbr) // nbr = 123; len = 3; result[] = "   \0";
	{
		--len; // 2
		result[len] = absolute_value(nbr % 10) + '0'; // Convertimos todos los numeros a positivos. 123 % 10 = 3 --> result[] = "  3\0"
		nbr /= 10; // nbr = 12
	}
	return (result);
}

#include <stdio.h>
#include <limits.h>

int		main(void)
{
	int d = INT_MIN;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = -13;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 0;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 5;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = INT_MAX;
	printf("%d =? %s\n", d, ft_itoa(d));
}

/*
Escriba una función que tome un int y lo convierta en una cadena terminada en nulo.
La función devuelve el resultado en una matriz de caracteres que debes asignar.
*/