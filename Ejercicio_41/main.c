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
/*   Ejercicio Nº 41 Estructura Repetitiva For: Se cuenta con la siguiente información:
         Las edades de 5 estudiantes del turno mañana.
         Las edades de 6 estudiantes del turno tarde.
         Las edades de 11 estudiantes del turno noche.
         Las edades de cada estudiante deben ingresarse por teclado.
             a) Obtener el promedio de las edades de cada turno
             b) Imprimir dichos promedios (promedio de cada turno)
             c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
int m;
int t;
int n;
int cem;
int cet;
int cen;
int edadm;
int edadt;
int edadn;
int prom;
int prot;
int pron;


m = 0;
t = 0;
n = 0;
cem = 0;
cet = 0;
cen = 0;
edadm = 0;
edadt = 0;
edadn = 0;



printf("--------------------------------------------\n");
printf("\n Suma de edades por turnos \n");
printf("--------------------------------------------\n");


printf("--------------------------------------------\n");
printf("\n Estudiantes del Turno de la Mañana       \n");
printf("--------------------------------------------\n");


for(m = 1; m <=5; m++)
 {

printf("\n Ingrese la Edad Estudiante Numero :%d \n",m);

scanf("%d", &edadm) ;
printf("--------------------------------------------\n");

cem = cem + edadm ;


}

printf("--------------------------------------------\n");
printf("\n Estudiantes del Turno de la Tarde       \n");
printf("--------------------------------------------\n");



for(t = 1; t <=6; t++)
 {

printf("\n Ingrese la Edad Estudiante Numero :%d \n",t);

scanf("%d", &edadt) ;
printf("--------------------------------------------\n");

cet = cet + edadt ;


}

printf("--------------------------------------------\n");
printf("\n Estudiantes del Turno de la Noche       \n");
printf("--------------------------------------------\n");


for(n = 1; n <=11; n++)
 {

printf("\n Ingrese la Edad Estudiante Numero :%d \n",n);

scanf("%d", &edadn) ;
printf("--------------------------------------------\n");

cen = cen + edadn ;


}

prom = cem / 5 ;

prot = cet /6 ;

pron = cen /11 ;



        printf("\n-------------------------------------\n");
        printf("Comparación por Turnos                 \n");
        printf("\n-------------------------------------\n");
        printf("\n---------------------------------------------------------------\n");
        printf("Promedio de edades de el Turno de la Mañana es  :   %d \n",prom);
        printf("Promedio de edades de el Turno de la Tarde es   :   %d \n",prot);
        printf("Promedio de edades de el Turno de la Noche es   :   %d \n",pron);
        printf("\n---------------------------------------------------------------\n");

        if (prom < prot && prom < pron){

        printf("\n--------------------------------------------------------------------\n");
        printf("El Menor Promedio de los Turnos es el de la Mañana con   :   %d \n",prom);
        printf("\n-------------------------------------------------------------------\n");


    } else
    if (prot < prom && prot < pron){

        printf("\n--------------------------------------------------------------------\n");
        printf("El Menor Promedio de los Turnos es el de la Tarde con   :   %d \n",prot);
        printf("\n-------------------------------------------------------------------\n");


    } else  if (pron < prom && pron < prot){

        printf("\n--------------------------------------------------------------------\n");
        printf("El Menor Promedio de los Turnos es el de la Noche con   :   %d \n",pron);
        printf("\n-------------------------------------------------------------------\n");


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
