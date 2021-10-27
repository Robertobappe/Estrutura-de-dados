#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char nome[30];
	int idade;
	char endereco[100];
}dados;

void ler_dados(dados* p)
{
	printf("Entre com o nome: ");
	scanf("%s", p->nome);
	printf("Entre com a idade: ");
	scanf("%d", &p->idade);
	printf("Entre com o endereco: ");
	scanf("%s", p->endereco);
}

int main(void) 
{
	dados *pessoa;
//tipo e tamanho 
	pessoa=(dados*) malloc(sizeof(dados));
//outra boa pratica de programa��o 
	if (pessoa==NULL)
	{
		printf("Erro na aloca��o de mem�ria!");
		exit(1);
	}
	ler_dados(pessoa);
	printf("Obrigado, %s! Volte sempre! \n", pessoa->nome);
	//a mem�ria pode ficar alocada, ent�o ap�s o final do programa devemos desalocar a mem�ria
	free(pessoa);
	return 0;
} 
