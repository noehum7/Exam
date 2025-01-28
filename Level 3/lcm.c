unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	n = (a > b) ? a : b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

#include <stdio.h>

int main(void)
{
    // Casos normales
    printf("MCM(4, 6) = %u\n", lcm(4, 6));     // 12
    printf("MCM(12, 18) = %u\n", lcm(12, 18)); // 36
    printf("MCM(3, 7) = %u\n", lcm(3, 7));     // 21
    
    // Casos con números iguales
    printf("MCM(5, 5) = %u\n", lcm(5, 5));     // 5
    
    // Casos con 0
    printf("MCM(0, 5) = %u\n", lcm(0, 5));     // 0
    printf("MCM(5, 0) = %u\n", lcm(5, 0));     // 0
    printf("MCM(0, 0) = %u\n", lcm(0, 0));     // 0
    
    return (0);
}

/*
Escriba una función que tome dos int sin signo como parámetros y devuelva el
MCM calculado de esos parámetros.

MCM (mínimo común múltiplo) de dos números enteros distintos de cero es el 
número entero positivo más pequeño divisible por ambos números enteros.

EL MCM se puede calcular de dos maneras:

- Puedes calcular todos los múltiplos de cada número entero hasta que tengas un 
común múltiplo distinto de 0

- Puedes utilizar el HCF (máximo factor común) de estos dos números enteros y
calcular de la siguiente manera:

	MCM(x, y) = | x * y | / HCF(x, y)

  | x * y | significa "Valor absoluto del producto de x por y"

Si al menos un número entero es nulo, MCM es igual a 0.

El prototipo de la función será:

  unsigned int    lcm(unsigned int a, unsigned int b);
*/