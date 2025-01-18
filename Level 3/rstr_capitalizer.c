#include <unistd.h>
void ft_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		int i = 1;
		while (i < argc)
		{
			ft_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}

/*
Escribir un programa en C que tome una o más cadenas de texto como argumentos.
Para cada argumento, debe convertir la última letra de cada palabra a mayúscula y el resto a minúsculas.
Una palabra es una sección de una cadena delimitada por espacios/tabulaciones o el inicio/final de la cadena.
Si una palabra tiene una sola letra, debe estar en mayúscula.
Si no hay parámetros, el programa debe mostrar una nueva línea.

$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
*/