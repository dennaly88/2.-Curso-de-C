/* -------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------*/
/*  DANNY JOSE JIMENEZ GUTIERREZ                                                                                      */
/*  TELEFONO :0424-281-44-55                                                                                          */
/*  CORREO : DENNALY88@GMAIL.COM                                                                                      */
/*  INGENIERO EN SISTEMAS                                                                                             */
/*--------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------*/
/*  CUA , ESTADO MIRANDA 2025                                                                                         */
/*  CURSO DE C                                                                                                        */
/*  APLICACIÓN PARA CORRER LOS EJERCICIOS ES CODE::BLOCKS                                                             */
/* -------------------------------------------------------------------------------------------------------------------*/
/* -------------------------------------------------------------------------------------------------------------------*/


/*____________________________________________________________________________________________________________________________________________________________________________________________________________*/
/*   Ejercicio Nº 66 Vectores y Matrices : Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos precios en un vector paralelo de tipo float.
        Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se debe contar)
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <string.h>

int main() {
    char nombres[5][50];
    float precios[5];

    int i;
    int productos_mas_caros = 0;
    float precio_primer_producto;
    printf("\n-------------------------------------\n");
    printf("\n Ingreso de Productos y Precios  \n");
    printf("\n-------------------------------------\n");


    for (i = 0; i < 5; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        fgets(nombres[i], 50, stdin);
        nombres[i][strcspn(nombres[i], "\n")] = 0;

        printf("Ingrese el precio de %s: ", nombres[i]);
        scanf("%f", &precios[i]);

        while (getchar() != '\n');
    }

    precio_primer_producto = precios[0];

    for (i = 0; i < 5; i++) {
        if (precios[i] > precio_primer_producto) {
            productos_mas_caros++;
        }
    }

    printf("\n--- Resumen de Productos ---\n");
    for (i = 0; i < 5; i++) {
        printf("Producto: %s, Precio: %.2f\n", nombres[i], precios[i]);
    }

    printf("\nCantidad de productos con precio mayor al primer producto (%.2f): %d\n", precio_primer_producto, productos_mas_caros);

    return 0;
}

/* -------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------*/
/*  DANNY JOSE JIMENEZ GUTIERREZ                                                                                      */
/*  TELEFONO :0424-281-44-55                                                                                          */
/*  CORREO : DENNALY88@GMAIL.COM                                                                                      */
/*  INGENIERO EN SISTEMAS                                                                                             */
/*--------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------*/
/*  CUA , ESTADO MIRANDA 2025                                                                                         */
/*  CURSO DE C                                                                                                        */
/*  APLICACIÓN PARA CORRER LOS EJERCICIOS ES CODE::BLOCKS                                                             */
/* -------------------------------------------------------------------------------------------------------------------*/
/* -------------------------------------------------------------------------------------------------------------------*/

