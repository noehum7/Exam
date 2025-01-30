#include <string.h>

/*
La función strpbrk (string pointer break) hace lo siguiente:

Busca la primera ocurrencia en s1 de cualquier carácter que esté en s2
Devuelve un puntero a la posición donde encontró la primera coincidencia
Si no encuentra ninguna coincidencia, devuelve NULL.

*/

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{	
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}