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


/*____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/
/*   Ejercicio Nº 47 Estructura Repetitiva While: Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas

/*_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

int personas;
int cont ;
float altura ;
float prom, sum;


cont =1 ;
prom= 0 ;
sum= 0 ;



printf("\n-----------------------------------------------\n");
printf("Promedio de Alturas de Personas                   \n");
printf("\n------------------------------------------------\n");


printf(" Ingrese las Personas que vamos a Calcular la altura \n");
printf("--------------------------------------------------------------\n");

scanf("%d", &personas) ;

while (cont <= personas) {

printf(" Ingrese la Altura de la Persona Numero  %d \n",cont);
printf("--------------------------------------------\n");
scanf("%f", &altura) ;
sum = sum +altura ;
cont = cont +1 ;

}


prom = sum / personas ;

        printf("\n---------------------------------------------------------------\n");
        printf("El promedio es: %.2f metros.\n", prom);

        printf("\n---------------------------------------------------------------\n");




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
