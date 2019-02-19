/*
 ============================================================================
 Name        : File.c
 Author      : Dominick Vitelli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *fp;

	fp  = fopen("textFile.text", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("newn", fp);
	fclose(fp);
	return 0;

}
