# Trabalho para a disciplina de Classificação e Pesquisa de Dados.

***ATENÇÃO: Antes de tudo, Utilize o algoritmo para geração de entradas disponibilizado neste mesmo repositório. Com isto, será criado um arquivo .txt para alimentar as entradas de cada algoritmo de ordenação. Executar estes algoritmos no mesmo diretório que este arquivo .txt o qual contém os dados de entrada.***

## Bubble Sort
Comparação cronológica frente o caráter da disposição dos dados numéricos da array:
|Disposição dos dados numéricos|Tempo de execução (em segundos)|
|---|---|
|Aleatória|-|
|Crescente|-|
|Decrescente|-|

BubbleSort e sua complexidade frente a cada disposição dos dados numéricos da array:
|Situação|Complexidade cronológica|
|---|---|
|Pior caso|O(n²)|
|Caso médio|O(n log(n))|
|Melhor caso|O(n log(n))|

  O bubble sort, ou ordenação por flutuação (literalmente "por bolha"), é um algoritmo de ordenação dos mais simples. A ideia é percorrer a array diversas vezes, e a cada iteração fazer flutuar para o topo o maior elemento da sequência. Essa movimentação lembra a forma como as bolhas procuram seu próprio nível em um tanque de água, e disso vem o nome do algoritmo.<br/>
  Este algoritmo percorre a lista de itens ordenáveis do início ao fim, verificando a ordem dos elementos dois a dois, e trocando-os de lugar se necessário. Percorre-se a lista até que nenhum elemento tenha sido trocado de lugar na passagem anterior.
  
## Selection sort
Comparação cronológica frente o caráter da disposição dos dados numéricos da array:
|Disposição dos dados numéricos|Tempo de execução (em segundos)|
|---|---|
|Aleatória|14.206|
|Crescente|14.314|
|Decrescente|22.054|

SelectionSort e sua complexidade frente a cada disposição dos dados numéricos da array:
|Situação|Complexidade cronológica|
|---|---|
|Pior caso|O(n²)|
|Caso médio|O(n²)|
|Melhor caso|O(n²)|

Selection Sort é um algoritmo de ordenação baseado em se passar sempre o menor valor da array para a primeira posição (ou o maior dependendo da ordem requerida), depois o de segundo menor valor para a segunda posição, e assim é feito sucessivamente com os n-1 elementos restantes, até os últimos dois elementos.

## Insertion sort
Comparação cronológica frente o caráter da disposição dos dados numéricos da array:
|Disposição dos dados numéricos|Tempo de execução (em segundos)|
|---|---|
|Aleatória|8.23|
|Crescente|0.001|
|Decrescente|16.586|

InsertionSort e sua complexidade frente a cada disposição dos dados numéricos da array:
|Situação|Complexidade cronológica|
|---|---|
|Pior caso|O(n²)|
|Caso médio|O(n²)|
|Melhor caso|O(n)|

Insertion Sort, ou ordenação por inserção, é um algoritmo de ordenação que constrói uma matriz final com um elemento de cada vez, uma inserção por vez. Assim como algoritmos de ordenação quadrática, é bastante eficiente para problemas com pequenas entradas, sendo o mais eficiente entre os algoritmos desta ordem de classificação.

## Quicksort
Comparação cronológica frente o caráter da disposição dos dados numéricos da array:
|Disposição dos dados numéricos|Tempo de execução (em segundos)|
|---|---|
|Aleatória|0.022|
|Crescente|14.759|
|Decrescente|?|

QuickSort e sua complexidade frente a cada disposição dos dados numéricos da array:
|Situação|Complexidade cronológica|
|---|---|
|Pior caso|O(n²)|
|Caso médio|O(n log(n))|
|Melhor caso|O(n log(n))|

O QuickSort adota a estratégia de divisão e conquista. A estratégia consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida o QuickSort ordena as duas sublistas de chaves menores e maiores recursivamente até que a lista completa se encontre ordenada. Os passos são:

1. Escolha um elemento da lista, denominado pivô;
2. Particiona: rearranje a lista de forma que todos os elementos anteriores ao pivô sejam menores que ele, e todos os elementos posteriores ao pivô sejam maiores que ele. Ao fim do processo o pivô estará em sua posição final e haverá duas sub listas não ordenadas. Essa operação é denominada partição;
3. Recursivamente ordene a sub lista dos elementos menores e a sub lista dos elementos maiores;

## Mergesort
Comparação cronológica frente o caráter da disposição dos dados numéricos da array:
|Disposição dos dados numéricos|Tempo de execução (em segundos)|
|---|---|
|Aleatória|0.024|
|Crescente|0.012|
|Decrescente|0.014|

MergeSort e sua complexidade frente a cada disposição dos dados numéricos da array:
|Situação|Complexidade cronológica|
|---|---|
|Pior caso|O(n log(n))|
|Caso médio|O(n log(n))|
|Melhor caso|O(n log(n))|

O merge sort, ou ordenação por mistura, é um exemplo de algoritmo de ordenação por comparação do tipo dividir-para-conquistar. Os três passos úteis dos algoritmos de divisão e conquista que se aplicam ao merge sort são:

1. Dividir: Calcula o ponto médio do sub-arranjo, o que demora um tempo constante;
2. Conquistar: Recursivamente resolve dois subproblemas, cada um de tamanho n/2;
3. Combinar: Unir os sub-arranjos em um único conjunto ordenado;

## Heapsort
Comparação cronológica frente o caráter da disposição dos dados numéricos da array:
|Disposição dos dados numéricos|Tempo de execução (em segundos)|
|---|---|
|Aleatória|0.041|
|Crescente|0.032|
|Decrescente|0.03|

HeapSort e sua complexidade frente a cada disposição dos dados numéricos da array:
|Situação|Complexidade cronológica|
|---|---|
|Pior caso|O(n log(n))|
|Caso médio|O(n log(n))|
|Melhor caso|O(n log(n))|

O heapsort utiliza uma estrutura de dados chamada heap, para ordenar os elementos à medida que os insere na estrutura. Assim, ao final das inserções, os elementos podem ser sucessivamente removidos da raiz da heap, na ordem desejada, lembrando-se sempre de manter a propriedade de max-heap.<br/>
A heap pode ser representada como uma árvore (uma árvore binária com propriedades especiais) ou como um vetor. Para uma ordenação decrescente, deve ser construída uma heap mínima (o menor elemento fica na raiz). Para uma ordenação crescente, deve ser construído uma heap máxima (o maior elemento fica na raiz).

## Conclusão

Tabela de dados gerais para intuito de comparação dos tempos de execução para cada sequência de números e conclusão dos aspectos gerais de cada algoritmo. Vale lembrar que cada um dos tempos medidos, foi para 100000 elementos.

|Algoritmo|Números Aleatórios|Números Crescentes|Números Decrescentes|Pior Caso|Caso Médio|Melhor Caso|
|---|---|---|---|---|---|---|
|BubbleSort|?|?|?|?|?|?|
|SelectionSort|14.206s|14.314s|22.054s|Números Decrescentes|Números Crescentes|Números Aleatórios|
|InsertionSort|8.23s|0.001s|16.586s|Números Decrescentes|Números Aleatórios|Números Crescentes|
|QuickSort|0.022|14.759|?|?|?|?|
|MergeSort|0.024s|0.012s|0.014s|Números Aleatórios|Números Decrescentes|Números Crescentes|
|HeapSort|0.041s|0.032s|0.03s|Números Aleatórios|Números Crescentes|Números Decrescentes|
