#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[]={12,35,6,71,44,9};
    int n = sizeof(v)/sizeof(v[0]);
    BubbleSort(v, n);
    return 0;
}

void BubbleSort(int* v, int n){//n é tamanhodo vetor
    /*
    i: percorre o vetor e permite a comparação entre os vizinhos.
    fim: marcar qual é o final do vetor
    aux: armazena temporariamente o valor para troca
    */
     int i, fim, aux;
     //qunado fim = 0 o vetor esta ordenado
     for (fim = n-1; fim > 0; --fim){
            // Inicia em 0 e permite a comparação entre v[i] e v[i+1]
         for(i = 0; i < fim; ++i){
             //Comparação entre vizinhos
                if(v[i] > v [i+1]){
                    //realizar a troca
                    aux = v[i];
                    v[i] = v[i+1];
                    v[i+1] = aux;
                    printf("Posicoes do vetor\n");
                    for(int j=0; j<n; ++j){
                        printf("%d ", v[j]);
                    }
                    printf("\n\n");
            }
        }
     }
}
