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
/*   Ejercicio Nº 38 Estructura Repetitiva For: Realizar un programa que lea los lados de 3 triángulos, e informar:
       a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
       b) Cantidad de triángulos de cada tipo.
       c) Tipo de triángulo que posee menor cantidad.
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>






int main()
{
    int la;
    int lb;
    int lc;
    int i;
    int ce;
    int ci;
    int ces;



    la = 0;
    lb = 0;
    lc = 0;
    ce = 0;
    ci = 0;
    ces = 0;


for(i = 1; i <= 3; i++)
 {
   printf("\n Ingresa los lados del trinagulo :%d \n",i);
    printf("--------------------------------------------\n");

   printf("Ingrese el Lado A     : ");
   scanf("%d", &la) ;

   printf("Ingrese el Lado B     : ");
    scanf("%d", &lb) ;

   printf("Ingrese el Lado C     : ");
    scanf("%d", &lc) ;




   if (la==lb && la==lc && lb==lc  ){

        ce = ce +1 ;
        printf("\n-------------------------\n");
        printf("El Triángulo es Equilátero\n");
        printf("\n-------------------------\n");


    } else
    if (la==lb || la==lc || lb==lc  ){

        ci = ci +1 ;
        printf("\n-------------------------\n");
        printf("El Triángulo es Isósceles\n");
        printf("\n-------------------------\n");



    } else

    if (la!=lb && la!=lc && lb!=lc  ){

        ces = ces +1 ;
        printf("\n-------------------------\n");
        printf("El Triángulo es Escaleno\n");
        printf("\n-------------------------\n");

    }


}


if (ce<ci && ce<ces){

        printf("\n-------------------------------------\n");
        printf("El Triángulo con menos es el Equilatero\n");
        printf("\n-------------------------------------\n");
        printf("\n-----------------------------------------------------\n");
        printf("La cantidad de Triángulo Equilátero   es   :   %d \n",ce );
        printf("La cantidad de Triángulo es Isósceles es   :   %d \n",ci );
        printf("La cantidad de Triángulo es Escaleno  es   :   %d \n",ces );
        printf("\n-----------------------------------------------------\n");


    } else

if (ci<ce && ci<ces){

        printf("\n-------------------------------------\n");
        printf("El Triángulo con menos es el Isósceles \n");
        printf("\n-------------------------------------\n");
        printf("\n-----------------------------------------------------\n");
        printf("La cantidad de Triángulo Equilátero   es   :   %d \n",ce );
        printf("La cantidad de Triángulo es Isósceles es   :   %d \n",ci );
        printf("La cantidad de Triángulo es Escaleno  es   :   %d \n",ces );
        printf("\n-----------------------------------------------------\n");


    } else

    if (ces<ce && ces<ci){

        printf("\n-------------------------------------\n");
        printf("El Triángulo con menos es el Escaleno \n");
        printf("\n-------------------------------------\n");
        printf("\n-----------------------------------------------------\n");
        printf("La cantidad de Triángulo Equilátero   es   :   %d \n",ce );
        printf("La cantidad de Triángulo es Isósceles es   :   %d \n",ci );
        printf("La cantidad de Triángulo es Escaleno  es   :   %d \n",ces );
        printf("\n-----------------------------------------------------\n");


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
