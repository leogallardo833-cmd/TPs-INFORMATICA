#include <stdio.h>

int main()
{
    int cantidad, i;
    float nota, suma = 0, promedio;
    float mayor, menor;

    do
    {
        printf("Ingrese la cantidad de estudiantes: ");
        scanf("%d", &cantidad);

        if (cantidad <= 0)
        {
            printf("Error: debe ingresar una cantidad mayor que cero.\n");
        }

    } while (cantidad <= 0);

    for (i = 1; i <= cantidad; i++)
    {
        do
        {
            printf("Ingrese la calificacion del estudiante %d (0 a 100): ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 100)
            {
                printf("Error: la calificacion debe estar entre 0 y 100.\n");
            }

        } while (nota < 0 || nota > 100);

        suma = suma + nota;

        if (i == 1)
        {
            mayor = nota;
            menor = nota;
        }
        else
        {
            if (nota > mayor)
            {
                mayor = nota;
            }

            if (nota < menor)
            {
                menor = nota;
            }
        }
    }

    promedio = suma / cantidad;

    printf("\n--- Resultados ---\n");
    printf("El promedio de las calificaciones es: %.2f\n", promedio);
    printf("La calificacion mas alta es: %.2f\n", mayor);
    printf("La calificacion mas baja es: %.2f\n", menor);

    return 0;
}

