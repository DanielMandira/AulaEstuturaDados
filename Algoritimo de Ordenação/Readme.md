# Algoritimos de Ordenação 

## Vetor:

* Arranjo unidimensional;

* Apenas 1 tipo de dado (Homogênea); 

* Alocado em blocos na memória.
<br>

## Ordenação: 
* Ordenação, é a operação de arranjar os dados em uma determinada ordem; 

* A eficiência no manuseio de dados muitas vezes pode ser aumentada se os dados estiverem dispostos de acordo com algum critério de ordem.
<br>

## Algoritimos de Ordenação

* São Ferramentas utilizadas para ordenar uma lista de objetos (itens);

* Na escolha de um algoritimo de ordenação deve ser considerado principalmente: o tempo gasto pela ordenação e o uso econômico da memória disponível;

* Os algoritimos de ordenação podem ser aplicados a diversos tipos de estrutura, tais como: 
    
    * Vetores

    * Matrizes

    * Estruturas dinâmicas
<br>

## Principais Algoritimos de Ordenação: 

### 1. Bubble Sort

**1º Passo:** Definir o critério de ordenação.

**2º Passo:** Repetir as etapas abaixo até que o vetor esteja Ordenado:

1) Compara os vizinhos (posição `i` e `i+1`)

2) Utiliza o critério de ordenação para decidir se os valores trocam ou não de posição.

**Crescente**
| 12 | 35 | 6<- | 71 | 44 | 9 |
---|---|---|---|---|---
12|6|35|71|44<-|9
12|6|35|44|71|9<-
12|6<-|35|44|9|71
6|12|35|44|9<-|71
6|12|35|9<-|44|71
6|12|9<-|35|44|71
6|9|12|35|44|71

<br>

**Vantagem:** Simples de entender e implementar

**Desvantagem:** O desempenho da sua execução depende do tamanho da estrutura, pois há um numero muito grande de movimentação de elementos, assim não deve ser usado se a estrutura a ser ordenada for complexa.



<details>
<summary>O que é:</summary>

* É um algoritimo de ordenação bastante conhecido devido a sua facilidade de entender e de programas.

* Também conhecido como método das trocas sucessivas, é um método simples de ordenação que, a casa passo, posiciona(flutua) o maior elemento para o fim.

* Esse processo de flutuar o maior elemento é repetido `n` vezes.

</details>



#### Código em C:

> `void BubbleSort(int * v, int n ){//n é tamanhodo vetor int i, fim, aux; for (fim = n-1; fim > 0; --fim){ for(i = 0; i < fim; ++i>){ if(v[i] > v [i+1]){ aux = v[i]; v[i] = v[i+1]; v[i+1] = aux; }}}}`

<br>
<br>

### 2. Insertion Sort

### 3. Selection Sort
