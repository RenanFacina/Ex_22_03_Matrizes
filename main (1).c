#include <stdio.h>

int main()
{
    
    float matriz[4][4];
    float somaimp = 0;
    float somapar = 0;
    float mediapar = 0;
    
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("Digite um número para a %dª coluna da %dª linha:\n", j+1,i+1);
            scanf("%f", &matriz[i][j]);
            
            if (j % 2 != 0)
            {
                somaimp = somaimp + matriz[i][j];
            }
            
            if(j % 2 == 0)
            {
                somapar = somapar + matriz[i][j];
            }
        }
    }
    
    mediapar = somapar / 8;
    
    printf("Soma dos elementos das colunas impares: %2.f\n", somaimp);
    printf("Média aritmética dos elementos das colunas pares: %2.f\n", mediapar);
    printf("Matriz:\n");
    
    for (int i=0; i<4; i++)
    {   
        printf("\n");
        for (int j=0; j<4; j++)
        {
            printf("%2.f ",matriz[i][j]);
        }
    }
    
    
    return 0;
}