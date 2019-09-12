/*
 ============================================================================
 Name        : Clase6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_operaciones.h"

int main(void) {
	float  numero;
	utn_pideUnNumeroFloat(&numero);
	printf("%.2f",&numero);
	return EXIT_SUCCESS;
}
