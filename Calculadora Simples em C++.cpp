/*Calculadora Simples: Escreva um programa que peça ao usuário dois números e uma
operação (soma, subtração, multiplicação ou divisão) e exiba o resultado.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float n1, n2;
	char op; //Guarda a operação
	char tecla; 
	
	while (true){
		printf("Digite ESC para sair ou qualquer tecla para continuar");
		tecla = getch();
		if (tecla == 27){ //27 é o código ASCII para a tecla ESC
			break;
		}else{
				printf("\nDigite um numero: ");
				scanf("%f", &n1);
				printf("Digite outro numero: ");
				scanf("%f", &n2);
				printf("Digite uma operacao(+, -, *, /): ");
				scanf(" %c", &op);
	
				//Lê a operação
				if(op == '+'){
					printf("Resultado: %.2f\n", n1 + n2);
				}else if(op == '-'){
					printf("Resultado: %.2f\n", n1 - n2);
				}
				else if(op == '*'){
					printf("Resultado: %.2f\n", n1 * n2);
				}
				else if(op == '/'){
					if (n2 == 0){
						printf("Nao e possivel dividir um numero por 0!\n");
					} else{
						printf("Resultado: %.2f\n", n1 / n2);
					}
				}
				else{
					printf("Operacao Invalida!\n");
				}
			
		}
	}
}

