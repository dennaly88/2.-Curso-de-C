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
/*   Ejercicio Nº 70 Vectores y Matrices : Un programa en C para ingresar los datos de 5 alumnos de la UNEXCA
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 5
#define MAX_LONGITUD 100

int main() {
    char nombres[MAX_ALUMNOS][MAX_LONGITUD];
    char apellidos[MAX_ALUMNOS][MAX_LONGITUD];
    char cedulas[MAX_ALUMNOS][MAX_LONGITUD];
    char correos[MAX_ALUMNOS][MAX_LONGITUD];
    char materias[MAX_ALUMNOS][MAX_LONGITUD];
    int i ;

    printf("--- Ingreso de Datos de Alumnos de la UNEXCA ---\n");

    for (i = 0; i < MAX_ALUMNOS; i++) {
        printf("\n--- Datos del Alumno %d ---\n", i + 1);

        printf("Ingrese el nombre: ");
        fgets(nombres[i], MAX_LONGITUD, stdin);
        nombres[i][strcspn(nombres[i], "\n")] = 0;

        printf("Ingrese el apellido: ");
        fgets(apellidos[i], MAX_LONGITUD, stdin);
        apellidos[i][strcspn(apellidos[i], "\n")] = 0;

        printf("Ingrese la cédula: ");
        fgets(cedulas[i], MAX_LONGITUD, stdin);
        cedulas[i][strcspn(cedulas[i], "\n")] = 0;

        printf("Ingrese el correo: ");
        fgets(correos[i], MAX_LONGITUD, stdin);
        correos[i][strcspn(correos[i], "\n")] = 0;

        printf("Ingrese la materia que cursa: ");
        fgets(materias[i], MAX_LONGITUD, stdin);
        materias[i][strcspn(materias[i], "\n")] = 0;
    }

    printf("\n--- Matriz de Datos de Alumnos de la UNEXCA ---\n");
    printf("%-20s %-20s %-15s %-30s %s\n", "Nombre", "Apellido", "Cédula", "Correo", "Materia");
    printf("--------------------------------------------------------------------------------------------------------\n");

    for (i = 0; i < MAX_ALUMNOS; i++) {
        printf("%-20s %-20s %-15s %-30s %s\n",
               nombres[i],
               apellidos[i],
               cedulas[i],
               correos[i],
               materias[i]);
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


