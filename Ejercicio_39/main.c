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
/*   Ejercicio Nº 39 Estructura Repetitiva For: 39. Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
    Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.
                                                      Primer Cuadrante (I): Si x>0 y y>0. Los puntos en este cuadrante tienen ambas coordenadas positivas.
                                                      Segundo Cuadrante (II): Si x<0 y y>0. Los puntos en este cuadrante tienen la coordenada x negativa y la coordenada y positiva.
                                                      Tercer Cuadrante (III): Si x<0 y y<0. Los puntos en este cuadrante tienen ambas coordenadas negativas.
                                                      Cuarto Cuadrante (IV): Si x>0 y y<0. Los puntos en este cuadrante tienen la coordenada x positiva y la coordenada y negativa.
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
int x;
int y;
int puntos;
int pc;
int sc;
int tc;
int cc;
int i;

pc = 0 ;
sc = 0 ;
tc = 0 ;
cc = 0 ;




printf("Ingrese la Cantidad de Puntos a Graficar : ");
scanf("%d", &puntos) ;


for(i = 1; i <= puntos; i++)
 {

printf("\n Puntos a Graficar Numero :%d \n",i);
printf("--------------------------------------------\n");

printf("\n Ingresa la Coordenada X : \n");
scanf("%d", &x) ;
printf("--------------------------------------------\n");

printf("\n Ingresa la Coordenada Y : \n");
scanf("%d", &y) ;
printf("--------------------------------------------\n");

if (x>0 && y>0){

        pc = pc +1 ;
        printf("\n-------------------------\n");
        printf("Primer Cuadrante\n");
        printf("\n-------------------------\n");


    } else

if (x<0 && y>0){


        sc = sc +1 ;
        printf("\n-------------------------\n");
        printf("Segundo Cuadrante\n");
        printf("\n-------------------------\n");


    }else
    if (x<0 && y<0){

        tc = tc +1 ;
        printf("\n-------------------------\n");
        printf("Tercer Cuadrante\n");
        printf("\n-------------------------\n");


    }else
    if (x>0 && y<0){
        cc = cc +1 ;
        printf("\n-------------------------\n");
        printf("Cuarto Cuadrante\n");
        printf("\n-------------------------\n");


    }

}

        printf("\n-------------------------------------\n");
        printf("La Cantidad por Cuadrantes             \n");
        printf("\n-------------------------------------\n");
        printf("\n-----------------------------------------------------\n");
        printf("La cantidad en el Primer Cuadrante es   :   %d \n",pc);
        printf("La cantidad en el Segundo Cuadrante es  :   %d \n",sc);
        printf("La cantidad en el Tercer Cuadrante es  :   %d \n",tc);
        printf("La cantidad en el Cuarto Cuadrante es  :   %d \n",cc);


        printf("\n-----------------------------------------------------\n");





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
