/*
- Para base 16 (hexadecimal): válido hasta F/f (valor 15)
- Para base 10 (decimal): solo válido hasta 9
- Para base 2 (binario): solo válido 0 y 1
*/

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0, result = 0, n = 0;
	int sign = 1;

	if (str_base <= 1 || str_base > 16)
        return (0);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			n = str[i] - 'a' + 10; 
		else if (str[i] >= 'A' && str[i] <= 'F')
			n = str[i] - 'A' + 10;
		else
			break ;
		if (n >= str_base)
            break;
		result = result * str_base + n;
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int main(void)
{
    // Pruebas base 2 (binario)
    printf("Base 2: %d\n", ft_atoi_base("101", 2));        // 5
    printf("Base 2: %d\n", ft_atoi_base("-101", 2));       // -5

    // Pruebas base 8 (octal)
    printf("Base 8: %d\n", ft_atoi_base("12", 8));         // 10
    printf("Base 8: %d\n", ft_atoi_base("-12", 8));        // -10

    // Pruebas base 10 (decimal)
    printf("Base 10: %d\n", ft_atoi_base("123", 10));      // 123
    printf("Base 10: %d\n", ft_atoi_base("-123", 10));     // -123

    // Pruebas base 16 (hexadecimal)
    printf("Base 16: %d\n", ft_atoi_base("1a", 16));       // 26
    printf("Base 16: %d\n", ft_atoi_base("1A", 16));       // 26
    printf("Base 16: %d\n", ft_atoi_base("-1A", 16));      // -26

    // Pruebas casos inválidos
    printf("Base 1: %d\n", ft_atoi_base("1", 1));          // 0
    printf("Base 17: %d\n", ft_atoi_base("1", 17));        // 0
    printf("Base 16 invalida: %d\n", ft_atoi_base("1G", 16)); // 1

    return (0);
}