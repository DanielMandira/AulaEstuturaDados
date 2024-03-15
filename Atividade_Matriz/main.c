#include <stdio.h>
#include <stdlib.h>

int main()
{
   double matriz[][5] = {12.55, 15.55, 17.55, 2.50, 3.55, 120.51, 150.51, 17.540, 20.540, 3.4105,1,2,3,4,5};
   int coluna = sizeof(matriz) / sizeof(matriz[0]);
   int linha = sizeof(matriz[0]) / sizeof(matriz[0][0]);

    for(int i = 0; i < coluna; i++){
        for(int j =0; j < linha; j++){
        printf("| %.2lf ", matriz[i][j]);
        }
        printf("\n");
   }
}
