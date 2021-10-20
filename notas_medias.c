//biblioteca de leitura e escrita(input e output)
#include <stdio.h>

void ler_notas(float v[], int n_alunos) {
    int i;
    for (i=0; i<n_alunos; i++) {
            printf("Digite uma nota: ");
            scanf("%f", &v[i]);
        }
}

float calculo_media(float v[], int n_alunos) {
    float soma=0;
    for (int i=0; i<n_alunos; i++)
        soma+=v[i];
    return(soma/n_alunos);

}

int main(void) {
    int n_alunos;
    n_alunos=5;
    float v[5], media;
    ler_notas(v, n_alunos);
    media=calculo_media(v, n_alunos);
    printf("A media eh %f\n", media);
    return(0);

}
