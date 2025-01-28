unsigned char	reverse_bits(unsigned char octet)
{
	int i = 7;
	unsigned char result = 0;
	while (i >= 0)
	{
		result = (result << 1) | ((octet >> i) & 1);
		i--;
	}
	return (result);
}

/*
Ejemplo con octet = 2 (00000010):

i=7: 
- octet >> 7 = 00000000 & 1 = 0
- result = 00000000 << 1 | 0 = 00000000

i=6:
- octet >> 6 = 00000000 & 1 = 0
- result = 00000000 << 1 | 0 = 00000000

...

i=1:
- octet >> 1 = 00000001 & 1 = 1
- result = 00000000 << 1 | 1 = 00000001

i=0:
- octet >> 0 = 00000010 & 1 = 0
- result = 00000001 << 1 | 0 = 00000010

Resultado final: 01000000 (64 en decimal)
*/