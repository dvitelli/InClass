/*
 ============================================================================
 Name        : GetPut.c
 Author      : Dominick Vitelli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main( ) {

   char str[100];       //char array STRING used as buffer

   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   gets( str );

   printf( "\nYou entered: ");
   puts( str );

   return 0;
}
