/*
 ============================================================================
 Name        : TP1.c
 Author      : Karen Fernandez 1F
 Version     :
 Copyright   : Your copyright notice
 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 ============================================================================
 */

#include "funciones_TP_1.h"
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	float numeroA;
	float numeroB;
	int banderaNumeroA;
	int banderaNumeroB;
	int banderaOperaciones;
	int auxiliarA;
	int auxiliarB;
	float auxiliarFactorialA;
	float auxiliarFactorialB;
	float sumaAYB;
	float restaAYB;
	float divisionAYB;
	float multiplicacionAYB;
	unsigned long factorialA;
	unsigned long factorialB;


	numeroA=0;
	numeroB=0;
	banderaNumeroA=0;
	banderaNumeroB=0;
	banderaOperaciones=0;

	do
	{
		printf("1. Ingresar 1er operando (A= %.2f)\n2. Ingresar 2do operando (B= %.2f)\n3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\n",numeroA, numeroB);

		fflush(stdin);
		opcion= GetInt();

		if((opcion>0) & (opcion<6))
		{

		switch(opcion)
			{
				case 1://ingreso el primer operando
					fflush(stdin);
					numeroA= GetFloat();
					banderaNumeroA=1;
				break;

				case 2://ingreso el segundo operando
					fflush(stdin);
					numeroB=GetFloat();
					banderaNumeroB=1;
				break;

				case 3://realizo las operaciones
					if((banderaNumeroA==1) &&(banderaNumeroB==1))// solo realiza las operaciones si fueron ingresados los dos operandos
					{
						sumaAYB=SumarOperandos(numeroA,numeroB);
						restaAYB=RestarOperandos(numeroA,numeroB);
						multiplicacionAYB=MultiplicacionOperandos(numeroA,numeroB);
						if(numeroB!=0)//realiza la division si el divisor es distinto de cero
						{
							divisionAYB=DivisorOperandos(numeroA,numeroB);
						}

						auxiliarA=(int)numeroA;
						auxiliarFactorialA=RestarOperandos(numeroA,auxiliarA);//para saber si el numero ingresado tiene valores despues de la coma
						if(auxiliarFactorialA==0)
						{
							factorialA=CalcularFactorial(auxiliarA);
						}
						auxiliarB=(int)numeroB;
						auxiliarFactorialB=RestarOperandos(numeroB,auxiliarB);//para saber si el numero ingresado tiene valores despues de la coma
						if((auxiliarFactorialB==0)&& (numeroB>-1) )
						{
							factorialB=CalcularFactorial(auxiliarB);
						}

						banderaOperaciones=1;
						printf("\nSe realizaron las operaciones con exito.\n\n");

					}
					else
					{
						printf("\nNo has ingresado todos los operandos, por lo tanto no se pueden calcular todas las operaciones.\n\n");
					}

				break;

				case 4://muestro los resultados
					if(banderaOperaciones==1)
					{
						printf("\nEl resultado de la suma entre A y B es :%.2f\n",sumaAYB);
						printf("El resultado de la resta entre A y B es :%.2f\n",restaAYB);
						if(numeroB!=0)
						{
							printf("El resultado de la division entre A y B es :%.2f\n",divisionAYB);
						}
						else {
							printf("\nNo se puede dividir por cero\n\n");
						}
						printf("\nEl resultado de la multiplicacion entre A y B es :%.2f\n",multiplicacionAYB);
						if((auxiliarFactorialA==0)&& (numeroA>-1))
						{
							printf("\nEl resultado del factorial de A es :%lu\n\n",factorialA);
						}
						else
						{
							printf("\nNo se pudo calcular el factorial de A ya que el numero ingresado debe ser entero y positivo.\n\n");
						}
						if((auxiliarFactorialB==0)&& (numeroB>-1))
						{
							printf("El resultado del factorial de B es :%lu\n\n",factorialB);
						}
						else
						{
							printf("\nNo se pudo calcular el factorial de B ya que el numero ingresado debe ser entero y positivo.\n\n");
						}
					}
					else
					{
						printf("\nNo se han calculado todas las operaciones, por lo tanto no se pueden mostrar.\n\n");
					}
				break;
			}
		}else
		{
			printf("\nError. Reingrese una opcion valida\n");
		}



	}while(opcion!=5);
	printf("\nHa salido del programa con exito.\n");
	return EXIT_SUCCESS;
}
