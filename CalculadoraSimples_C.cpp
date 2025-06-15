#include <stdio.h>
#include <stdlib.h>

main(){
	int escolha=0;
	float num1,num2,resultado=0;
	
	do{
		system("cls");
		
		printf("\t\t\tCALCULADORA\n\n");
		
		printf("\n1.Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n5.Sair\n\nDigite sua escolha: ");
			scanf("%d",&escolha);
			
		switch (escolha){
			
		case 1:
		system("cls");
		printf("\t\t\tCALCULADORA\n\n");
		
		printf("\nDigite o numero 1: ");
			scanf("%f",&num1);
			
		printf("\nDigite o numero 2: ");
			scanf("%f",&num2);
		
		resultado=num1+num2;
		
		printf("\nA soma eh: %.2f\n\n",resultado);		
		
		system("pause");
		
		break;
		
		case 2:
		system("cls");
		printf("\t\t\tCALCULADORA\n\n");
		
		printf("\nDigite o numero 1: ");
			scanf("%f",&num1);
			
		printf("\nDigite o numero 2: ");
			scanf("%f",&num2);
			
		resultado=num1-num2;
		
		printf("\nA subtracao eh: %.2f\n\n",resultado);
		
		system("pause");
			
		break;
		
		case 3:
			system("cls");
		printf("\t\t\tCALCULADORA\n\n");
		
		printf("\nDigite o numero 1: ");
			scanf("%f",&num1);
			
		printf("\nDigite o numero 2: ");
			scanf("%f",&num2);
			
		resultado=num1*num2;
		
		printf("\nA multiplicacao eh: %.2f\n\n",resultado);
		
		system("pause");
		
		break;
		
		case 4:
		system("cls");
		printf("\t\t\tCALCULADORA\n\n");
		
		printf("\nDigite o numero 1: ");
			scanf("%f",&num1);
			
		printf("\nDigite o numero 2: ");
			scanf("%f",&num2);
			
		resultado=num1/num2;
		
		printf("\nA divisao eh: %.2f\n\n",resultado);
			
		system("pause");
			
		break;	
		
		case 5:
		system("cls");
		printf("\t\t\tCALCULADORA\n\n");
		
		printf("\nObrigado por usar o programa!\n\n");
		
		break;
		
		default:
		system("cls");
		printf("\t\t\tCALCULADORA\n\n");
		
		printf("\nEscolha invalida!\n\n");
		
		system("pause");
		
		break;
		}
				
	}while(escolha!=5);
	
}
