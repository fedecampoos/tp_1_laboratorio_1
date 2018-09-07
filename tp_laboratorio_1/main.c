#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"




int main()
{
    int opcion;
    float n1;
    float n2;
    float  resultado;



    do{

        system("cls");
        printf("Menu");
        printf("\n\n1.- Ingresar primer numero(A= %.2f)", n1);
        printf("\n\n2.- Ingresar segundo numero(B= %.2f)", n2);
        printf("\n\n3.- Sumar(A+B).");
        printf("\n\n4.- Restar(A-B).");
        printf("\n\n5.- Multiplicar(A*B).");
        printf("\n\n6.- Dividir(A/B).");
        printf("\n\n7.- Factorial(A!).");
        printf("\n\n8.- Salir.");
        printf("\n\nSeleccione opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer operando\n");
                scanf("%f", &n1);
                break;

            case 2:
                printf("Ingrese el segundo operando\n");
                scanf("%f", &n2);
                break;

            case 3:
                resultado = suma(n1, n2);
                printf("\nEl resultado de la suma es %.2f\n\n", resultado);
                break;

            case 4:
                resultado = resta(n1, n2);
                printf("\nEl resultado de la resta es %.2f\n\n", resultado);
                break;

            case 5:
                resultado = multiplicacion(n1, n2);
                printf("\nEl resultado de la multiplicacion es %.2f\n\n", resultado);
                break;

            case 6:
                resultado = division(n1, n2);
                printf("\nEl resultado de la division es %.2f\n\n", resultado);
                break;

            case 7:
                resultado=calcularFactorial(n1);

                printf("\n El de A es %.2f\n\n" , resultado);


                break;

            case 8:

                break;

            default:
                printf("\nOpcion incorrecta \n\n");
                break;
        }
        system("pause");
    }while(opcion != 8);



    return 0;

}

