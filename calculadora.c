#include<stdio.h>
#include<conio.h>

int main()
	
{
	float n1,n2;
	char opc1;
	char opc2[1];
	printf("\n operaciones basicas  \n");
	printf("1.-(s)uma \n");
	printf("2.-(r)esta \n");
	printf("3.-(m)ultiplicacion \n");
	printf("4.-(d)ivicion \n");
	printf("5.-(t)odas las operaciones aritmeticas \n");
	printf("teclee la primera letra de la operacion que necesites :");
	scanf("%s",&opc2[0]);
	opc1=opc2[0];
	printf("\n");
	switch(opc1)
	{
	case 1: case's': case'S':
		
		printf("dame el primer sumando:");
		scanf("%f",&n1);
		printf("dame el segundo sumando:");
		scanf("%f",&n2);
		printf("%0.2f+%0.2f=%0.2f",n1,n2,n1+n2);
		break;
		
	case 2: case'r': case'R':
		printf("dame el minuendo:");
		scanf("%f",&n1);
		printf("dame el sustraendo:");
		scanf("%f",&n2);
		printf("%0.2f-%0.2f=%0.2f",n1,n2,n1-n2);
		break;
		
	case 3: case'm': case'M':
		
		printf("dame el primer factor:");
		scanf("%f",&n1);
		printf("dame el segundo factor:");
		scanf("%f",&n2);
		printf("%0.2f*%0.2f=%0.2f",n1,n2,n1*n2);
		break;
		
	case 4: case'd':case'D':
		
		printf("dame el divisor:");
		scanf("%f",&n1);
		printf("dame el dividendo:");
		scanf("%f",&n2);
		printf("%0.2f/%0.2f=%0.2f",n1,n2,n1/n2);
		break;
		
	case 5: case't':case'T':
		printf("dame el primer numero:");
		scanf("%f",&n1);
		printf("dame el segundo numero:");
		scanf("%f",&n2);
		printf("%0.2f+%0.2f=%0.2f",n1,n2,n1+n2);
		printf("%0.2f-%0.2f=%0.2f",n1,n2,n1-n2);
		printf("%0.2f*%0.2f=%0.2f",n1,n2,n1*n2);
		printf("%0.2f/%0.2f=%0.2f",n1,n2,n1/n2);
		break;
	default:
		printf("\n \n opcion invalida");
		break;
	}
	getch();
}
