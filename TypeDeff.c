/*
 ============================================================================
 Name        : TypeDeff.c
 Author      : Dominick Vitelli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef int number;

int main(){

	number c;
	printf("Enter a value: ");
	fflush(stdout);
	c = getchar();

	printf("\nYou entered: ");
	putchar(c);


	return 0;
}
