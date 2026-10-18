//https://github.com/leogallardo833-cmd/TPs-INFORMATICA/edit/main/tp3.c

#include <stdio.h>

float calcularAreaRectangulo(float longitud, float altura)
{
    return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura)
{
    return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio)
{
    return 3.1416 * radio * radio;
}

float calcularPerimetroCirculo(float radio)
{
    return 2 * 3.1416 * radio;
}

void imprimirResultados(float area, float perimetro)
{
    printf("El area es: %.2f\n", area);
    printf("El perimetro es: %.2f\n", perimetro);
}

int main()
{
    int opcion;
    float longitud, altura, radio;
    float area, perimetro;

    do
    {
        printf("\nIngrese la figura que desea calcular:\n");
        printf("1. Rectangulo\n");
        printf("2. Circulo\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion != 1 && opcion != 2)
        {
            printf("Opcion incorrecta. Intente nuevamente.\n");
        }

    } while (opcion != 1 && opcion != 2);

    if (opcion == 1)
    {
        printf("\nOpcion de rectangulo seleccionada\n");

        do
        {
            printf("Ingrese la longitud del rectangulo: ");
            scanf("%f", &longitud);

            if (longitud < 0)
            {
                printf("Error: no se permiten numeros negativos.\n");
            }

        } while (longitud < 0);

        do
        {
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);

            if (altura < 0)
            {
                printf("Error: no se permiten numeros negativos.\n");
            }

        } while (altura < 0);

        area = calcularAreaRectangulo(longitud, altura);
        perimetro = calcularPerimetroRectangulo(longitud, altura);

        imprimirResultados(area, perimetro);
    }
    else
    {
        printf("\nOpcion de circulo seleccionada\n");

        do
        {
            printf("Ingrese el radio del circulo: ");
            scanf("%f", &radio);

            if (radio < 0)
            {
                printf("Error: no se permiten numeros negativos.\n");
            }

        } while (radio < 0);

        area = calcularAreaCirculo(radio);
        perimetro = calcularPerimetroCirculo(radio);

        imprimirResultados(area, perimetro);
    }

    return 0;
}
