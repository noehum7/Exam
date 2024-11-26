#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 7;

	while (i >= 0)
	{
		// if ((octet >> i) & 1)
		// 	write(1, "1", 1);
		// else 
		// 	write(1, "0", 1);
        
        
        if (octet % 2 == 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        octet = octet / 2;
        
		i--;
	}
}

int main(void)
{
    // Casos de prueba
    print_bits(2);    // debería imprimir: 00000010
    write(1, "\n", 1);
    
    print_bits(0);    // debería imprimir: 00000000
    write(1, "\n", 1);
    
    print_bits(255);  // debería imprimir: 11111111
    write(1, "\n", 1);
    
    print_bits(64);   // debería imprimir: 01000000
    write(1, "\n", 1);

    return (0);
}