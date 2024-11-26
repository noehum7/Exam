unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result;
	int i = 8;

	result = 0;
	while (i > 0)
	{
		// result = (result << 1) | (octet & 1);
		// octet >>= 1;
		result = result * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return result;
}

/*
result * 2: Equivale a desplazar bits a la izquierda (<<)

Multiplicar por 2 = mover todos los bits una posición a la izquierda
octet % 2: Equivale a obtener el bit menos significativo (& 1)

Si el número es par, el último bit es 0
Si es impar, el último bit es 1
octet / 2: Equivale a desplazar bits a la derecha (>>)

Dividir entre 2 = mover todos los bits una posición a la derecha
*/