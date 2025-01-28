#include <unistd.h>

int	main(int argc, char** argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
	}
	write(1, "\n", 1);
	return (0);
}

//Con punteros:
int	main(int argc, char** argv)
{
    char *str;

    if (argc == 2)
    {
        str = argv[1];
        while (*str == ' ' || *str == '\t')
            str++;
        while (*str && *str != ' ' && *str != '\t')
        {
            write(1, str, 1);
            str++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

/*
Este programa toma una cadena como argumento e imprime la primera palabra de esa cadena.
El programa primero verifica si se pasa exactamente un argumento. Si es así,
itera sobre los caracteres de la cadena hasta que encuentra un tabulador (ASCII 9)
o un espacio (ASCII 32). Este bucle se utiliza para omitir cualquier carácter de espacio 
en blanco inicial. Una vez que llega al primer carácter que no es un espacio en blanco,
imprime caracteres hasta que encuentre otro tabulador, espacio o el final de la cadena.
Esto imprime la primera palabra de la cadena de entrada. Finalmente, el programa imprime
un carácter de nueva línea para finalizar la salida.

$> ./first_word "this    ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
*/