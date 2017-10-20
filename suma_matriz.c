#include <stdio.h>
#define fil 2
#define col 2

int main(){
	
	int i,j;
	int matriz[col][fil];
	int matriz1[col][fil];
	int matriz2[col][fil];

	printf("Ingrese los valores para la primer matriz: \n");
	for(i = 0; i < col; i++){
		for(j = 0; j < fil; j++){
			printf("Valor para [%d][%d] ", i, j);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("\n");
	printf("Ingrese los valores para la segunda matriz: \n");
	for(i = 0; i < col; i++){
		for(j = 0; j < fil; j++){
			printf("Valor para [%d][%d] ", i, j);
			scanf("%d",&matriz1[i][j]);
		}
	}
	printf("\n");
	printf("La primer matriz es: \n");
	printf("\n");
	for(i = 0; i < col; i++){
		for(j = 0; j < fil; j++){
			printf("\t %d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("La segunda matriz es: \n");
	printf("\n");
	for(i = 0; i < col; i++){
		for(j = 0; j < fil; j++){
			printf("\t %d ", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("\n El resultado de ambas matrices es:\n\n");
	for(i = 0; i < col ; i++){
		for(j = 0; j < fil; j++){
			matriz2[i][j] = matriz[i][j] + matriz1[i][j];
			printf("\t%d",matriz2[i][j]);
		}
		printf("\t\t\n\n");
	}
	
	return 0;
}
