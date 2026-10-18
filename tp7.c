#include <stdio.h>

#define TAM 5

int main()
{
	int codigo[TAM];
	float precio[TAM];
	int i;
	int posicionMayor = 0;
	int posicionMenor = 0;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio:\n", TAM);
	
	for (i = 0; i < TAM; i++)
	{
		do
		{
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigo[i]);
			
			if (codigo[i] < 1 || codigo[i] > 999999999)
			{
				printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
			}
			
		} while (codigo[i] < 1 || codigo[i] > 999999999);
		
		do
		{
			printf("Ingrese el precio: ");
			scanf("%f", &precio[i]);
			
			if (precio[i] < 0)
			{
				printf("Error. El precio no puede ser negativo.\n");
			}
			
		} while (precio[i] < 0);
	}
	
	printf("\nCodigo     Precio\n");
	
	for (i = 0; i < TAM; i++)
	{
		printf("%9d %10.2f\n", codigo[i], precio[i]);
	}
	
	for (i = 1; i < TAM; i++)
	{
		if (precio[i] > precio[posicionMayor])
		{
			posicionMayor = i;
		}
		
		if (precio[i] < precio[posicionMenor])
		{
			posicionMenor = i;
		}
	}
	
	printf("\nMas caro: [%d] %.2f\n",
		   codigo[posicionMayor], precio[posicionMayor]);
	
	printf("Mas barato: [%d] %.2f\n",
		   codigo[posicionMenor], precio[posicionMenor]);
	
	return 0;
}

