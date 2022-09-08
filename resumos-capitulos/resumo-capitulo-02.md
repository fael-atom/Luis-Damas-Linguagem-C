# Resumo do Capítulo 02

- A linguagem C apresenta quatro tipos de dados básicos — **char, int, float e double**.

- Podemos declarar variáveis de cada um desses tipos para armazenar valores. Depois de declarada, uma variável fica com um valor aleatório.

- A atribuição de valores a uma variável é realizada através do sinal de =.

- Podem ser realizadas atribuições encadeadas (a=b=c=2;). Nesse caso, elas são realizadas da direita para a esquerda, pois uma atribuição devolve sempre o valor atribuído.

- Uma variável pode ser iniciada assim que é declarada, colocando o sinal de atribuição seguido do valor a ser atribuído (Ex: int a = 234;).

- O nome de uma variável deverá sempre representar a informação que ela contém.

- Qualquer operação entre inteiros devolve sempre um resultado inteiro. As operações mais comuns são: a soma (+), a subtração (–), a multiplicação (*), a divisão inteira (/) e o resto da divisão inteira (%), também conhecido por módulo.

- Os reais também podem ser submetidos às operações anteriores, à exceção do módulo (%).

- A leitura e a escrita de valores podem ser realizadas através das funções scanf e printf, respectivamente, utilizando os formatos adequados a cada tipo %d - int, %f - float e double e %c - char. No caso do scanf, cada variável deverá ser precedida de um &.

- O tipo int permite algumas pequenas variações, quer no tamanho, quer na forma, através dos prefixos short, long, signed e unsigned.

- O tipo char permite as variações signed e unsigned.

- As variáveis do tipo char não são mais do que pequenos inteiros guardados num único byte. Assim, podem ser realizadas todas as operações numéricas que se podem realizar com inteiros.

- Sempre que é necessário alterar uma expressão para um determinado tipo utiliza-se o casting (tipo). Essa alteração é temporária.

- Não se deve realizar a leitura de variáveis de um determinado tipo usando um formato de leitura que não corresponda a esse tipo.