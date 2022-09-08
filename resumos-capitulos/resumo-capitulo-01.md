# Resumo do Capítulo 01

- Em C, um programa começa com a função main(). O código a executar é colocado entre { } .

- Um Bloco é formado por qualquer conjunto de instruções entre { } . Cada instrução deve ser seguida de ponto-e-vírgula (;).

- A disposição do código é arbitrária e depende das preferências de cada programador. C faz distinção entre minúsculas e maiúsculas — diz-se que é Case Sensitive.

- As strings em C são delimitadas pelo caractere aspas ".

- Para escrever uma mensagem na tela usa-se a função printf().

- A função printf não faz parte da linguagem C. Pertence à sua extensa biblioteca de funções.

- Para termos acesso a esta e a outras funções de entrada/saída devemos incluir nos nossos programas o arquivo stdio.h através da diretiva ao pré-processador #include <stdio.h>.

- As linhas começadas por # (#include, #define, etc.) não são C, mas sim diretivas ao pré-processador. Por isso não devem ser seguidas de ponto-e-vírgula.

- A representação de caracteres especiais ou de caracteres que, de outra forma, seriam difíceis de representar faz-se através de um conjunto de dois ou mais caracteres, sendo em geral o primeiro caractere a barra invertida ( \ — Backslash).

- Os comentários são escritos entre /* e */ e são simplesmente ignorados pelo compilador (a menos que se encontrem dentro de uma string).

- Não podem existir comentários dentro de comentários.
