//https://github.com/leogallardo833-cmd/TPs-INFORMATICA/edit/main/tp4.c
#include <stdio.h>

int main()
{
	float calificacion;
	
	printf("Ingrese la calificacion: ");
	scanf("%f", &calificacion);
	
	if (calificacion >= 90)
	{
		printf("Calificacion: A\n");
	}
	else if (calificacion >= 80)
	{
		printf("Calificacion: B\n");
	}
	else if (calificacion >= 70)
	{
		printf("Calificacion: C\n");
	}
	else if (calificacion >= 60)
	{
		printf("Calificacion: D\n");
	}
	else
	{
		printf("Calificacion: F\n");
	}
	
	return 0;
}
