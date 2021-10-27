typedef struct
{
	int n_usp;
	char nome[100];
	char endereco[100];
} dados;

void ler_dados(dados *p)
{
	printf("Entre com seu n_usp: ");
	scanf("%d", &p->n_usp);
	printf("Entre com seu nome: ");
	scanf("%s", p->nome);
}

int main(void)
{
	dados pessoa;
//passagem por valor x referência
//valor: cópia local e quando volta pra função perde os valores
//referência(&): leva pro ponteiro o endereço da variável e podemos alterar o valor
	ler_dados(&pessoa);
	printf("Seu nome eh %s!", pessoa.nome);
}
