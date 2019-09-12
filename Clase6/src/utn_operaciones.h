/*
 * utn.operaciones.h
 *
 *  Created on: 4 sep. 2019
 *      Author: alumno
 */

#ifndef UTN_OPERACIONES_
#define UTN_OPERACIONES_
float utn_pideUnNumeroFloat(float *number);
float utn_pideDosNumerosFloat(float *numberOne,float *numberTwo);//Recibo el puntero de dos variables donde escribiré su valor
float utn_sumarFloat(float numberOne,float numberTwo,float *resultSum);//Recibo 2 valores de variables y el puntero del resultado de la suma
float utn_restarFloat(float numberOne,float numberTwo,float *resultSub);//Recibo 2 valores de variables y el puntero del resultado de la resta
float utn_multiplicarFloat(float numberOne,float numberTwo,float *resultMult);//Recibo 2 valores de variables y el puntero del resultado de la multiplicacion
float utn_dividirFloat(float numberOne,float numberTwo,float *resultDiv);//Recibo 2 valores de variables y el puntero del resultado de la división
float utn_factorizar2NumerosFloat(float numberOne,float numberTwo,float *resultFactA,float *resultFactB);//Recibo 2 valores de variables y 2 punteros de los resultados de las factorizaciones
int utn_pideUnNumeroInt(int *number);
int utn_pideDosNumerosInt(int *numberOne,int *numberTwo);//Recibo el puntero de dos variables donde escribiré su valor
int utn_sumarInt(int numberOne,int numberTwo,int *resultSum);//Recibo 2 valores de variables y el puntero del resultado de la suma
int utn_restarInt(int numberOne,int numberTwo,int *resultSub);//Recibo 2 valores de variables y el puntero del resultado de la resta
int utn_multiplicarInt(int numberOne,int numberTwo,int *resultMult);//Recibo 2 valores de variables y el puntero del resultado de la multiplicacion
int utn_dividirInt(int numberOne,int numberTwo,int *resultDiv);//Recibo 2 valores de variables y el puntero del resultado de la división
int utn_factorizar2NumerosInt(int numberOne,int numberTwo,int *resultFactA,int *resultFactB);//Recibo 2 valores de variables y 2 punteros de los resultados de las factorizaciones
int ordenarArray(int* pArray,int limite);

#endif /* UTN_H_ */

