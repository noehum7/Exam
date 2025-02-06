#include <unistd.h>
/*
`strspn` Busca cuántos caracteres consecutivos desde el inicio de s están presentes en accept. 
Se detiene cuando encuentra un carácter que NO está en accept.
*/
size_t ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;
	size_t result;

	i = 0;
	result = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (!accept[j]) // Si llegó al final de accept sin encontrar coincidencia
			return (result);
		result++;
		i++;
	}
	return (result);
}

#include <stdio.h>

int main(void)
{
	// Casos de prueba básicos
	printf("Test 1: %u\n", ft_strspn("Hello", "Hello"));		// Debería ser 5
	printf("Test 2: %u\n", ft_strspn("Hello", "Hell"));			// Debería ser 4
	printf("Test 3: %u\n", ft_strspn("42Hello", "0123456789")); // Debería ser 2
	printf("Test 4: %u\n", ft_strspn("", "Hello"));				// Debería ser 0
	printf("Test 5: %u\n", ft_strspn("Hello", ""));				// Debería ser 0

	return (0);
}
