/****************************************************************************
 *
 *   ██████╗ ██████╗ ██████╗ ██╗ ██████╗  ██████╗ ███████╗     ██████╗
 *  ██╔════╝██╔═══██╗██╔══██╗██║██╔════╝ ██╔═══██╗██╔════╝    ██╔════╝
 *  ██║     ██║   ██║██║  ██║██║██║  ███╗██║   ██║███████╗    ██║     
 *  ██║     ██║   ██║██║  ██║██║██║   ██║██║   ██║╚════██║    ██║     
 *  ╚██████╗╚██████╔╝██████╔╝██║╚██████╔╝╚██████╔╝███████║    ╚██████╗
 *   ╚═════╝ ╚═════╝ ╚═════╝ ╚═╝ ╚═════╝  ╚═════╝ ╚══════╝     ╚═════╝
 *
 * =========================================================================
 *  ARQUIVO UNIFICADO — TODOS OS CÓDIGOS EM C COMENTADOS
 * =========================================================================
 *
 * =========================================================================
 *  ÍNDICE DO ARQUIVO
 * =========================================================================
 *
 *  PARTE 1 — SEMANA 7: Exercícios Fundamentais (10 exercícios)
 *    1.1  Verificação de Idade para Entrada em Evento
 *    1.2  Calculadora de Média Escolar
 *    1.3  Calculadora de Tarifas de Estacionamento
 *    1.4  Classificação de Números Pares e Ímpares
 *    1.5  Jogo de Adivinhação (1 a 100)
 *    1.6  Tabela de Multiplicação
 *    1.7  Ordenação de 3 Valores
 *    1.8  Contador de Positivos, Negativos e Zeros
 *    1.9  Cálculo de Fatorial
 *    1.10 Sistema de Pagamento por Hora Trabalhada
 *
 *  PARTE 2 — SEMANA 8: Sistemas com Laços e Condições (2 exercícios)
 *    2.1  Lançamento de Notas e Frequências
 *    2.2  Sistema com Recuperação e Contagem de Status
 *
 *  PARTE 3 — EXERCÍCIOS 02/06: Condicionais e Laços (4 exercícios)
 *    3.1  Classificação de Atletas por Idade
 *    3.2  Controle de Gastos de Cartão (while)
 *    3.3  Controle de Gastos de Cartão (do-while)
 *    3.4  Jogo de Sorteio com 5 Chances
 *
 *  PARTE 4 — SEMANA 9: Versões do Caixa Eletrônico
 *    4.1  stable_v1 — Primeira versão funcional
 *    4.2  Notas sobre as versões v2 e v3
 *
 *  PARTE 5 — PROJETO FINAL: Sistema de Caixa Eletrônico (versão final)
 *
 *  PARTE 6 — REFERÊNCIA RÁPIDA DA LINGUAGEM C
 *
 * =========================================================================
 *  CONCEITOS DE C COBERTOS NESTE ARQUIVO
 * =========================================================================
 *
 *  • Tipos de dados: int, float, char, arrays (strings)
 *  • Entrada/Saída: printf(), scanf() com máscaras %i, %f, %s, %c, %.2f
 *  • Operadores: aritméticos (+,-,*,/,%), relacionais (==,!=,>,<,>=,<=),
 *                lógicos (&&, ||, !)
 *  • Estruturas condicionais: if, else, else if (encadeado e aninhado)
 *  • Laços de repetição: while, do-while
 *  • Funções: void com parâmetros, main() com retorno int
 *  • Bibliotecas: stdio.h, stdlib.h, time.h
 *  • Geração de números aleatórios: rand(), srand(), time(NULL)
 *  • Algoritmo guloso (caixa eletrônico)
 *  • Proteção contra buffer overflow em strings
 *
 * =========================================================================
 *  COMO USAR ESTE ARQUIVO
 * =========================================================================
 *
 *  Este arquivo é uma COMPILAÇÃO para estudo e referência.
 *  Cada exercício possui seu próprio #include e main().
 *
 *  *** NÃO COMPILE este arquivo inteiro — ele tem múltiplos main()! ***
 *
 *  Para compilar um exercício individual:
 *    1. Copie apenas o exercício desejado para um novo arquivo .c
 *    2. Compile com: gcc exercicio.c -o exercicio
 *    3. Execute com: ./exercicio
 *
 *  Ou use uma IDE online como GDB Online (gdbonline.com)
 *
 ****************************************************************************/


/*****************************************************************************
 *                                                                           *
 *                 PARTE 1 — SEMANA 7: EXERCÍCIOS FUNDAMENTAIS                 *
 *                                                                           *
 *****************************************************************************/

/****************************************************************************
 *  PROGRAMA: Exercícios da Semana 7 — Fundamentos de C
 * =========================================================================
 *
 *  DESCRIÇÃO GERAL:
 *    Coleção de 10 exercícios práticos que cobrem os fundamentos da
 *    linguagem C, desde verificação simples com if/else até jogos com
 *    números aleatórios e cálculos matemáticos como fatorial.
 *
 *  LISTA DE EXERCÍCIOS:
 *    1. Verificação de Idade para Entrada em Evento
 *    2. Calculadora de Média Escolar
 *    3. Calculadora de Tarifas de Estacionamento
 *    4. Classificação de Números Pares e Ímpares
 *    5. Jogo de Adivinhação (1 a 100)
 *    6. Tabela de Multiplicação
 *    7. Ordenação de 3 Valores
 *    8. Contador de Positivos, Negativos e Zeros
 *    9. Cálculo de Fatorial
 *   10. Sistema de Pagamento por Hora Trabalhada
 *
 *  CONCEITOS DE C UTILIZADOS:
 *    - Variáveis: int, float, char
 *    - Entrada/Saída: printf(), scanf() com máscaras %i, %f, %s
 *    - Operadores: aritméticos (+,-,*,/,%), relacionais (==,!=,>,<,>=,<=),
 *                  lógicos (&&, ||)
 *    - Estruturas condicionais: if, else, else if (encadeado e aninhado)
 *    - Laços de repetição: while
 *    - Bibliotecas: stdio.h, stdlib.h, time.h
 *    - Geração de números aleatórios: rand(), srand(), time()
 *
 *   
 ****************************************************************************/


/* ========================================================================
 *  EXERCÍCIO 1: Verificação de Idade para Entrada em Evento
 * ========================================================================
 *  Enunciado: Leia a idade do usuário e verifique se pode entrar em um
 *  evento (idade >= 18 → permitido, caso contrário → proibido).
 *
 *  Conceitos: scanf com %i, if/else, operador relacional >=
 * ======================================================================== */
#include <stdio.h>

int main() {

    /* Declaração da variável que armazena a idade do usuário */
    int idade;

    /* Solicita a idade ao usuário via teclado */
    printf("Informe sua idade: ");
    scanf("%i", &idade);
    /* scanf lê um inteiro (%i) e armazena no endereço (&) de 'idade' */

    /* Estrutura condicional: verifica se a idade é >= 18 */
    if (idade >= 18) {
        /* Se a condição for verdadeira (idade >= 18) */
        printf("Entrada Permitida");
    } else {
        /* Se a condição for falsa (idade < 18) */
        printf("Entrada Negada");
    }

    return 0;   /* Encerra o programa com sucesso */
}


/* ========================================================================
 *  EXERCÍCIO 2: Calculadora de Média Escolar
 * ========================================================================
 *  Enunciado: Receba 3 notas, calcule a média e determine:
 *    - Média >= 7.0 → "Aprovado"
 *    - Média entre 5.0 e 6.9 → "Recuperação"
 *    - Média < 5.0 → "Reprovado"
 *
 *  Conceitos: variáveis float, operações aritméticas,
 *             if/else if/else encadeado, operador lógico &&
 * ======================================================================== */
#include <stdio.h>

int main() {

    /* float: tipo para números com casas decimais (ponto flutuante) */
    float nota1, nota2, nota3, media;

    /* Entrada das 3 notas do aluno */
    printf("Informe nota1: ");
    scanf("%f", &nota1);    /* %f = máscara para float */

    printf("Informe nota2: ");
    scanf("%f", &nota2);

    printf("Informe nota3: ");
    scanf("%f", &nota3);

    /* Cálculo da média aritmética em dois passos:
     * 1. Soma as 3 notas
     * 2. Divide por 3 */
    media = nota1 + nota2 + nota3;
    media = media / 3;

    /* Estrutura condicional encadeada (if / else if / else)
     * Verifica de cima para baixo — a primeira condição verdadeira é executada */
    if (media >= 7) {
        printf("Aprovado");
    } else if (media <= 6.9 && media >= 5) {
        /* && = operador E (AND): ambas condições devem ser verdadeiras */
        printf("Recuperaçao");
    } else {
        /* Se nenhuma condição anterior foi verdadeira → reprovado */
        printf("Reprovado");
    }

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 3: Calculadora de Tarifas de Estacionamento
 * ========================================================================
 *  Enunciado: R$5,00 para a primeira hora + R$3,00 por hora adicional.
 *
 *  Conceitos: operações aritméticas com int, formatação de saída
 *
 *  NOTA: A fórmula usada (5 + 3*hora) cobra R$3 por TODAS as horas
 *  incluindo a primeira. A fórmula correta seria:
 *    if (hora == 1) tarifa = 5;
 *    else tarifa = 5 + 3 * (hora - 1);
 * ======================================================================== */
#include <stdio.h>

int main() {

    int hora, tarifa;    /* hora: tempo de permanência; tarifa: valor a pagar */

    printf("Digite quantas horas o veiculo ficou: ");
    scanf("%i", &hora);

    /* Cálculo da tarifa: R$5 base + R$3 por hora */
    tarifa = 5 + (3 * hora);

    /* Exibe o resultado formatado */
    printf("Tarifa total: R$");
    printf("%d\n", tarifa);    /* %d é equivalente a %i para inteiros */

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 4: Classificação de Números Pares e Ímpares
 * ========================================================================
 *  Enunciado: Leia um número e determine se é par ou ímpar.
 *
 *  Conceitos: operador módulo (%), estrutura if/else
 *
 *  Lógica: Se o resto da divisão por 2 for 0, o número é PAR.
 *          Caso contrário, é ÍMPAR.
 * ======================================================================== */
#include <stdio.h>

int main() {

    int num, resto;

    printf("Digite numero: ");
    scanf("%i", &num);

    /* Operador % (módulo): retorna o RESTO da divisão inteira.
     * Exemplo: 7 % 2 = 1 (ímpar), 8 % 2 = 0 (par) */
    resto = num % 2;

    if (resto == 0) {
        /* == é o operador de COMPARAÇÃO (diferente de = que é atribuição) */
        printf("PAR");
    } else {
        printf("IMPAR");
    }

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 5: Jogo de Adivinhação
 * ========================================================================
 *  Enunciado: O programa sorteia um número de 1 a 100 e o usuário tenta
 *  adivinhar. O programa dá dicas se o número é maior ou menor.
 *
 *  Conceitos: números aleatórios (rand/srand/time), while com condição
 *             de parada, múltiplos if para feedback
 * ======================================================================== */
#include <stdio.h>
#include <stdlib.h>    /* Biblioteca para rand() e srand() */
#include <time.h>      /* Biblioteca para time() — usada como semente */

int main() {

    int chute, numero;

    /* Inicialização do gerador de números aleatórios:
     * srand(time(NULL)) usa o tempo atual como "semente".
     * Sem isso, rand() geraria a mesma sequência toda execução. */
    srand(time(NULL));
    numero = rand() % 100 + 1;
    /* rand() % 100 gera de 0 a 99; +1 ajusta para 1 a 100 */

    chute = 0;    /* Inicializa com valor diferente do número sorteado */

    /* Loop principal: continua enquanto o chute for diferente do número */
    while (chute != numero) {
        printf("Digite um numero: ");
        scanf("%i", &chute);

        /* Dica: o número é menor que o chute */
        if (chute > numero) {
            printf("Numero é menor\n");
        }

        /* Dica: o número é maior que o chute */
        if (chute < numero) {
            printf("Numero é maior\n");
        }
    }

    /* Saiu do while → chute == numero → acertou! */
    printf("ACERTOU ;) ");

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 6: Tabela de Multiplicação
 * ========================================================================
 *  Enunciado: Receba um número e exiba sua tabela de multiplicação (1-10).
 *
 *  Conceitos: laço while com contador, operação aritmética *,
 *             formatação de saída com múltiplos printf
 * ======================================================================== */
#include <stdio.h>

int main() {

    int numero, contador;

    printf("Informe numero ");
    scanf("%i", &numero);

    contador = 1;    /* Começa em 1 (tabela de 1 a 10) */

    /* Repete enquanto o contador for <= 10 */
    while (contador <= 10) {
        /* Imprime: "numero * contador = resultado" */
        printf("%i * %i = %i\n", numero, contador, numero * contador);
        contador = contador + 1;    /* Incrementa o contador */
    }

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 7: Ordenação de 3 Valores
 * ========================================================================
 *  Enunciado: Receba 3 números e apresente em ordem decrescente.
 *
 *  Conceitos: condicionais aninhadas (if dentro de if),
 *             operadores lógicos &&, operador de igualdade ==
 * ======================================================================== */
#include <stdio.h>

int main() {

    int v1, v2, v3, loop;

    /* Entrada dos 3 valores */
    printf("Informe valor 1:");
    scanf("%i", &v1);

    printf("Informe valor 2:");
    scanf("%i", &v2);

    printf("Informe valor 3:");
    scanf("%i", &v3);

    /* Verifica qual é o MAIOR e ordena os outros dois dentro do if.
     * Usa condicionais aninhadas: if externo encontra o maior,
     * if interno ordena os dois restantes. */

    /* Caso: V1 é o maior */
    if (v1 > v2 && v1 > v3) {
        printf("V1 >");
        if (v2 > v3) {
            printf(" V2 > V3");
        } else if (v2 == v3) {
            printf(" v2 = v3");
        } else {
            printf(" V3 > V2");
        }
    }

    /* Caso: V2 é o maior */
    if (v2 > v1 && v2 > v3) {
        printf("V2 >");
        if (v1 > v3) {
            printf(" V1 > V3");
        } else if (v1 == v3) {
            printf(" v1 = v3");
        } else {
            printf(" V3 > V1");
        }
    }

    /* Caso: V3 é o maior */
    if (v3 > v1 && v3 > v2) {
        printf(" V3 >");
        if (v1 > v2) {
            printf(" V1 > V2 ");
        } else if (v1 == v2) {
            printf(" v1 = v2");
        } else {
            printf(" V2 > V1");
        }
    }

    /* Caso especial: todos iguais */
    if (v1 == v2 && v1 == v3) {
        printf("todos iguais");
    }

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 8: Contador de Positivos, Negativos e Zeros
 * ========================================================================
 *  Enunciado: Leia 10 números e conte quantos são positivos, negativos
 *  e zeros.
 *
 *  Conceitos: while com contador fixo (10 iterações), contadores
 *             acumuladores, múltiplos if independentes
 * ======================================================================== */
#include <stdio.h>

int main() {

    int numero;
    int positivo, negativo, zero;    /* Contadores de cada categoria */
    int resultado;
    int contador;

    /* Inicialização dos contadores em 0 (obrigatório em C!) */
    positivo = 0;
    negativo = 0;
    zero = 0;
    contador = 1;    /* Começa em 1, vai até 10 */

    /* Loop para ler 10 números */
    while (contador <= 10) {
        printf("Informe numero: ");
        scanf("%i", &numero);

        /* Classifica o número em uma das 3 categorias */
        if (numero >= 1) {
            positivo = positivo + 1;    /* Incrementa contador de positivos */
        }
        if (numero <= -1) {
            negativo = negativo + 1;    /* Incrementa contador de negativos */
        }
        if (numero == 0) {
            zero = zero + 1;            /* Incrementa contador de zeros */
        }

        contador = contador + 1;    /* Avança para o próximo número */
    }

    /* Exibe os resultados finais */
    printf("Quantidade de numeros positivos: %i\n", positivo);
    printf("Quantidade de numeros negativos: %i\n", negativo);
    printf("Quantidade de numeros zero: %i\n", zero);

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 9: Cálculo de Fatorial
 * ========================================================================
 *  Enunciado: Receba um número N e calcule N! (fatorial).
 *  Fatorial de N = 1 × 2 × 3 × ... × N.   Ex: 5! = 120
 *
 *  Conceitos: while como laço de multiplicação acumulativa,
 *             inicialização de acumulador multiplicativo com 1
 * ======================================================================== */
#include <stdio.h>

int main() {

    int numero, contador, result;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    contador = 1;
    result = 1;
    /* IMPORTANTE: Para acumuladores multiplicativos, inicializar com 1
     * (não com 0, pois qualquer número × 0 = 0) */

    /* Multiplica result por cada valor de 1 até numero */
    while (contador <= numero) {
        result = result * contador;     /* Acumula a multiplicação */
        contador = contador + 1;        /* Avança o contador */
    }

    printf("O fatorial do numero é: %i\n", result);

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 10: Sistema de Pagamento por Hora Trabalhada
 * ========================================================================
 *  Enunciado: R$20/hora para as primeiras 40h, R$30/hora extra (>40h).
 *
 *  Conceitos: condicionais para cenários diferentes, cálculos com
 *             separação de valores normais e extras
 * ======================================================================== */
#include <stdio.h>

int main() {

    int hora, salario;         /* Horas normais e salário total */
    int hora_extra, extra;     /* Horas extras e valor das extras */

    printf("Digite as horas trabalhadas: ");
    scanf("%i", &hora);

    /* Cenário 1: Até 40 horas (sem horas extras) */
    if (hora <= 40) {
        salario = hora * 20;    /* R$20 por hora */
        printf("Salario é: R$%i", salario);
    }

    /* Cenário 2: Mais de 40 horas (com horas extras) */
    if (hora > 40) {
        /* Separa as horas normais das extras */
        hora_extra = hora - 40;        /* Horas que excedem 40 */
        hora = hora - hora_extra;      /* Ajusta para 40h normais */

        /* Calcula cada parte separadamente */
        salario = hora * 20;           /* R$20 × 40h normais */
        extra = hora_extra * 30;       /* R$30 × horas extras */

        /* Soma para obter o salário total */
        salario = salario + extra;

        printf("Salario + Horas extras: R$ %i\n", salario);
        printf("Horas: %i\n", hora);
        printf("Horas extras: %i\n", hora_extra);
    }

    return 0;
}



/*****************************************************************************
 *                                                                           *
 *             PARTE 2 — SEMANA 8: SISTEMAS COM LAÇOS E CONDIÇÕES              *
 *                                                                           *
 *****************************************************************************/

/****************************************************************************
 *  PROGRAMA: Exercícios da Semana 8 — Sistemas com Laços e Condições
 * =========================================================================
 *
 *  DESCRIÇÃO GERAL:
 *    Dois programas mais elaborados que combinam laços while com
 *    estruturas condicionais encadeadas, strings (nomes de alunos),
 *    funções void e contadores múltiplos.
 *
 *  LISTA DE EXERCÍCIOS:
 *    1. Lançamento de Notas e Frequências (Aprovado/Recuperação/Reprovado)
 *    2. Sistema com Recuperação e Contagem Total de Status
 *
 *  CONCEITOS DE C UTILIZADOS:
 *    - Funções void com parâmetros
 *    - Arrays de caracteres (strings) com proteção contra buffer overflow
 *    - Laço while controlado por variável de contagem
 *    - Condicionais encadeadas com operadores lógicos (&&)
 *    - Contadores acumuladores para estatísticas
 *    - Mistura de tipos int e float em comparações
 *
 *   
 ****************************************************************************/


/* ========================================================================
 *  EXERCÍCIO 1: Lançamento de Notas e Frequências
 * ========================================================================
 *  Enunciado:
 *    - Perguntar quantos alunos existem na turma
 *    - Para cada aluno: nome, 3 notas, frequência (%)
 *    - Aprovado: média >= 7 E frequência >= 75%
 *    - Recuperação: média entre 5 e 6.9 E frequência >= 75%
 *    - Reprovado: caso contrário
 *
 *  Conceitos: função void, while, if/else if/else com &&, strings
 * ======================================================================== */
#include <stdio.h>

/* Função auxiliar para imprimir bordas visuais no terminal.
 * Recebe um caractere e a quantidade de vezes para repeti-lo. */
void imprimir(char caractere, int quantidade) {
    int a;
    a = 0;
    while (a < quantidade) {
        printf("%c", caractere);
        a = a + 1;
    }
}

int main() {

    /* === DECLARAÇÃO DE VARIÁVEIS === */
    int nota1, nota2, nota3, media;    /* Notas e média do aluno */
    char nomes[50];                     /* Array de 50 chars para o nome */
    int i, loop;                        /* i = total de alunos; loop = contador */
    int freq;                           /* Frequência em porcentagem */

    /* Solicita a quantidade de alunos na turma */
    printf("Digite a quantidade de alunos : ");
    scanf("%d", &i);    /* %d é equivalente a %i para inteiros */

    loop = 0;    /* Inicializa o contador do laço */

    /* Loop que processa cada aluno */
    while (loop < i) {

        /* Lê o nome do aluno.
         * %49s lê no máximo 49 caracteres, deixando espaço para o '\0'
         * (caractere nulo que marca o fim da string em C).
         * Isso evita BUFFER OVERFLOW — quando dados excedem o espaço
         * alocado, podendo corromper memória. */
        printf("Digite nome do aluno: ");
        scanf("%49s", nomes);
        /* NOTA: scanf com %s não precisa de & porque o nome do array
         * já é um ponteiro para o primeiro elemento. */

        /* Lê as 3 notas do aluno */
        printf("Digite nota 1: ");
        scanf("%i", &nota1);
        printf("Digite nota 2: ");
        scanf("%i", &nota2);
        printf("Digite nota 3: ");
        scanf("%i", &nota3);

        /* Lê a frequência */
        printf("Digite a frequencia do aluno/a : ");
        scanf("%i", &freq);

        /* Calcula a média aritmética.
         * ATENÇÃO: Como 'media' é int, o resultado será truncado
         * (ex: 20/3 = 6, não 6.67). Para precisão, usar float. */
        media = nota1 + nota2 + nota3;
        media = media / 3;

        /* Verifica a situação do aluno usando && (E lógico):
         * AMBAS as condições precisam ser verdadeiras. */
        if (media >= 7 && freq >= 75) {
            /* Aprovado: boa nota E boa frequência */
            imprimir('#', 30);
            printf("\n%s STATUS: APROVADO\n", nomes);
            imprimir('#', 30);
            printf("\n");
        } else if (media >= 5 && media <= 6.9 && freq >= 75) {
            /* Recuperação: nota intermediária E boa frequência */
            imprimir('#', 30);
            printf("\n%s STATUS: APROVADO\n", nomes);
            /* NOTA: O texto original diz "APROVADO" mas deveria ser
             * "RECUPERAÇÃO" conforme o enunciado */
            imprimir('#', 30);
            printf("\n");
        } else {
            /* Reprovado: qualquer outro caso */
            imprimir('#', 30);
            printf("\n%s STATUS: REPROVADO\n", nomes);
            imprimir('#', 30);
            printf("\n");
        }

        loop = loop + 1;    /* Avança para o próximo aluno */
    }

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 2: Sistema com Recuperação e Contagem de Status
 * ========================================================================
 *  Enunciado:
 *    - Leia nome e 3 notas de vários alunos
 *    - Média >= 7 → Aprovado
 *    - Média entre 5 e 7 → solicita nota de recuperação, recalcula
 *    - Após recuperação, média >= 6 → Aprovado com recuperação
 *    - Caso contrário → Reprovado
 *    - Ao final, exibe totais de aprovados, recuperação e reprovados
 *
 *  Conceitos: contadores múltiplos (aprov, recup, repro),
 *             recálculo de média com 4ª nota, condicionais profundas
 * ======================================================================== */
#include <stdio.h>

/* Reutiliza a mesma função void de impressão */
void imprimir(char caractere, int quantidade) {
    int a;
    a = 0;
    while (a < quantidade) {
        printf("%c", caractere);
        a = a + 1;
    }
}

int main() {

    /* === DECLARAÇÃO DE VARIÁVEIS === */
    int nota1, nota2, nota3, notaextra, media;    /* Notas (inclui recuperação) */
    char nomes[50];        /* Nome do aluno */
    int i, loop;           /* Controle do laço */
    int aprov, recup, repro;    /* Contadores de cada status */

    /* Solicita o total de alunos */
    printf("Digite a quantidade de alunos : ");
    scanf("%d", &i);

    /* Inicializa TODOS os contadores em 0.
     * Isso é essencial em C — variáveis locais não são inicializadas
     * automaticamente e podem conter valores aleatórios ("lixo"). */
    loop = 0;
    aprov = 0;
    recup = 0;
    repro = 0;

    /* Loop para processar cada aluno */
    while (loop < i) {

        printf("Digite nome do aluno: ");
        scanf("%49s", nomes);

        printf("Digite nota 1: ");
        scanf("%i", &nota1);
        printf("Digite nota 2: ");
        scanf("%i", &nota2);
        printf("Digite nota 3: ");
        scanf("%i", &nota3);

        /* Calcula a média com 3 notas */
        media = nota1 + nota2 + nota3;
        media = media / 3;

        /* Avaliação do aluno com possibilidade de recuperação */
        if (media >= 7) {
            /* Aprovado direto */
            printf("\n%s STATUS: APROVADO\n", nomes);
            aprov = aprov + 1;    /* Incrementa o contador de aprovados */

        } else if (media >= 5 && media <= 6.9) {
            /* Aluno em recuperação: solicita nota extra */
            printf("Digite nota da recuperacao: ");
            scanf("%i", &notaextra);

            /* Recalcula a média com 4 notas (incluindo recuperação) */
            media = nota1 + nota2 + nota3 + notaextra;
            media = media / 4;

            if (media >= 6) {
                /* Aprovado após recuperação */
                printf("\n%s STATUS: APROVADO COM RECUPERACAO\n", nomes);
                recup = recup + 1;
            } else {
                /* Reprovado mesmo após recuperação */
                printf("\n%s STATUS: REPROVADO\n", nomes);
                repro = repro + 1;
            }

        } else {
            /* Reprovado direto (média < 5) */
            printf("\n%s STATUS: REPROVADO\n", nomes);
            repro = repro + 1;
        }

        loop = loop + 1;
    }

    /* === EXIBIÇÃO DOS TOTAIS === */
    imprimir('#', 30);
    printf("\nTOTAL DE ALUNOS/A APROVADOS: %i\n", aprov);
    printf("\nTOTAL DE ALUNOS/A RECUPERAÇAO: %i\n", recup);
    printf("\nTOTAL DE ALUNOS/A REPROVADOS: %i\n", repro);
    imprimir('#', 30);

    return 0;
}



/*****************************************************************************
 *                                                                           *
 *              PARTE 3 — EXERCÍCIOS 02/06: CONDICIONAIS E LAÇOS               *
 *                                                                           *
 *****************************************************************************/

/****************************************************************************
 *  PROGRAMA: Exercícios de 02/06 — Condicionais e Laços
 * =========================================================================
 *
 *  DESCRIÇÃO GERAL:
 *    Quatro exercícios que exploram condicionais encadeadas,
 *    laços while e do-while, controle de gastos e jogos com
 *    números aleatórios.
 *
 *  LISTA DE EXERCÍCIOS:
 *    1. Classificação de Atletas por Idade (if/else if encadeado)
 *    2. Controle de Gastos de Cartão de Crédito (while)
 *    3. Controle de Gastos de Cartão de Crédito (do-while)
 *    4. Jogo de Sorteio com 5 Chances (while + rand)
 *
 *  CONCEITOS DE C UTILIZADOS:
 *    - Condicionais encadeadas (if / else if / else)
 *    - Operadores lógicos && (E), comparações compostas
 *    - Laço while (verifica condição ANTES)
 *    - Laço do-while (executa pelo menos UMA vez, verifica DEPOIS)
 *    - Tipos float e int misturados
 *    - Formatação %.2f para 2 casas decimais
 *    - Geração de números aleatórios com rand()
 *
 *   
 ****************************************************************************/


/* ========================================================================
 *  EXERCÍCIO 1: Classificação de Atletas por Idade
 * ========================================================================
 *  Enunciado: Classificar atletas em categorias:
 *    - Infantil: até 12 anos
 *    - Juvenil: 13 a 17 anos
 *    - Adulto: 18 a 59 anos
 *    - Sênior: 60 anos ou mais
 *
 *  Conceitos: if/else if encadeado com operadores && para faixas
 * ======================================================================== */
#include <stdio.h>

int main() {

    int idade;

    idade = 0;    /* Inicializa com valor neutro */

    printf("Digite Idade do jogador/a/e: ");
    scanf("%i", &idade);

    /* Condicionais encadeadas: testadas de cima para baixo.
     * A PRIMEIRA condição verdadeira é executada, as demais são ignoradas. */
    if (idade >= 60) {
        printf("SENIOR: 60 anos ou mais ");
    } else if (idade >= 18 && idade <= 59) {
        /* && garante que a idade está ENTRE 18 e 59 (inclusive) */
        printf("ADULTO: de 18 a 59 anos ");
    } else if (idade >= 13 && idade <= 17) {
        printf("JUVENIL: de 13 a 17 anos ");
    } else {
        /* Qualquer idade que não se encaixou nas condições anteriores */
        printf("Infantil: até 12 anos");
    }
}


/* ========================================================================
 *  EXERCÍCIO 2: Controle de Gastos — Versão com WHILE
 * ========================================================================
 *  Enunciado: Registrar compras em um cartão de crédito. Parar quando
 *  o limite for ultrapassado ou o valor digitado for 0.
 *  Exibir: número de compras, total gasto e saldo.
 *
 *  Conceitos: while com duas condições (&&), float para valores
 *             monetários, formatação %.2f
 *
 *  DIFERENÇA DO DO-WHILE: O while verifica a condição ANTES de executar.
 *  Se o limite for 0, o laço nem começa.
 * ======================================================================== */
#include <stdio.h>

int main() {

    float gastos, total_gasto, saldo;    /* Valores financeiros (float) */
    int compras, limite;                  /* Contagem e limite */

    /* Inicialização de todas as variáveis */
    gastos = 1;          /* Inicializa com valor > 0 para entrar no while */
    limite = 0;
    total_gasto = 0;
    saldo = 0;
    compras = 0;

    printf("Informe o limite do teu cartao: ");
    scanf("%i", &limite);

    /* while: verifica ANTES de cada execução.
     * Condição: total_gasto < limite E gastos != 0 */
    while (total_gasto < limite && gastos != 0) {
        printf("Informe o valor da compra: ");
        scanf("%f", &gastos);    /* %f para ler float */

        total_gasto = total_gasto + gastos;    /* Acumula o gasto total */
        compras = compras + 1;                 /* Conta a compra */
        saldo = limite - total_gasto;          /* Calcula saldo restante */

        /* %.2f formata o float com exatamente 2 casas decimais */
        printf("COMPRA: %i SALDO: %.2f \n", compras, saldo);
    }

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 3: Controle de Gastos — Versão com DO-WHILE
 * ========================================================================
 *  Mesmo enunciado do exercício 2, mas usando do-while.
 *
 *  DIFERENÇA: O do-while EXECUTA PRIMEIRO, verifica DEPOIS.
 *  Isso garante que o bloco seja executado pelo menos UMA vez,
 *  mesmo que a condição já seja falsa.
 *
 *  Útil quando: você quer que o usuário faça pelo menos uma ação
 *  antes de verificar se deve continuar.
 * ======================================================================== */
#include <stdio.h>

int main() {

    float gastos, total_gasto, saldo;
    int compras, limite;

    gastos = 1;
    limite = 0;
    total_gasto = 0;
    saldo = 0;
    compras = 0;

    printf("Informe o limite do teu cartao: ");
    scanf("%i", &limite);

    /* do-while: executa o bloco PRIMEIRO, depois verifica a condição */
    do {
        printf("Informe o valor da compra: ");
        scanf("%f", &gastos);

        total_gasto = total_gasto + gastos;
        compras = compras + 1;
        saldo = limite - total_gasto;

        printf("COMPRA: %i SALDO: %.2f \n", compras, saldo);
    } while (total_gasto < limite && gastos != 0);
    /* O ponto-e-vírgula após o while é OBRIGATÓRIO no do-while */

    return 0;
}


/* ========================================================================
 *  EXERCÍCIO 4: Jogo de Sorteio com 5 Chances
 * ========================================================================
 *  Enunciado: Sortear um número de 1 a 10. O usuário tem 5 chances
 *  para acertar. Exibir quantos acertou ao final.
 *
 *  Conceitos: rand() % 10 + 1 para números de 1 a 10,
 *             while com limite de tentativas
 *
 *  NOTA: Este código está INCOMPLETO (possui erros de sintaxe no final).
 *  O if(==0) na linha original é um erro — falta a variável à esquerda.
 *  Também falta contabilizar os acertos corretamente.
 * ======================================================================== */
#include <stdio.h>
#include <stdlib.h>    /* Para rand() e srand() */
#include <time.h>      /* Para time() */

int main() {

    int valor, chance, num;

    valor = 0;
    chance = 0;
    num = 0;

    /* Loop: enquanto o jogador tiver chances (< 5 erros) */
    while (chance < 5) {
        /* Sorteia um novo número a cada rodada (1 a 10) */
        valor = rand() % 10 + 1;

        printf("Escolha um numero: ");
        scanf("%i", &num);

        if (num == valor) {
            printf("ACERTOU :) \n");
            /* NOTA: Aqui deveria incrementar um contador de acertos */
        } else {
            printf("Errou ;( Tente denovo \n");
            chance = chance + 1;    /* Conta como chance perdida */
            printf("Chances Restantes: %i \n", 5 - chance);
        }
    }

    /* NOTA: O código original possui erros de sintaxe nesta seção.
     * Deveria exibir a quantidade total de acertos. */

    return 0;
}



/*****************************************************************************
 *                                                                           *
 *               PARTE 4 — SEMANA 9: VERSÕES DO CAIXA ELETRÔNICO               *
 *                                                                           *
 *****************************************************************************/

/****************************************************************************
 *  PROGRAMA: Semana 9 — Versões do Sistema de Caixa Eletrônico
 * =========================================================================
 *
 *  DESCRIÇÃO GERAL:
 *    Contém 3 versões do sistema de caixa eletrônico, mostrando a
 *    evolução do código durante o desenvolvimento. Cada versão refina
 *    a anterior até chegar na versão final funcional.
 *
 *  VERSÕES:
 *    1. stable_v1 — Primeira versão funcional (if separados para cédulas)
 *    2. stable_v2_clean — Versão limpa com comentários melhorados
 *    3. Untitled_3 — Versão com else if encadeado (bug na exibição)
 *
 *  CONCEITOS: Algoritmo guloso, cópia de segurança de variáveis,
 *             função void, while, if/else if, menu interativo
 *
 *
 *  NOTA: As 3 versões compartilham a mesma lógica base.
 *        A versão final (final.c) é a recomendada para uso.
 *        Este arquivo documenta o processo de desenvolvimento.
 ****************************************************************************/


/* ========================================================================
 *  VERSÃO 1: stable_v1 — Primeira versão funcional
 * ========================================================================
 *  Esta é a primeira versão estável do caixa eletrônico.
 *  Usa if separados (não else if) para exibir as cédulas usadas,
 *  o que é a abordagem CORRETA — cada cédula é verificada
 *  independentemente.
 * ======================================================================== */
#include <stdio.h>

/* Função auxiliar: imprime um caractere N vezes (borda visual) */
void imprimir(char caractere, int quantidade) {
    int a;
    a = 0;
    while (a < quantidade) {
        printf("%c", caractere);
        a = a + 1;
    }
}

int main() {

    /* Variáveis de quantidade de cédulas */
    int q200, q100, q50, q20, q10, q5, q2;

    /* Variáveis de controle de saque */
    int Saque_Total, Saque_Indisponivel, Saque_Solicitado;
    int Valor_Restante;

    /* Cópias temporárias para simulação do saque */
    int temp_q200, temp_q100, temp_q50, temp_q20, temp_q10, temp_q5, temp_q2;

    /* Quantidade de cada cédula a ser entregue */
    int n200, n100, n50, n20, n10, n5, n2;

    /* Status do menu: 1=Saque, 2=Status, 3=Finalizar */
    int status;

    /* --- Configuração inicial das cédulas --- */
    imprimir('#', 25);
    printf("\nCAIXA ELETRONICO");
    printf("\nCedulas de R$200 : ");  scanf("%i", &q200);
    printf("Cedulas de R$100 : ");   scanf("%i", &q100);
    printf("Cedulas de R$50 : ");    scanf("%i", &q50);
    printf("Cedulas de R$20 : ");    scanf("%i", &q20);
    printf("Cedulas de R$10 : ");    scanf("%i", &q10);
    printf("Cedulas de R$5 : ");     scanf("%i", &q5);
    printf("Cedulas de R$2 : ");     scanf("%i", &q2);
    imprimir('#', 25);

    /* --- Loop principal do menu --- */
    while (status != 3) {
        imprimir('#', 25);
        printf("\n1 = SAQUE");
        printf("\n2 = STATUS");
        printf("\n3 = FINALIZAR\n");
        scanf("%i", &status);

        /* OPÇÃO 1: Saque */
        if (status == 1) {
            imprimir('#', 25);
            printf("\nIndique o valor do saque: ");
            scanf("%i", &Saque_Solicitado);

            /* Cópia de segurança */
            temp_q200 = q200;  temp_q100 = q100;  temp_q50 = q50;
            temp_q20  = q20;   temp_q10  = q10;   temp_q5  = q5;
            temp_q2   = q2;

            /* Algoritmo guloso: da maior cédula para a menor */
            n200 = 0;
            while (Saque_Solicitado >= 200 && temp_q200 > 0) {
                Saque_Solicitado -= 200;  temp_q200--;  n200++;
            }
            n100 = 0;
            while (Saque_Solicitado >= 100 && temp_q100 > 0) {
                Saque_Solicitado -= 100;  temp_q100--;  n100++;
            }
            n50 = 0;
            while (Saque_Solicitado >= 50 && temp_q50 > 0) {
                Saque_Solicitado -= 50;  temp_q50--;  n50++;
            }
            n20 = 0;
            while (Saque_Solicitado >= 20 && temp_q20 > 0) {
                Saque_Solicitado -= 20;  temp_q20--;  n20++;
            }
            n10 = 0;
            while (Saque_Solicitado >= 10 && temp_q10 > 0) {
                Saque_Solicitado -= 10;  temp_q10--;  n10++;
            }
            n5 = 0;
            while (Saque_Solicitado >= 5 && temp_q5 > 0) {
                Saque_Solicitado -= 5;  temp_q5--;  n5++;
            }
            n2 = 0;
            while (Saque_Solicitado >= 2 && temp_q2 > 0) {
                Saque_Solicitado -= 2;  temp_q2--;  n2++;
            }

            /* Verificação: saque foi completamente atendido? */
            if (Saque_Solicitado == 0) {
                printf("Saque aprovado, retire essas notas: ");
                /* Confirma: atualiza as quantidades reais */
                q200 -= n200;  q100 -= n100;  q50 -= n50;
                q20  -= n20;   q10  -= n10;   q5  -= n5;   q2 -= n2;

                /* Exibe apenas cédulas usadas (if separados — CORRETO) */
                if (n200 > 0) printf("\nCedulas de R$200: %i", n200);
                if (n100 > 0) printf("\nCedulas de R$100: %i", n100);
                if (n50 > 0)  printf("\nCedulas de R$50: %i", n50);
                if (n20 > 0)  printf("\nCedulas de R$20: %i", n20);
                if (n10 > 0)  printf("\nCedulas de R$10: %i", n10);
                if (n5 > 0)   printf("\nCedulas de R$5: %i", n5);
                if (n2 > 0)   printf("\nCedulas de R$2: %i\n", n2);
            } else if (Saque_Solicitado != 0) {
                printf("Valor indisponível para saque");
            }

        /* OPÇÃO 2: Verificar estoque */
        } else if (status == 2) {
            imprimir('#', 25);
            printf("\nQUANTIDADE DE CEDULAS DISPONIVEIS:");
            printf("\nCedulas de R$200: %i", q200);
            printf("\nCedulas de R$100: %i", q100);
            printf("\nCedulas de R$50: %i", q50);
            printf("\nCedulas de R$20: %i", q20);
            printf("\nCedulas de R$10: %i", q10);
            printf("\nCedulas de R$5: %i", q5);
            printf("\nCedulas de R$2: %i\n", q2);
        }
    }

    imprimir('#', 25);
    printf("\nENCERRANDO PROGRAMA...");

    return 0;
}

/* ========================================================================
 *  NOTA SOBRE AS VERSÕES 2 E 3:
 * ========================================================================
 *  A versão stable_v2_clean é essencialmente igual à v1 com comentários
 *  mais detalhados. A versão Untitled_3 possui um BUG: usa else if em
 *  vez de if separados para exibir as cédulas, o que faz com que apenas
 *  a PRIMEIRA cédula utilizada seja exibida (as demais são ignoradas
 *  pela cadeia else if). A versão final.c corrige esse problema.
 * ======================================================================== */



/*****************************************************************************
 *                                                                           *
 *                  PARTE 5 — PROJETO FINAL: CAIXA ELETRÔNICO                  *
 *                                                                           *
 *****************************************************************************/

/****************************************************************************
 *  PROGRAMA: Sistema Simplificado para Caixa Eletrônico
 * =========================================================================
 *
 *  DESCRIÇÃO GERAL:
 *    Simula o funcionamento de um caixa eletrônico que gerencia cédulas
 *    de R$200, R$100, R$50, R$20, R$10, R$5 e R$2.
 *    O sistema permite realizar saques utilizando o menor número de
 *    cédulas possível (algoritmo guloso), verificar o estoque de cédulas
 *    e encerrar o programa.
 *
 *  FUNCIONALIDADES:
 *    1. Configuração inicial da quantidade de cada cédula
 *    2. Menu interativo com 3 opções (Saque / Status / Finalizar)
 *    3. Saque com algoritmo guloso (maior cédula primeiro)
 *    4. Verificação de disponibilidade antes de confirmar o saque
 *    5. Consulta do estoque atual de cédulas
 *
 *  CONCEITOS DE C UTILIZADOS:
 *    - Função void com parâmetros (imprimir)
 *    - Variáveis inteiras (int)
 *    - Entrada/saída com printf() e scanf()
 *    - Laço de repetição while
 *    - Estruturas condicionais if / else if
 *    - Operadores aritméticos e relacionais
 *    - Cópia de variáveis para simulação (backtracking simples)
 *
 *    
 *  :  
 ****************************************************************************/

#include <stdio.h>   /* Biblioteca padrão de entrada/saída (printf, scanf) */

/* ========================================================================
 *  FUNÇÃO AUXILIAR: imprimir
 * ========================================================================
 *  Objetivo: Imprime um caractere repetido N vezes na tela.
 *            Usada para criar bordas visuais no terminal (ex: "########").
 *
 *  Parâmetros:
 *    - caractere : o caractere a ser repetido (ex: '#')
 *    - quantidade : quantas vezes o caractere será impresso
 *
 *  Conceito: Função void — não retorna valor, apenas executa uma ação.
 *            Usa um laço while para repetir a impressão.
 * ======================================================================== */
void imprimir(char caractere, int quantidade) {
    int a;              /* Variável contadora do laço */
    a = 0;              /* Inicializa o contador em zero */

    /* Enquanto 'a' for menor que 'quantidade', imprime o caractere */
    while (a < quantidade) {
        printf("%c", caractere);   /* %c = máscara para caractere (char) */
        a = a + 1;                 /* Incrementa o contador */
    }
}

/* ========================================================================
 *  FUNÇÃO PRINCIPAL: main
 * ========================================================================
 *  Ponto de entrada do programa. Controla todo o fluxo do caixa eletrônico.
 * ======================================================================== */
int main() {

    /* === DECLARAÇÃO DE VARIÁVEIS === */

    /* Quantidade real de cada cédula disponível no caixa */
    int q200, q100, q50, q20, q10, q5, q2;

    /* Valor do saque solicitado pelo usuário */
    int Saque_Solicitado;

    /* Cópias temporárias das quantidades de cédulas.
     * São usadas para SIMULAR o saque antes de confirmar.
     * Se o saque for possível, as originais são atualizadas;
     * caso contrário, as originais permanecem intactas. */
    int temp_q200, temp_q100, temp_q50, temp_q20, temp_q10, temp_q5, temp_q2;

    /* Número de cédulas de cada valor que serão entregues no saque */
    int n200, n100, n50, n20, n10, n5, n2;

    /* Controle do menu: 1 = Saque, 2 = Status, 3 = Encerrar */
    int status;

    /* ====================================================================
     *  BLOCO 1: CONFIGURAÇÃO INICIAL DAS CÉDULAS
     * ====================================================================
     *  O operador do caixa informa quantas cédulas de cada valor estão
     *  disponíveis no caixa eletrônico. Usa scanf com %i (inteiro).
     * ==================================================================== */
    imprimir('#', 25);   /* Borda visual superior */
    printf("\nCAIXA ELETRONICO");

    printf("\n Quantidade de Cedulas de R$200 : ");
    scanf("%i", &q200);     /* & = operador de endereço (obrigatório no scanf) */

    printf("Quantidade de Cedulas de R$100 : ");
    scanf("%i", &q100);

    printf("Quantidade de Cedulas de R$50 : ");
    scanf("%i", &q50);

    printf("Quantidade de Cedulas de R$20 : ");
    scanf("%i", &q20);

    printf("Quantidade de Cedulas de R$10 : ");
    scanf("%i", &q10);

    printf("Quantidade de Cedulas de R$5 : ");
    scanf("%i", &q5);

    printf("Quantidade de Cedulas de R$2 : ");
    scanf("%i", &q2);

    imprimir('#', 25);   /* Borda visual inferior */

    /* ====================================================================
     *  BLOCO 2: LOOP PRINCIPAL DO PROGRAMA (MENU)
     * ====================================================================
     *  O programa permanece em execução enquanto o status for diferente
     *  de 3 (Encerrar). O while verifica a condição ANTES de cada iteração.
     *
     *  NOTA: A variável 'status' não foi inicializada explicitamente.
     *  Em C, variáveis locais não inicializadas contêm "lixo de memória".
     *  Aqui funciona porque o primeiro scanf já atribui um valor antes
     *  da próxima verificação do while.
     * ==================================================================== */
    while (status != 3) {

        /* Exibe o menu de opções */
        imprimir('#', 25);
        printf("\nMenu de opções");
        printf("\n1 = REALIZAR SAQUE");
        printf("\n2 = VERIFICAR A QUANTIDADE DE CEDULAS");
        printf("\n3 = FINALIZAR PROGRAMA\n");
        scanf("%i", &status);    /* Lê a opção escolhida pelo usuário */

        /* ==============================================================
         *  OPÇÃO 1: REALIZAR SAQUE
         * ==============================================================
         *  Algoritmo Guloso: Tenta usar a maior cédula possível primeiro,
         *  depois vai descendo para as menores. Isso garante o menor
         *  número de cédulas entregues.
         *
         *  Estratégia de segurança:
         *  1. Copia as quantidades para variáveis temporárias
         *  2. Tenta realizar o saque nas cópias
         *  3. Se sobrar valor 0 → saque possível → atualiza originais
         *  4. Se sobrar valor > 0 → saque impossível → originais intactas
         * ============================================================== */
        if (status == 1) {
            imprimir('#', 25);
            printf("\nIndique o valor do saque a ser: ");
            scanf("%i", &Saque_Solicitado);

            /* --- Cópia de segurança das quantidades originais --- */
            temp_q200 = q200;
            temp_q100 = q100;
            temp_q50  = q50;
            temp_q20  = q20;
            temp_q10  = q10;
            temp_q5   = q5;
            temp_q2   = q2;

            /* --- Tentativa de saque: Cédula de R$200 --- */
            n200 = 0;   /* Zera o contador de cédulas a entregar */
            while (Saque_Solicitado >= 200 && temp_q200 > 0) {
                /* Enquanto o valor restante comportar uma cédula de 200
                 * E ainda houver cédulas disponíveis... */
                Saque_Solicitado = Saque_Solicitado - 200;  /* Subtrai do valor */
                temp_q200 = temp_q200 - 1;                  /* Usa uma cédula */
                n200 = n200 + 1;                            /* Conta a cédula */
            }

            /* --- Tentativa de saque: Cédula de R$100 --- */
            n100 = 0;
            while (Saque_Solicitado >= 100 && temp_q100 > 0) {
                Saque_Solicitado = Saque_Solicitado - 100;
                temp_q100 = temp_q100 - 1;
                n100 = n100 + 1;
            }

            /* --- Tentativa de saque: Cédula de R$50 --- */
            n50 = 0;
            while (Saque_Solicitado >= 50 && temp_q50 > 0) {
                Saque_Solicitado = Saque_Solicitado - 50;
                temp_q50 = temp_q50 - 1;
                n50 = n50 + 1;
            }

            /* --- Tentativa de saque: Cédula de R$20 --- */
            n20 = 0;
            while (Saque_Solicitado >= 20 && temp_q20 > 0) {
                Saque_Solicitado = Saque_Solicitado - 20;
                temp_q20 = temp_q20 - 1;
                n20 = n20 + 1;
            }

            /* --- Tentativa de saque: Cédula de R$10 --- */
            n10 = 0;
            while (Saque_Solicitado >= 10 && temp_q10 > 0) {
                Saque_Solicitado = Saque_Solicitado - 10;
                temp_q10 = temp_q10 - 1;
                n10 = n10 + 1;
            }

            /* --- Tentativa de saque: Cédula de R$5 --- */
            n5 = 0;
            while (Saque_Solicitado >= 5 && temp_q5 > 0) {
                Saque_Solicitado = Saque_Solicitado - 5;
                temp_q5 = temp_q5 - 1;
                n5 = n5 + 1;
            }

            /* --- Tentativa de saque: Cédula de R$2 --- */
            n2 = 0;
            while (Saque_Solicitado >= 2 && temp_q2 > 0) {
                Saque_Solicitado = Saque_Solicitado - 2;
                temp_q2 = temp_q2 - 1;
                n2 = n2 + 1;
            }

            /* ==============================================================
             *  VERIFICAÇÃO DO RESULTADO DO SAQUE
             * ==============================================================
             *  Se Saque_Solicitado chegou a 0, significa que o valor foi
             *  completamente coberto pelas cédulas disponíveis.
             *  Se ficou > 0, não foi possível completar o saque.
             * ============================================================== */
            if (Saque_Solicitado == 0) {
                printf("Saque aprovado, retire essas notas: ");

                /* Atualiza as quantidades ORIGINAIS (saque confirmado) */
                q200 = q200 - n200;
                q100 = q100 - n100;
                q50  = q50  - n50;
                q20  = q20  - n20;
                q10  = q10  - n10;
                q5   = q5   - n5;
                q2   = q2   - n2;

                /* Exibe apenas as cédulas que foram utilizadas.
                 * O if > 0 evita imprimir "Cedulas de R$X: 0" */
                if (n200 > 0) {
                    printf("\nCedulas de R$200: %i", n200);
                }
                if (n100 > 0) {
                    printf("\nCedulas de R$100: %i", n100);
                }
                if (n50 > 0) {
                    printf("\nCedulas de R$50: %i", n50);
                }
                if (n20 > 0) {
                    printf("\nCedulas de R$20: %i", n20);
                }
                if (n10 > 0) {
                    printf("\nCedulas de R$10: %i", n10);
                }
                if (n5 > 0) {
                    printf("\nCedulas de R$5: %i", n5);
                }
                if (n2 > 0) {
                    printf("\nCedulas de R$2: %i\n", n2);
                }

            /* Se sobrou valor, o saque é impossível */
            } else if (Saque_Solicitado != 0) {
                printf("Valor indisponível para saque");
            }

        /* ==============================================================
         *  OPÇÃO 2: VERIFICAR ESTOQUE DE CÉDULAS
         * ==============================================================
         *  Exibe a quantidade atual de cada cédula no caixa.
         * ============================================================== */
        } else if (status == 2) {
            imprimir('#', 25);
            printf("\nQUANTIDADE DE CEDULAS DISPONIVEIS:");
            printf("\nCedulas de R$200: %i", q200);
            printf("\nCedulas de R$100: %i", q100);
            printf("\nCedulas de R$50: %i", q50);
            printf("\nCedulas de R$20: %i", q20);
            printf("\nCedulas de R$10: %i", q10);
            printf("\nCedulas de R$5: %i", q5);
            printf("\nCedulas de R$2: %i\n", q2);
        }
    }

    /* ====================================================================
     *  BLOCO 3: ENCERRAMENTO DO PROGRAMA
     * ====================================================================
     *  Quando status == 3, o while termina e o programa chega aqui.
     * ==================================================================== */
    imprimir('#', 25);
    printf("\nENCERRANDO PROGRAMA...");

    return 0;   /* Retorna 0 ao sistema operacional (execução bem-sucedida) */
}



/*****************************************************************************
 *                                                                           *
 *                 PARTE 6 — REFERÊNCIA RÁPIDA DA LINGUAGEM C                  *
 *                                                                           *
 *****************************************************************************/

/****************************************************************************
 *  PROGRAMA: Compilação de Exercícios para Revisão de Provas
 * =========================================================================
 *
 *  DESCRIÇÃO GERAL:
 *    Arquivo de estudo que reúne os 10 exercícios fundamentais de C
 *    com anotações melhoradas e uma seção de referência rápida ao final.
 *    Ideal para revisão antes de provas e avaliações.
 *
 *  LISTA DE EXERCÍCIOS:
 *    1. Verificação de Idade (if/else)
 *    2. Média Escolar (if/else if/else, float)
 *    3. Tarifa de Estacionamento (cálculo aritmético)
 *    4. Par ou Ímpar (operador %)
 *    5. Jogo de Adivinhação (rand, srand, while)
 *    6. Tabela de Multiplicação (while, contador)
 *    7. Ordenação de 3 Valores (if aninhado)
 *    8. Contador Positivo/Negativo/Zero (while fixo, contadores)
 *    9. Fatorial (multiplicação acumulativa)
 *   10. Salário por Hora (condicionais com cálculos)
 *
 *  CONCEITOS DE C COBERTOS:
 *    - Tipos: int, float, char (array)
 *    - E/S: printf(), scanf() com %i, %f, %s, %c
 *    - Operadores: +, -, *, /, %, ==, !=, >, <, >=, <=, &&, ||
 *    - Controle: if, else, else if, while
 *    - Funções: main() com retorno int
 *    - Bibliotecas: stdio.h, stdlib.h, time.h
 *    - Aleatórios: rand(), srand(), time(NULL)
 *
 *   
 *
 *  NOTA: Este arquivo é uma COMPILAÇÃO para estudo. Cada exercício
 *        é auto-contido com seu próprio #include e main().
 *        Para compilar individualmente, copie apenas um exercício.
 ****************************************************************************/

/* ========================================================================
 *  A estrutura deste arquivo de revisão segue o padrão:
 *
 *  Para cada exercício:
 *    1. Cabeçalho com descrição e conceitos
 *    2. Código completo com comentários detalhados
 *
 *  Ao final do arquivo:
 *    - Seção de REFERÊNCIA RÁPIDA com todas as sintaxes importantes
 *
 *  Os códigos são idênticos aos originais (semana_7.c), porém com
 *  comentários aprimorados para facilitar a revisão.
 * ======================================================================== */

/* NOTA: Os exercícios individuais estão documentados em detalhes
 * nos arquivos semana_7_comentado.c e semana_8_comentado.c.
 * Este arquivo serve como compilação de referência rápida.
 * Consulte os arquivos individuais para explicações completas. */

/* ========================================================================
 *                    SEÇÃO DE REFERÊNCIA RÁPIDA
 * ========================================================================
 *  Resumo das sintaxes e conceitos mais importantes da linguagem C,
 *  organizados por tema para consulta rápida durante os estudos.
 * ======================================================================== */

/*
 * === MÁSCARAS DE FORMATAÇÃO (printf / scanf) ===
 *
 *  %i ou %d  → inteiro (int)            Ex: scanf("%i", &idade);
 *  %f        → ponto flutuante (float)  Ex: scanf("%f", &nota);
 *  %c        → caractere (char)         Ex: scanf("%c", &letra);
 *  %s        → string (char[])          Ex: scanf("%s", nome);
 *  %.2f      → float com 2 casas        Ex: printf("%.2f", valor);
 *
 *  ATENÇÃO: Use & antes da variável no scanf, EXCETO para strings!
 *
 *
 * === ESTRUTURAS CONDICIONAIS ===
 *
 *  Básica:
 *    if (condição) { ... }
 *    else { ... }
 *
 *  Encadeada:
 *    if (cond1) { ... }
 *    else if (cond2) { ... }
 *    else { ... }
 *
 *
 * === OPERADORES RELACIONAIS ===
 *
 *  ==  igual          !=  diferente
 *  >   maior          <   menor
 *  >=  maior ou igual <=  menor ou igual
 *
 *  CUIDADO: == é comparação, = é atribuição!
 *
 *
 * === OPERADORES LÓGICOS ===
 *
 *  &&  E (AND)  — todas verdadeiras
 *  ||  OU (OR)  — pelo menos uma verdadeira
 *  !   NÃO (NOT) — inverte o valor lógico
 *
 *
 * === OPERADORES ARITMÉTICOS ===
 *
 *  +  adição     -  subtração    *  multiplicação
 *  /  divisão    %  módulo (resto da divisão)
 *
 *  ATENÇÃO: 5/2 = 2 (divisão inteira!). Use float para decimais.
 *  Operador % só funciona com inteiros. Ex: 7 % 2 = 1
 *
 *
 * === LAÇOS DE REPETIÇÃO ===
 *
 *  while: verifica ANTES de executar
 *    while (condição) { ... }
 *
 *  do-while: executa PRIMEIRO, verifica DEPOIS
 *    do { ... } while (condição);
 *
 *  for: loop com inicialização, condição e incremento
 *    for (int i = 0; i < 10; i++) { ... }
 *
 *
 * === NÚMEROS ALEATÓRIOS ===
 *
 *  #include <stdlib.h>
 *  #include <time.h>
 *
 *  srand(time(NULL));            // Inicializa a semente (1 vez)
 *  numero = rand() % 100 + 1;   // Gera de 1 a 100
 *
 *
 * === CARACTERES ESPECIAIS ===
 *
 *  \n  nova linha     \t  tabulação
 *  \"  aspas duplas   \\  barra invertida
 *
 *
 * === DICAS IMPORTANTES ===
 *
 *  1. Sempre inicialize variáveis (contadores = 0, multiplicadores = 1)
 *  2. Use nomes descritivos (idade, nota, salario — não a, b, x)
 *  3. Comente a lógica complexa
 *  4. Trate divisão por zero e entradas inválidas
 *  5. Strings não precisam de & no scanf
 */


