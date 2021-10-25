#include <stdio.h>

int fibonacci(int n)
{
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}	
}

int main() 
{
	int n;
	printf("Qual o termo vc quer calcular o Fibonacci? ");
	scanf("%d", &n);
	printf("\n o Fibonacci de %d eh %d", n, fibonacci(n));
	
}
