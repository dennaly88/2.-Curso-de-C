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
/*   Ejercicio Nº 68 Vectores y Matrices :  En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en estructuras paralelas)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 4
#define MAX_NOMBRE 50

int main() {
    char nombres[MAX_ALUMNOS][MAX_NOMBRE];
    int notas[MAX_ALUMNOS];
    int i;
    int muy_buenos = 0;

    printf("--- Registro de Notas de Alumnos ---\n");
    for (i = 0; i < MAX_ALUMNOS; i++) {
        printf("\nIngrese el nombre del alumno %d: ", i + 1);
        fgets(nombres[i], MAX_NOMBRE, stdin);
        nombres[i][strcspn(nombres[i], "\n")] = 0;

        printf("Ingrese la nota de %s: ", nombres[i]);
        scanf("%d", &notas[i]);
        while (getchar() != '\n');
    }

    printf("\n--- Listado de Alumnos y Condiciones ---\n");
    printf("%-20s %-10s %s\n", "Nombre", "Nota", "Condición");
    printf("-------------------------------------------------\n");

    for (i = 0; i < MAX_ALUMNOS; i++) {
        char condicion[20];

        if (notas[i] >= 8) {
            strcpy(condicion, "Muy Bueno");
            muy_buenos++;
        } else if (notas[i] >= 4 && notas[i] <= 7) {
            strcpy(condicion, "Bueno");
        } else {
            strcpy(condicion, "Insuficiente");
        }

        printf("%-20s %-10d %s\n", nombres[i], notas[i], condicion);
    }

    printf("\n--- Resumen ---\n");
    printf("Cantidad de alumnos con condición 'Muy Bueno': %d\n", muy_buenos);

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


