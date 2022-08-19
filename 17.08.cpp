#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_CTYPE, "Portuguese");
	/*======================
	Declaração de variaveis
	======================*/
	char nome, endereco, complemento, bairro, cidade, estado;
	float idade, nr, cep;
	//======================
	printf("============ Ficha de Inscrição ============ \n");
	printf("Nome: ");
	scanf("%s",&nome);
	printf("Idade: ");
	scanf("%f",&idade);
	printf("Endereço: ");
	scanf("%s",&endereco);
	printf("Numero da Res.: ");
	scanf("%f",&nr);
	printf("Complemento: ");
	scanf("%s",&complemento);
	printf("Bairro: ");
	scanf("%s",&bairro);
	printf("Cidade: ");
	scanf("%s",&cidade);
	printf("Estado: ");
	scanf("%s",&estado);
	printf("CEP: ");
	scanf("%f",&cep);
	system("pause");
}
