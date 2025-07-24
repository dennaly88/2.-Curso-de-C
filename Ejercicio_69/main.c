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
/*   Ejercicio Nº 69 Vectores y Matrices : Confeccionar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
2-Imprimir los nombres.
3-Ordenar alfabéticamente los nombres.
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <string.h>

#define MAX_PERSONAS 5
#define MAX_NOMBRE 50
#define MAX_EDAD 3

int main() {
    char nombres[MAX_PERSONAS][MAX_NOMBRE];
    char temp_nombre[MAX_NOMBRE];
    int i , j;

    printf("--- Almacenamiento y Ordenamiento de Nombres ---\n");

    for (i = 0; i < MAX_PERSONAS; i++) {
        printf("Ingrese el nombre de la persona %d: ", i + 1);
        fgets(nombres[i], MAX_NOMBRE, stdin);
        nombres[i][strcspn(nombres[i], "\n")] = 0;
    }



    printf("\n--- Nombres Ingresados ---\n");
    for (i = 0; i < MAX_PERSONAS; i++) {
        printf("- %s\n", nombres[i]);
    }



    for (i = 0; i < MAX_PERSONAS - 1; i++) {
        for (j = i + 1; j < MAX_PERSONAS; j++) {
            if (strcmp(nombres[i], nombres[j]) > 0) {
                strcpy(temp_nombre, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], temp_nombre);
            }
        }
    }

    printf("\n--- Nombres Ordenados Alfabéticamente ---\n");
    for (i = 0; i < MAX_PERSONAS; i++) {
        printf("- %s\n", nombres[i]);
    }

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


