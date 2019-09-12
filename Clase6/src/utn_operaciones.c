/*
 * utn.operaciones.c
 *
 *  Created on: 4 sep. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
float utn_pideUnNumeroFloat(float *number)
{
	float number1=*number;


	printf("Ingrese un número: \n");
	__fpurge(stdin);
	scanf ("%f",&number1);

	*number=number1;

	return 0;
}
float utn_pideDosNumerosFloat(float *numberOne,float *numberTwo)
{
	float number1=*numberOne;
	float number2=*numberTwo;

	printf("Ingrese un número: \n");
	__fpurge(stdin);
	scanf ("%f",&number1);

	printf("Ingrese otro número: \n");
	__fpurge(stdin);
	scanf ("%f",&number2);

	*numberOne=number1;
	*numberTwo=number2;
	return 0;
}
float utn_sumarFloat(float numberOne,float numberTwo,float* presultSum)
{
	float result=numberOne+numberTwo;
	*presultSum=result;
	return 0;
}
float utn_restarFloat(float numberOne,float numberTwo,float* presultSub)
{
	float result=numberOne-numberTwo;
	*presultSub=result;
	return 0;
}
float utn_multiplicarFloat(float numberOne,float numberTwo,float* presultMult)
{
	float result=numberOne*numberTwo;
	*presultMult=result;
	return 0;
}
float utn_dividirFloat(float numberOne,float numberTwo,float* presultDiv)
{
	float result=numberOne/numberTwo;
	*presultDiv=result;
	return 0;
}

float utn_factorizar2NumerosFloat(float numberOne,float numberTwo,float* presultFactA,float* presultFactB)
{
	float resultA=1;
	float resultB=1;
	int i;
	int j;
	for(i=numberOne;i>=1;i--)
	{
		resultA=resultA*i;
	}
	for(j=numberTwo;j>=1;j--)
	{
		resultB=resultB*j;
	}

	*presultFactA=resultA;
	*presultFactB=resultB;
	return 0;
}
int utn_pideUnNumeroInt(int *number)
{
	int number1=*number;


	printf("Ingrese un número: \n");
	__fpurge(stdin);
	scanf ("%d",&number1);

	*number=number1;

	return 0;
}
int utn_pideDosNumerosInt(int *numberOne,int *numberTwo)
{
	int number1;
	int number2;

	printf("Ingrese un número: \n");
	__fpurge(stdin);
	scanf ("%d",&number1);

	printf("Ingrese otro número: \n");
	__fpurge(stdin);
	scanf ("%d",&number2);

	*numberOne=number1;
	*numberTwo=number2;
	return 0;
}
int utn_sumarInt(int numberOne,int numberTwo,int* presultSum)
{
	int result=numberOne+numberTwo;
	*presultSum=result;
	return 0;
}
int utn_restarInt(int numberOne,int numberTwo,int* presultSub)
{
	int result=numberOne-numberTwo;
	*presultSub=result;
	return 0;
}
int utn_multiplicarInt(int numberOne,int numberTwo,int* presultMult)
{
	int result=numberOne*numberTwo;
	*presultMult=result;
	return 0;
}
int utn_dividirInt(int numberOne,int numberTwo,int* presultDiv)
{
	int result=(float)numberOne/numberTwo;
	*presultDiv=result;
	return 0;
}

int utn_factorizar2NumerosInt(int numberOne,int numberTwo,int* presultFactA,int* presultFactB)
{
	int resultA=1;
	int resultB=1;
	int i;
	int j;
	for(i=numberOne;i>=1;i--)
	{
		resultA=resultA*i;
	}
	for(j=numberTwo;j>=1;j--)
	{
		resultB=resultB*j;
	}

	*presultFactA=resultA;
	*presultFactB=resultB;
	return 0;
}
int ordenarArray(int* pArray,int limite)
{
int flagEstaDesordenado=0;
int i;
int aux;

do
{
	flagEstaDesordenado=1;
	for(i=0;i<limite-1;i++)
	{
		if(pArray[i]>pArray[i+1])
		{
			aux=pArray[i];
			pArray[i]=pArray[i+1];
			pArray[i+1]=aux;
			flagEstaDesordenado=0;
		}
	}
}while(flagEstaDesordenado==0);
}
