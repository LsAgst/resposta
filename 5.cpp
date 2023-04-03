#include <stdio.h>
#include <string.h>
main()
{
	//palavra a ser invertida
	char str[]="paralelepipedo",aux;
	int tamanho,indice=0;
	tamanho = strlen(str)-1;
	while(indice<tamanho)
	{
	aux = str[indice];
	str[indice]=str[tamanho];
	str[tamanho]=aux;
	indice++;
	tamanho--;
	}
	printf("%s", str);
}
