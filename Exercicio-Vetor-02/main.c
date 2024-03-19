#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[][5] = {
        {7, -3, 25, 18, -10},
        {42, 13, -5, 37, 8},
        {-20, 31, -15, 22, 11},
        {-7, 29, -12, 16, 5},
        {-30, 19, -2, 40, -9}};
    double somaLinha = 0,
    somaColuna = 0,
    somaDiagonal = 0,
    somaDiagonalSecond = 0,
    somaTotal = 0;
    
    for(int i = 0; i < 5; i++){
        somaLinha = somaLinha + m[4][i];
        somaColuna = somaColuna + m[i][2];
        somaDiagonal = somaDiagonal + m[i][i];
        somaDiagonalSecond = somaDiagonalSecond + m[i][4-i];
        for(int j = 0; j < 5; j++){
            somaTotal= somaTotal + m[i][j];
            printf("| %d ",m[i][j]);
        }
    }
    printf("A soma da Linha 4 do Matriz eh: %.2lf\n", somaLinha);
    printf("A soma da Coluna 2 do Matriz eh: %.2lf\n", somaColuna);
    printf("A soma da Diagonal Principal do Matriz eh: %.2lf\n", somaDiagonal);
    printf("A soma da Diagonal Segundaria do Matriz eh: %.2lf\n", somaDiagonalSecond);
    printf("A soma de todos os elementos da Matriz eh: %.2lf\n", somaTotal);

    return 0;

}
