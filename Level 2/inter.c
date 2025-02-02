#include <unistd.h>

// Busca el caracter en la cadena
int ft_compare_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}

// Evita duplicados en el primer string
int ft_index_repeat(char *str, int i, char c)
{
	int j = 0;

	while (j < i)
	{
		if (str[j] == c)
			return 1;
		j++;
	}
	return 0;
}

int main(int argc, char **av)
{
	if (argc == 3)
    {
        int i = 0;
        while (av[1][i])
        {
            if (!ft_index_repeat(av[1], i, av[1][i]) && ft_compare_char(av[2], av[1][i]))
                write(1, &av[1][i], 1);
            i++;
        }
    }
	write(1, "\n", 1);
	return (0);
}

/*
Input "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj"
↓
Recorre primer string
↓
Para cada carácter:
  - Verifica si ya apareció antes (ft_index_repeat)
  - Si no apareció, busca en segundo string (ft_compare_char)
  - Si está en ambos, lo imprime
↓
Output: "padinto"

"padinton" vs "paqefwtdjetyiytjneytjoeyjnejeyj"

p -> No repetido, está en str2 -> imprime 'p'
a -> No repetido, está en str2 -> imprime 'a'
d -> No repetido, está en str2 -> imprime 'd'
i -> No repetido, está en str2 -> imprime 'i'
n -> No repetido, está en str2 -> imprime 'n'
t -> No repetido, está en str2 -> imprime 't'
o -> No repetido, está en str2 -> imprime 'o'
n -> Ya repetido, se salta

Resultado: padinto
*/