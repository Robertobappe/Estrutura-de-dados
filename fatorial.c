#include <stdio.h>

int n, fat;

int main() {
	printf("Entre com o numero do fatorial: ");
	scanf("%d", &n);
	for (fat=1; n>1; n--) {
		fat=fat*n;
	}
	printf("\n%d", fat);
	return 0;
}


