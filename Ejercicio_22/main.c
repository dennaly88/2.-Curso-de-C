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


/*___________________________________________________________________________________________________________________________________________________________________________________________________________*/
/*   Ejercicio Nº 22 Condiciones Compuestas Operadores Lógicos : De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
                                                                 a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
                                                                 b) Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
                                                                 c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
/*______________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()

{

int sueldo;
int antiguedad;
int sueldo_total;

printf("***********************************************************\n");
printf("  Aumento por trabajador                                   \n");
printf("***********************************************************\n");



printf("-------------------------------------\n");
printf("Introduce el Sueldo del Trabajador:");
scanf("%d", &sueldo) ;
printf("\n------------------------------------\n");


printf("-------------------------------------\n");
printf("Introduce el Antiguedad del Trabajador en años:");
scanf("%d", &antiguedad) ;
printf("\n------------------------------------\n");




  if (sueldo < 500 &&  antiguedad >= 10){

  sueldo_total = (sueldo * 0.20) + sueldo;


  }else

  if (sueldo < 500 &&  antiguedad < 10){

  sueldo_total = (sueldo * 0.05) + sueldo;


  }else

  if (sueldo >= 500 &&  antiguedad>= 10){

  sueldo_total =  sueldo;


  }


printf("--------------------------------------------------------------\n");
printf("El sueldo del trabajador es :   :%d",sueldo_total  );
printf("\n");

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


