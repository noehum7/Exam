#include <stdio.h>

/*
strcspn (string complement span)
Cuenta la longitud del segmento inicial de s que NO contiene ningún carácter de reject
Devuelve un número (size_t) que representa esa longitud
Se detiene en la primera coincidencia pero devuelve la posición, no el puntero.
*/

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i, j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int main(void)
{
    printf("%zu\n", ft_strcspn("Hello", "lo")); 
    printf("%zu\n", ft_strcspn("Test", "xyz"));
    return 0;
}
