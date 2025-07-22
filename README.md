# Respostas teóricas - Lista de Exercícios SelectionSort

## Questão 1: Versão recursiva do algoritmo
A versão recursiva segue a mesma lógica da versão iterativa, mas usando chamadas recursivas para percorrer o vetor. A cada chamada, encontramos o menor elemento do intervalo e colocamos na posição correta.

## Questão 2: Mudança de "i < n-1" para "i < n"
Ao fazer essa troca, o algoritmo ainda funciona, porém a última iteração do laço externo se torna desnecessária, pois não há mais elementos a serem comparados, apenas uma comparação redundante. Portanto, o algoritmo continua correto, mas com uma pequena ineficiência a mais.

## Questão 3: Trocar v[j] < v[min] por v[j] <= v[min]
Essa mudança afeta o comportamento do algoritmo em relação a elementos iguais. Usar `<=` pode tornar o algoritmo instável, pois a ordem relativa dos elementos iguais pode mudar. A função ainda ordena corretamente, mas a estabilidade é afetada.

## Questão 5: Pior caso
O pior caso para o SelectionSort é quando o vetor está em ordem decrescente. Nesse caso, o algoritmo sempre precisará percorrer todo o restante do vetor para encontrar o menor elemento, realizando o máximo número de comparações: aproximadamente n(n-1)/2.

## Questão 6: Melhor caso
Mesmo quando o vetor já está em ordem crescente, o SelectionSort ainda faz as mesmas comparações. Isso acontece porque o algoritmo não verifica se o vetor já está ordenado. Portanto, o número de comparações é sempre o mesmo, independente da entrada. O que muda é o número de trocas.

## Questão 7: Movimentação de dados
O algoritmo sempre realiza exatamente n-1 trocas, independentemente da entrada. Cada troca move dois elementos. Portanto:
- Pior caso: n-1 trocas
- Melhor caso: n-1 trocas (mas se a implementação for otimizada para trocar apenas se `min != i`, as trocas podem ser reduzidas no melhor caso)

## Questão 9: Desempenho
O código de cronometragem usa a biblioteca `<chrono>` para medir o tempo de execução do algoritmo. O tempo cresce quadraticamente com o tamanho da entrada (complexidade O(n²)), por isso o algoritmo é ineficiente para vetores muito grandes.
