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
/*   Ejercicio Nº 48 Estructura Repetitiva While: En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado e informe
       A. cuántos empleados cobran entre $100 y $300
       B. cuántos cobran más de $300. Además el programa deberá
       C. informar el importe que gasta la empresa en sueldos al personal
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
int personas;
int cont ;
int sueldo ;
int cont_100_300;
int cont_mayor_300;
int salarios_empresa;



cont =1 ;
cont_100_300= 0 ;
cont_mayor_300= 0 ;
salarios_empresa = 0 ;

printf(" Ingrese las Personas que trabajan en esta empresa \n");
printf("--------------------------------------------------------------\n");
scanf("%d", &personas) ;


while (cont <= personas) {
printf(" Ingrese el sueldo del Empleado Numero  %d \n",cont);
printf("--------------------------------------------\n");
scanf("%d", &sueldo) ;
  if (sueldo>100 && sueldo<=300){
     cont_100_300 = cont_100_300 +1 ;
     salarios_empresa = salarios_empresa + sueldo ;


  }else

  if (sueldo>300){
     cont_mayor_300 = cont_mayor_300 +1 ;
       salarios_empresa = salarios_empresa + sueldo ;



  }


cont = cont +1;




}

printf("\n---------------------------------------------------------------------------\n");
printf("La cantidad de empleados que cobran entre $100 y $300 son %d \n",cont_100_300);
printf("La cantidad de empleados que cobran mas de $300 son %d \n",cont_mayor_300);
printf("La cantidad de sueldo que paga la empresa es %d \n",salarios_empresa);

printf("--------------------------------------------------------------\n");



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
