#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define FILAS_MAX 2
#define COLS_MAX 2
int main()
{
	printf("\n\t\t Este programa realiza la resta de matrices de 2x2 ");
	float t[FILAS_MAX][COLS_MAX],suma;
	int A[2][2],B[2][2],C[2][2],f,c;
	printf("\n\n Ingrese las entradas de la matriz A\n\n");
	for(f=0;f<2;f++)
	{
		for(c=0;c<2;c++)
		{
			printf(" Da un valor para A[%d][%d]:",f,c);
			scanf("%d",&A[f][c]);
		}
	}
	printf("\n");
	printf("\n Ingrese las entradas de la matriz B \n\n");
	for(f=0;f<2;f++)
	{
		for(c=0;c<2;c++)
		{
			printf(" Da un valor para B[%d][%d]:",f,c);
			scanf("%d",&B[f][c]);
		}
	} 
	printf("\n");
	printf("\n\n\n La matriz A es:\n\n");
	for(f=0;f<2;f++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",A[f][c]);
		}
		printf("\t\n\n");
	}
	printf("\n\n\n La matriz B es:\n\n");
	for(f=0;f<2;f++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",B[f][c]);
		}
		printf("\t\n\n");
	}
	printf("\n\n\n El resultado de ambas matrices es:\n\n");
	for(f=0;f<2;f++)
	{
		for(c=0;c<2;c++)
		{
			C[f][c]=A[f][c]-B[f][c];
			printf("\t%d",C[f][c]);
		}
		printf("\t\t\n\n");
	}
	getch();
	return(0);
	
}
