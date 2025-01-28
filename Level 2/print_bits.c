#include <unistd.h>

void	print_bits(unsigned char octet) // octet = 2 = 00000010 
{
	int i = 7;

	while (i >= 0)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else 
			write(1, "0", 1); 
		i--;
	}
}

int main(void)
{
    print_bits(2);    // debería imprimir: 00000010
    write(1, "\n", 1);
	// i=7: 00000010 >> 7 = 00000000 & 1 = 0
	// i=6: 00000010 >> 6 = 00000000 & 1 = 0
	// i=5: 00000010 >> 5 = 00000000 & 1 = 0
	// i=4: 00000010 >> 4 = 00000000 & 1 = 0
	// i=3: 00000010 >> 3 = 00000000 & 1 = 0
	// i=2: 00000010 >> 2 = 00000000 & 1 = 0
	// i=1: 00000010 >> 1 = 00000001 & 1 = 1
	// i=0: 00000010 >> 0 = 00000010 & 1 = 0
    
    print_bits(0);    // debería imprimir: 00000000
    write(1, "\n", 1);
    
    print_bits(255);  // debería imprimir: 11111111
    write(1, "\n", 1);
    
    print_bits(64);   // debería imprimir: 01000000
    write(1, "\n", 1);

    return (0);
}