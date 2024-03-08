<h1 align="center"> Aula Estrutura de Dados</h1>

<p align="center">Atividades Realizadas durante as aulas de Estrutura de DadosAtividades Realizadas durante as aulas de Estrutura de Dados</p>


<h2 align="center">Estrutura Basica de um programa em C</h2>

	1- Bibliotecas ou arquivos de cabeçalho 
	    #include <stdio.h>
	    #include <stdlib.h>
	    #include <math.h>

    
    2- Principal função a ser executada
	    int main(){

    3- Variaveis e Tipos (Variavel = Espaço reservado na memória)
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
                
    4- Operadores 
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

    5- Estrutura de Controle 
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
                default: 
                    printf("O fundo padrão é cinza");
                break;}	
    return 0; -> devolve ao S.O que tudo foi executado corretamente   
	}




