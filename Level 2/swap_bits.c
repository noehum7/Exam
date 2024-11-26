unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*
1. **Desplazamiento a la derecha (`octet >> 4`)**:
   - Esto toma los 4 bits más significativos del byte y los desplaza 4 posiciones a la derecha.
   - Por ejemplo, si `octet` es `10110010` (en binario), `octet >> 4` resultará en `00001011`.

2. **Desplazamiento a la izquierda (`octet << 4`)**:
   - Esto toma los 4 bits menos significativos del byte y los desplaza 4 posiciones a la izquierda.
   - Usando el mismo ejemplo, `octet << 4` resultará en `00100000`.

3. **Operador OR (`|`)**:
   - Combina los resultados de los dos desplazamientos anteriores.
   - En el ejemplo, `00001011 | 00100000` resultará en `00101011`.

	En resumen, la función intercambia las mitades del byte. Los 4 bits más significativos se convierten en los 4 bits menos significativos y viceversa.
*/