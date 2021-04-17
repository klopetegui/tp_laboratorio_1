/*
 * funciones_TP_1.h
 *
 *  Created on: April 2021
 *      Author: Karen Fernandez Lopetegui 1F
 */

#ifndef FUNCIONES_TP_1_H_
#define FUNCIONES_TP_1_H_
#include <stdio.h>


/**
 * @fn int GetInt()
 * @brief Pide un numero entero al usuario
 *
 * @return Retorna el numero ingresado por el usuario
 */
int GetInt();

/**
 * @fn float GetFloat()
 * @brief Pide un numero flotante al usuario
 *
 * @return Retorna el numero ingresado por el usuario
 */

float GetFloat();

/**
 * @fn float SumarOperandos(float, float)
 * @brief Recibe los números ingresados por el usuario y los suma
 *
 * @param primerNumero Es el primer número ingresado por el usuario
 * @param segundoNumero Es el segundo número ingresado por el usuario
 * @return Retorna el resultado de la suma
 */


float SumarOperandos(float primerNumero, float segundoNumero);
/**
 * @fn float RestarOperandos(float, float)
 * @brief Recibe los numeros ingresados por el usuario y los resta
 *
 * @param primerNumero
 * @param segundoNumero
 * @return Retorna el resultado de la resta
 */

float RestarOperandos(float primerNumero, float segundoNumero);

/**
 * @fn float DivisorOperandos(float, float)
 * @brief recibe dos numeros y los divide
 *
 * @param dividendo
 * @param divisor
 * @return devuelve el cociente de la division
 */
float DivisorOperandos(float dividendo, float divisor);

/**
 * @fn float MultiplicacionOperandos(float, float)
 * @brief recibe dos numeros y los multiplica
 *
 * @param primerNumero
 * @param segundoNumero
 * @return retorna el producto de la multiplicacion
 */
float MultiplicacionOperandos(float primerNumero, float segundoNumero);

/**
 * @fn unsigned long CalcularFactorial(float)
 * @brief  recibe un numero y calcula su factorial
 *
 * @param numeroRecibido
 * @return retorna el factorial
 */
unsigned long CalcularFactorial(float numeroRecibido);

/**
 * @fn float DivisorOperandosDistintosTipos(float, int)
 * @brief recibe dos numeros de distinto tipo y los divide
 *
 * @param dividendo
 * @param divisor
 * @return devuelve el cociente de la division
 */
float DivisorOperandosDistintosTipos(float dividendo, int divisor);//utilizado como filtro de  enteros para el calculo del factorial

#endif /* FUNCIONES_TP_1_H_ */
