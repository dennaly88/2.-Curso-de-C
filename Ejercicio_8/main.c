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
/*   Ejercicio Nº 8 Estructuras Condicionales Simples : Dos números, si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo.
/*____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{

int Num1;
int Num2;
int Sum;
int Res;
int Pro;
int Div;


printf("****************************************************************\n");
printf("Selecciona dos numeros  \n");
printf("*****************************************************************\n");

printf("Introduce el Primer numero: ");
scanf("%d", &Num1);



printf("Introduce el Segundo numero: ");
scanf("%d", &Num2);



if(Num1>Num2){

Sum = Num1 + Num2 ;
Res = Num1 - Num2 ;

printf("\nComo Num1 es Mayor a Num2: \n");
printf("\n*****************************************************************\n");


       printf("La Suma es %d.\n",Sum );
       printf("La Resta es %d.\n",Res );



}
else{

Pro = Num1 * Num2;
Div = Num1 / Num2;
printf("\nComo Num2 es Mayor a Num1: \n");
printf("*****************************************************************\n");

       printf("La Multiplicación es %d.\n",Pro );
       printf("La División es %d.\n",Div );




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
