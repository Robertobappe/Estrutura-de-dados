#include <stdio.h>

int fib(int n);

int main()
{
	int n;
	printf("Selecione o termo q vc quer calcular o Fibonacci: ");
	scanf("%d", &n);
	printf("\n o Fibonacci de %d eh %d", n, fib(n));
}

int fib(int n)
{
	int i, a, b, c;
	a=0;
	b=1;
	for(i=0; i<n; i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return(a);
}
