<h1 align="center"> Aula Estrutura de Dados</h1>

<p align="center">Atividades Realizadas durante as aulas de Estrutura de DadosAtividades Realizadas durante as aulas de Estrutura de Dados</p>


<h2 align="center">Estrutura Basica de um programa em C</h2>

#### Bibliotecas ou arquivos de cabeçalho 
	
 	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>

    
#### Principal função a ser executada
	
 	int main(){

#### Variaveis e Tipos (Variavel = Espaço reservado na memória)
      
      	a) Declaração  -> TipoVariavel NomeVariavel;
            	EX: int idade;
      
      	b) Tipos: 
            	int -> inteiro
            	float
            	double -> ponto flutuante
            	char -> caractere
            	void -> não tem retorno a função
        
	c) Comandos de Entrada e Saida
            printf: Mosta informação na tela, ex:
                printf("Hello Wolrd!")
                printf("%d", idade); 
                
            scanf: Entrada de dados (leitura de valores), ex:
                scanf("%d",&idade);
                    
	d) Caractere de Formatação:
        	%d / %i -> int
            	%f -> float
            	%lf -> double
            	%c -> char
            	%s -> vetor de caracteres
                
#### Operadores 
	    
     	a) Logicos: 
		&& -> e
		|| -> ou
    
	b) Aritiméticos:
		+ -> Soma
		- -> Subtração
		* -> Multiplicação
		/ -> Divisão
	
	c) Comparação:
		< -> Menor
		> -> Maior
		<= -> Menor ou Igual
		>= -> Maior ou Igual

#### Estrutura de Controle 
	    
     	a) if:
     		if(a == b){
        		printf("São Iguais");
		}

	b) if - else:
		if(a == b){
			printf("São Iguais");
		}else{
                 	printf("São NÃO Iguais");
             	}

	c) switch: 
		switch(cor){ 
			case 000:
				printf("O fundo é preto"); 
			break; 
			case fff:
				printf("O fundo é branco");
    			break;
			default: 
                    		printf("O fundo padrão é cinza");
                	break;
		}	

 #### Estrutura de Repetição
  		
	a) For: Quando se sabe a quantidade exata de repetições
      		for(int i; i<=10; i++){
	 		printf("%d", i);
		}
   			(int i=0 -> 'Inicializa o contador'; i<10 -> 'Comparação / Condição'; i++ -> 'Incremeto ou decremento')
    		
	b) While: Estrutura de teste no início, Executa 0 ou + vezes
		int n=3;
		while(n>0){
      			printf("%d",n);
			n--;
		}
	 
	c) do... While: Estrutura de teste no final,  Executa 1 ou + vezes
  		int num = -1;
  		do{
     			printf("%d", num);
	 		num--;
		}while(num>0);

#### Vetor:
	
 	É um arranjo unidimensional: [0|1|2|3|4|5]
  		Declaração
    			int vet[6];
		
  		Inserção de dados
      			for(int i=0; i<6; i++){
				scanf("%d",&vet[i]);
     				//[7,29,31,8,47,63]
    			}
       		
	 	Busca de Elementos
	 		for(int j=0;<6;j++){
				if(vet[j]==8){
					printf("%d",j);
    				}
       			}

  	
  			
return 0; -> devolve ao S.O que tudo foi executado corretamente   
}




