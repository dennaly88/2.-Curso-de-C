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
/*   Ejercicio Nº 57 Estructura Repetitiva Do While : En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual.
     El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.

       Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
         a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
          Estado de la cuenta	'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.
			b) La suma total de los saldos acreedores.
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{

int numero_cuenta;
float saldo;
float suma_saldo;
float suma;

suma = 0;


do {
printf("\n----------------------------------\n");
printf("Ingresar el numero de la cuenta\n");
printf("\n----------------------------------\n");
scanf("%d", &numero_cuenta) ;

printf("\n----------------------------------\n");
printf("Ingresar Saldo\n");
printf("\n----------------------------------\n");

scanf("%d", &saldo) ;
printf("\n----------------------------------\n");


if(saldo>0){

suma = suma + saldo ;
printf("\n----------------------------------\n");
printf("Cliente es un  Acreedor %d\n" ,numero_cuenta );
printf("\n----------------------------------\n");


}else
if(saldo<0){
printf("\n----------------------------------\n");
printf("Cliente es un Deudor  %d\n" ,numero_cuenta );
printf("\n----------------------------------\n");

}else

if(saldo<0){
printf("\n----------------------------------\n");
printf("Cliente es un Nulo  %d\n" ,numero_cuenta );
printf("\n----------------------------------\n");

}


} while (numero_cuenta > 0);

printf("\n----------------------------------\n");
printf("La suma de los Acredores es   %f\n" ,suma);
printf("\n----------------------------------\n");



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
