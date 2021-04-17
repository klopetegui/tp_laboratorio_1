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
		printf("1. Ingresar 1er operando (A= %.2f)\n",numeroA);
		printf("2. Ingresar 2do operando (B= %.2f)\n", numeroB);
		printf("3. Calcular todas las operaciones\n");
		printf("4. Informar resultados\n");
		printf("5. Salir\n");

		opcion= GetInt();

		if((opcion>0) & (opcion<6))
		{

		switch(opcion)
			{
				case 1://ingreso el primer operando
					numeroA= GetFloat();
					banderaNumeroA=1;
				break;

				case 2://ingreso el segundo operando
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
						auxiliarFactorialA=DivisorOperandosDistintosTipos(numeroA,auxiliarA);//mediante una division si el numero ingresado es un entero

						if(auxiliarFactorialA==1)
						{
							factorialA=CalcularFactorial(auxiliarA);
						}
						auxiliarB=(int)numeroB;
						auxiliarFactorialB=DivisorOperandosDistintosTipos(numeroB,auxiliarB);//mediante una division si el numero ingresado es un entero
						if(auxiliarFactorialB==1)
						{
							factorialB=CalcularFactorial(auxiliarB);
						}

						banderaOperaciones=1;
						printf("Se realizaron las operaciones.\n");

					}
					else
					{
						printf("No has ingresado todos los operandos, por lo tanto no se pueden calcular todas las operaciones.\n");
					}

				break;

				case 4://muestro los resultados
					if(banderaOperaciones==1)
					{
						printf("El resultado de la suma entre A y B es :%.2f\n",sumaAYB);
						printf("El resultado de la resta entre A y B es :%.2f\n",restaAYB);
						if(numeroB!=0)
						{
							printf("El resultado de la division entre A y B es :%.2f\n",divisionAYB);
						}
						printf("El resultado de la multiplicacion entre A y B es :%.2f\n",multiplicacionAYB);
						if(auxiliarFactorialA==1)
						{
							printf("El resultado del factorial de A es :%lu\n",factorialA);
						}
						else
						{
							printf("No se pudo calcular el factorial de A\n");
						}
						if(auxiliarFactorialB==1)
						{
							printf("El resultado del factorial de B es :%lu\n",factorialB);
						}
						else
						{
							printf("No se pudo calcular el factorial de A\n");
						}
					}
					else
					{
						printf("No se han calculado todas las operaciones, por lo tanto no se pueden mostrar.\n");
					}
				break;
			}
		}else
		{
			printf("Error. Reingrese una opcion valida\n");
		}



	}while(opcion!=5);
	printf("Ha salido del programa con exito.\n");
	return EXIT_SUCCESS;
}
