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
/*  DEV DEVELOPMENT
/* -------------------------------------------------------------------------------------------------------------------*/




#include <stdio.h>   // Para printf, scanf, fgets, getchar
#include <stdlib.h>  // Para strtol, strtod
#include <string.h>  // Para strcspn
#include <stdbool.h> // Para el tipo de dato bool (C99 o posterior)



int main() {

    int miEntero;
    double miReal;
    bool miBooleano;
    float mi_float;
    char miCaracter;
    char miCadena[100];
    char bufferEntrada[150];


    printf("\n------------------------------------------\n");
    printf("1. Introduce un número entero: ");
    scanf("%d", &miEntero) ;
    printf("\n------------------------------------------\n");


    printf("\n------------------------------------------\n");
    printf("\n 2. Introduce un número real (ej. 3.14 o 123.45): ");
    scanf("%f", mi_float);
    printf("\n------------------------------------------\n");

    printf("\n------------------------------------------\n");
    printf("\n 3. Introduce un valor booleano (0 para Falso, 1 para Verdadero): ");
    printf("\n------------------------------------------\n");

    printf("\n------------------------------------------\n");
    printf("\n 4. Introduce un solo carácter: ");
    scanf(" %c", &mi_caracter);
    printf("\n------------------------------------------\n");



    printf("\n------------------------------------------\n");
    printf("\n 5. Introduce una cadena de texto (puede contener espacios): ");
       // %s lee caracteres hasta el primer espacio en blanco.
       // %49s le dice a scanf que lea un máximo de 49 caracteres
      // para dejar espacio para el carácter nulo '\0' al final.
    scanf("%49s", miCadena);
    printf("\n------------------------------------------\n");


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
/*  DEV DEVELOPMENT                                                                                                   */
/* -------------------------------------------------------------------------------------------------------------------*/
 /*                                                                                                                      */
/* -------------------------------------------------------------------------------------------------------------------*/

