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
/*   Ejercicio Nº 25 Estructura Condicional Switch : Ingresar por teclado dos valores enteros. Seguidamente solicitar el ingreso de un caracter '+','-','*' o '/'.
                                                     Dependiendo del operador ingresado sumar, restar, multiplicar o dividir los valores ingresados. Si no se ingresa un operador válido no hacer nada.
/*_____________________________________________________________________________________________________________________________________________________________________________________________________________________________*/







#include <stdio.h>

int main() {

printf("---------------------------------------------------------------------\n");
printf("Calculadora Ingrese dos numero y la operacion a realizar               :");
printf("\n-------------------------------------------------------------------\n");

    char operador;
    double num1, num2, resultado;
    char  esp[50];

    printf("Ingrese el primer numero: ");
    fflush(stdin);
    scanf("%lf", &num1);

    printf("Ingrese el Operador: ");
    fflush(stdin);
    scanf(" %c", &operador);

    printf("Ingrese el segundo numero: ");
    fflush(stdin);
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("\nLa Operación es una Suma: ");
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("\nLa Operación es una Resta: ");
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("\nLa Operación es una Multiplicación: ");
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("\nLa Operación es una División: ");
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Error: Division por cero.\n");
            }
            break;
        default:
            printf("Operador no valido.\n");
            break;
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

