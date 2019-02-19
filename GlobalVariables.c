/*
 ============================================================================
 Name        : GlobalVariables.c
 Author      : Dominick Vitelli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int A;
int B;

int fun()
{
  static int count = 0; //Static Variable
  count++;
  return count;
}

int Add()
{
    return A + B;
}

int main()
{
    int answer; // Local variable
    A = 5;
    B = 7;
    answer = Add();
    printf("%d\n",answer);
    printf("%d ", fun());
    printf("%d ", fun());
    return 0;
}
