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
/*   Ejercicio Nº 51 Estructura Repetitiva While: Realizar un programa que permita cargar dos listas de 15 valores cada una.
     Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
    Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

int cont;
int cont2 ;
int suma1 ;
int suma2 ;
int valor1 ;
int valor2 ;


cont = 1;
cont2 = 1;
suma1 = 0;
suma2 = 0;




printf("--------------------------------------------------------------\n");
printf(" Carga de Listas  \n");
printf("--------------------------------------------------------------\n");




while (cont< 16) {
printf("\nLista NUmero 1 \n");
printf("--------------------------------------------------------------\n");
printf("Introduce el Valor %d  \n",cont);
cont = cont +1 ;
scanf("%d", &valor1) ;
suma1 = suma1 + valor1;


}




while (cont2 < 16) {
printf("\n Lista NUmero 2 \n");
printf("--------------------------------------------------------------\n");

printf("Introduce el Valor %d  \n",cont2);
scanf("%d", &valor2) ;
suma2 = suma2 + valor2;

cont2 = cont2 +1 ;

}



if(suma1>suma2){

    printf("Lista 1 mayor \n");


}else if(suma1>suma2){

    printf("Lista 2 mayor \n");


}else

if(suma1==suma2){

    printf("Listas iguales\n");


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
