#include <stdio.h>
#include <stdlib.h>

int main()
{
    double v1[5] = {},
    v2[5]={},
    v3[5]={};

    printf("Digite os Numeros a serem armazenados nos vetores V1 e V2: \n");
    for(int i = 0; i < 5; i++){
        printf("V1 casa %d: ", i+1);
        scanf("%lf", &v1[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("V2 casa %d: ", i+1);
        scanf("%lf", &v2[i]);
    }

    printf("\nA soma dos elementos eh: ");
    for(int i = 0; i < 5; i++){
       v3[i] = v1[i] + v2[i];
       printf("| %.2lf ",v3[i]);
    }

    printf("\nA diferença dos elementos eh: ");
     for(int i = 0; i < 5; i++){
       v3[i] = v1[i] - v2[i];
       printf("| %.2lf ",v3[i]);
    }

    printf("\nO produto dos elementos eh: ");
     for(int i = 0; i < 5; i++){
       v3[i] = v1[i] * v2[i];
       printf("| %.2lf ",v3[i]);

    }

    printf("\nA divisão dos elementos eh: ");
     for(int i = 0; i < 5; i++){
       v3[i] = v1[i] / v2[i];
       printf("| %.2lf ",v3[i]);
    }

    return 0;
}
