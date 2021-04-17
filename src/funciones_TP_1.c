/*
 * funciones_TP_1.c
 *
 *  Created on:  April 2021
 *      Author: Karen Fernandez Lopetegui 1F
 */

#include "funciones_TP_1.h"
// ***********************************************************************************************************//
//                                     //// ENTRADA DE DATOS ////                                             //
// ***********************************************************************************************************//

int GetInt()
{	int numeroIngresado;
	printf("Ingrese una opcion: ");
	scanf("%d", &numeroIngresado);
	return numeroIngresado;
}

float GetFloat()
{
	float numeroIngresado;
	printf("Ingrese operando: ");
	scanf("%f", &numeroIngresado);
	return numeroIngresado;
}




// ***********************************************************************************************************//
//                                    //// CALCULOS ARITMETICOS ////                                          //
// ***********************************************************************************************************//
float SumarOperandos(float primerNumero, float segundoNumero)
{
    float suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

float RestarOperandos(float primerNumero, float segundoNumero)
{
    float resta;
    resta = primerNumero - segundoNumero;
    return resta;
}

float DivisorOperandos(float dividendo, float divisor)
{
    float cociente;
    cociente = dividendo / divisor;
    return cociente;
}

float MultiplicacionOperandos(float primerNumero, float segundoNumero)
{
    float producto;
    producto = primerNumero * segundoNumero;
    return producto;
}

unsigned long CalcularFactorial(float numeroRecibido)
{
	unsigned long resultado;
    int i;
    unsigned long retorno;
    resultado = 1;
    if(numeroRecibido>0 )
    {
        for(i=2; i<=numeroRecibido; i++){
            resultado *= i;
        }
        retorno=resultado;
    }
    return retorno;
}

float DivisorOperandosDistintosTipos(float dividendo, int divisor)
{
    float cociente;
    cociente = dividendo / divisor;
    return cociente;
}
