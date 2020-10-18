  
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char binaryNumber[] = "1001";
	int bin, decimal = 0;
	
	bin = atoi(binaryNumber);

	for(int i = 0; bin; i++, bin /= 10) 
		if (bin % 10)
			decimal += pow(2, i);

	printf("%d", decimal);

	return 0;
}
