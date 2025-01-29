/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nporras- <nporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:32:30 by nporras-          #+#    #+#             */
/*   Updated: 2025/01/29 16:52:33 by nporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *av[])
{
	int n;
	int div;

	if (argc == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		else
		{
			div = 2;
			while (n > 1)
			{
				if (n % div == 0)
				{
					printf("%d", div); // 42 % 2 = 0 -> 21 % 3 = 0 -> 7 % 7 = 0
					n /= div; // 42 / 2 = 21 -> 21 / 3 = 7 -> 7 / 7 = 1
					if (n > 1)
						printf("*");
				}
				else
					div++; // 2 -> 3 -> ... -> 7 (div = 4, 5 y 6 falla)
			}
		}
	}
	printf("\n");
	return 0;
}

/* Un factor primo es un número primo que divide exactamente a otro número.
Si el entero es 1, imprime "1" como el único factor primo. De lo contrario, el
// programa inicializa una variable de divisor en 2 y entra en un bucle que continúa
// hasta que el entero se convierte en 1. En cada iteración, verifica si el divisor
// actual es un factor del entero. Si lo es, imprime el divisor, divide el entero por
// el divisor y continúa el bucle. Si el divisor no es un factor, incrementa el divisor
// y continúa el bucle. Este proceso encuentra todos los factores primos del entero.
// Finalmente, el programa imprime un carácter de nueva línea para finalizar la salida.

1. Si argc != 2: imprime "\n"
2. Si n == 1: imprime "1\n"
3. Si no:
   - div = 2
   - Mientras n > 1:
     - Si n es divisible por div:
       * Imprime div
       * n = n / div
       * Si n > 1, imprime "*"
     - Si no:
       * div++

42:  2*3*7
225: 3*3*5*5
1:   1
*/


/*
Escriba un programa que tome un int positivo y muestre sus factores primos en la
salida estándar, seguida de una nueva línea.

Los factores deben mostrarse en orden ascendente y separados por '*', de modo que
la expresión en la salida da el resultado correcto.

Si el número de parámetros no es 1, simplemente muestre una nueva línea.

La entrada, cuando la haya, será válida.

Ejemplos:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/