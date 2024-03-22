#include <stdio.h>
#include <stdlib.h>

int main(){
     int vetor[10] = {},
     tamanhoVetor = sizeof(vetor) / sizeof(vetor[0]),
     maiorNumero=0;

    for(int i = 0; i < tamanhoVetor; i++){
     printf("Digite o %d Valor: ", i+1 );
     scanf("%d", &vetor[i]);

     for(int j = 0; j < tamanhoVetor; j++){
        if(maiorNumero < vetor[j]){
            maiorNumero = vetor[j];
        }
     }
    }
    printf("O maior numero dentro do vetor eh: %d", maiorNumero);
}
