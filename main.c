#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define fil 2
#define col 2
#define rn 8

int main(){
	
	int i,j;
	int matriz[col][fil];
	int matriz1[col][fil];
	int matriz2[col][fil];
	char respuesta1;
	char respuesta2;

	printf("Este programa realiza la suma o resta de matrices a continuacion \ningresa los datos de cada matriz o ingresa R para llenarlas con numeros aleatorios. \n\n");
	scanf("%c",&respuesta1);
	
	if (respuesta1 == 'r' || respuesta1 == 'R'){
		int min = 0, max = 10;
		for(i = 1; i <= 8; i++){
			for(j = 1; j <= 8; j++){
				int random1 = min + rand() / (RAND_MAX / (max - min + 1) + 1);
				matriz[i][j] = random1;
				printf("Valor para [%d][%d] ", i, j);
			}
		}		
	}
	else{
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
	
	printf("Para realizar una suma digite una S o si es resta diagonal D, si es resta cualquier letra. \n");
	scanf("%c",&respuesta2);
	
	if (respuesta2 == 's' || respuesta2 == 'S'){
		printf("\n El resultado de la suma de ambas matrices es:\n\n");
		for(i = 0; i < col ; i++){
			for(j = 0; j < fil; j++){
				matriz2[i][j] = matriz[i][j] + matriz1[i][j];
				printf("\t%d",matriz2[i][j]);
			}
			printf("\t\t\n\n");
		}
	}
	else if(respuesta2 == 'd' || respuesta2 == 'D'){
		printf("\n El resultado de la resta diagonal de ambas matrices es:\n\n");
		for(i = 0; i < col ; i++){
			for(j = 0; j < fil; j++){
				if(i = j){
					matriz2[i][j] = matriz[i][j] - matriz1[i][j];
					printf("\t%d",matriz2[i][j]);
				}
			}
			printf("\t\t\n\n");
		}
	}
	else{
		printf("\n El resultado de la resta de ambas matrices es:\n\n");
		for(i = 0; i < col ; i++){
			for(j = 0; j < fil; j++){
				matriz2[i][j] = matriz[i][j] - matriz1[i][j];
				printf("\t%d",matriz2[i][j]);
			}
			printf("\t\t\n\n");
		}
	}
	
	return 0;
}
