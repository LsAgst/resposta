#include <stdio.h>
#include <math.h>

main()
{
	//fibo
	int num1=0, num2=1, aux, fibo;
	fibo = 378;
    while(aux<fibo)
    {
        aux = num1+num2;
        num1 = num2;
        num2=aux;
        
    }
	if(fibo==aux)
    {
    	printf("\nfaz parte da sequencia fibonacci");
	}
	else
	{
		printf("\nnaofaz parte da sequencia fibonacci");
	}
}
