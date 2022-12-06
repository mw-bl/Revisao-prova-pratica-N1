#include <stdio.h>

int main() {
	int codigo, nasc, ingresso, idade, TdT;
	printf("Insira o Codigo do Funcionario: ");
	scanf("%d", &codigo);
	printf("Insira o Ano de Nascimento do Funcionario: ");
	scanf("%d", &nasc);
	printf("Insira o Ano de Ingresso na Empresa: ");
	scanf("%d", &ingresso);
	
	idade = 2022 - nasc;
	TdT = 2022 - ingresso;
	
	if(idade>=65 || TdT>= 30 || (idade>=60 && TdT>=25)) {
		printf("Idade = %d.\nTempo de Trabalho = %d.\nRequerer Aposentadoria.", idade, TdT);
	} else {
		printf("Idade = %d.\nTempo de Trabalho = %d.\nNão Requerer Aposentadoria.", idade, TdT);
	}
	return 0;
}
