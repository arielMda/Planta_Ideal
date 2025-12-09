#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"
#include "lista_perguntas.h"

// Função para inserir novos nós na árvore
Arvore* inserir(char pergunta[], int valor){
    Arvore *novo = (Arvore*) malloc(sizeof(Arvore));
    novo->informacoes.valor = valor;
    novo->informacoes.pergunta = pergunta;
    novo->nao = NULL;
    novo->sim = NULL;
    return novo;
}

void criarArvore(Arvore **arv){
    char **lista_perguntas;
    int num_perguntas = 0;
    lerArquivoPerguntas(NOME_ARQUIVO, &lista_perguntas, &num_perguntas);

    // Criação da árvore de perguntas
    Arvore *p1 = inserir(lista_perguntas[0], 0);
    Arvore *p2 = inserir(lista_perguntas[1], 0);
    Arvore *p3 = inserir(lista_perguntas[2], 0);
    Arvore *p4 = inserir(lista_perguntas[3], 0);
    Arvore *p5 = inserir(lista_perguntas[4], 0);
    Arvore *p6 = inserir(lista_perguntas[5], 0);
    Arvore *p7 = inserir(lista_perguntas[6], 0);
    Arvore *p8 = inserir(lista_perguntas[7], 0);
    Arvore *p9 = inserir(lista_perguntas[8], 0);
    Arvore *p10 = inserir(lista_perguntas[9], 0);
    Arvore *p11 = inserir(lista_perguntas[10], 0);
    Arvore *p12 = inserir(lista_perguntas[11], 0);
    Arvore *p13 = inserir(lista_perguntas[12], 0);
    Arvore *p14 = inserir(lista_perguntas[13], 0);
    Arvore *p15 = inserir(lista_perguntas[14], 0);
    Arvore *p16 = inserir(lista_perguntas[15], 0);
    Arvore *p17 = inserir(lista_perguntas[16], 0);
    Arvore *p18 = inserir(lista_perguntas[17], 0);
    Arvore *p19 = inserir(lista_perguntas[18], 0);
    Arvore *p20 = inserir(lista_perguntas[19], 0);
    Arvore *p21 = inserir(lista_perguntas[20], 0);
    Arvore *p22 = inserir(lista_perguntas[21], 0);
    Arvore *p23 = inserir(lista_perguntas[22], 0);
    Arvore *p24 = inserir(lista_perguntas[23], 0);
    Arvore *p25 = inserir(lista_perguntas[24], 0);
    Arvore *p26 = inserir(lista_perguntas[25], 0);
    Arvore *p27 = inserir(lista_perguntas[26], 0);
    Arvore *p28 = inserir(lista_perguntas[27], 0);
    Arvore *p29 = inserir(lista_perguntas[28], 0);
    Arvore *p30 = inserir(lista_perguntas[29], 0);
    Arvore *p31 = inserir(lista_perguntas[30], 0);

    // Criando as respostas
    Arvore *r1 = inserir(NULL, 1);
    Arvore *r2 = inserir(NULL, 2);
    Arvore *r3 = inserir(NULL, 3);
    Arvore *r4 = inserir(NULL, 4);
    Arvore *r5 = inserir(NULL, 5);
    Arvore *r6 = inserir(NULL, 6);
    Arvore *r7 = inserir(NULL, 7);
    Arvore *r8 = inserir(NULL, 8);
    Arvore *r9 = inserir(NULL, 8);
    Arvore *r10 = inserir(NULL, 10);
    Arvore *r11 = inserir(NULL, 11);
    Arvore *r12 = inserir(NULL, 12);
    Arvore *r13 = inserir(NULL, 13);
    Arvore *r14 = inserir(NULL, 14);
    Arvore *r15 = inserir(NULL, 15);
    Arvore *r16 = inserir(NULL, 16);
    Arvore *r17 = inserir(NULL, 17);
    Arvore *r18 = inserir(NULL, 18);
    Arvore *r19 = inserir(NULL, 19);
    Arvore *r20 = inserir(NULL, 20);
    Arvore *r21 = inserir(NULL, 21);
    Arvore *r22 = inserir(NULL, 22);
    Arvore *r23 = inserir(NULL, 23);
    Arvore *r24 = inserir(NULL, 24);
    Arvore *r25 = inserir(NULL, 25);
    Arvore *r26 = inserir(NULL, 26);
    Arvore *r27 = inserir(NULL, 27);
    Arvore *r28 = inserir(NULL, 28);
    Arvore *r29 = inserir(NULL, 29);
    Arvore *r30 = inserir(NULL, 30);
    Arvore *r31 = inserir(NULL, 31);
    Arvore *r32 = inserir(NULL, 32);

    // Ajustando os ponteiros da árvore de decisão
    p1->sim = p2;
    p1->nao = p3;
    p2->sim = p4;
    p2->nao = p5;
    p3->sim = p6;
    p3->nao = p7;
    p4->sim = p8;
    p4->nao = p9;
    p5->sim = p10;
    p5->nao = p11;
    p6->sim = p12;
    p6->nao = p13;
    p7->sim = p14;
    p7->nao = p15;
    p8->sim = p16;
    p8->nao = p17;
    p9->sim = p18;
    p9->nao = p19;
    p10->sim = p20;
    p10->nao = p21;
    p11->sim = p22;
    p11->nao = p23;
    p12->sim = p24;
    p12->nao = p25;
    p13->sim = p26;
    p13->nao = p27;
    p14->sim = p28;
    p14->nao = p29;
    p15->sim = p30;
    p15->nao = p31;

    // Ajustando os ponteiros para as respostas
    p16->sim = r1;
    p16->nao = r2;
    p17->sim = r3;
    p17->nao = r4;
    p18->sim = r5;
    p18->nao = r6;
    p19->sim = r7;
    p19->nao = r8;
    p20->sim = r9;
    p20->nao = r10;
    p21->sim = r11;
    p21->nao = r12;
    p22->sim = r13;
    p22->nao = r14;
    p23->sim = r15;
    p23->nao = r16;
    p24->sim = r17;
    p24->nao = r18;
    p25->sim = r19;
    p25->nao = r20;
    p26->sim = r21;
    p26->nao = r22;
    p27->sim = r23;
    p27->nao = r24;
    p28->sim = r25;
    p28->nao = r26;
    p29->sim = r27;
    p29->nao = r28;
    p30->sim = r29;
    p30->nao = r30;
    p31->sim = r31;
    p31->nao = r32;
    *arv = p1;
    salva_arvore(*arv); // Salva a árvore para o arquivo
}

/*
    Função principal do programa, aqui é feita as perguntas pro usuário e a navegação da árvore
    É uma função recursiva
    Primeiramente verifica se o valor do nó é diferente de 0, se sim é uma resposta, e carrega ela em tempo real
    do arquivo de respostas, por meio da função lerArquivoRespostas() que retorna um ponteiro para char (string).

*/
void plantaIdeal(Arvore *arv){
    char resp;
    if (arv->informacoes.valor != 0){
        arv->informacoes.pergunta = lerArquivoRespostas(ARQUIVO_RESPOSTAS, arv->informacoes.valor);
        printf("\n");
        printf("\t\t**********************\n");
        printf("\t\t* PLANTA RECOMENDADA *\n");
        printf("\t\t**********************\n\n");
        printf("%s\n", arv->informacoes.pergunta);
        return;
    }

    // O programa verifica se o usuário digita sim ou não
    do{
        printf("%s [S/N] ", arv->informacoes.pergunta);
        scanf(" %c", &resp);
        resp = toupper(resp);
        switch (resp)
        {
            case 'S':
                plantaIdeal(arv->sim);
                break;

            case 'N':
                plantaIdeal(arv->nao);
                break;

            default:
                printf("\nOpção inválida! Digite sim (S) ou não (N)!\n");
                break;
        }
    }while(resp != 'S' && resp != 'N');
    fflush(stdin);
    return;
}

// Função que lê o arquivo com as perguntas para guardar numa lista de strings
// Para poder armazenar nos nós de pergunta
void lerArquivoPerguntas(const char nome_arq[], char ***lista_perguntas, int *num_perguntas){
    char buffer[70];
    FILE *arquivo = fopen(nome_arq, "r"); // Abre o arquivo
    int i = 0;

    if (!arquivo) {
        printf("Ocorreu um erro ao abrir o arquivo, verifique se ele existe ou está na mesma pasta do programa.\n");
        return;
    }

    while (fgets(buffer, sizeof(buffer), arquivo) != NULL) {
        (*num_perguntas)++;
        if (*num_perguntas == 1)
            *lista_perguntas = (char**) malloc(sizeof(char*)); // Aloca memória para a lista inicialmente usando malloc
        else
            // Aloca memória todas as outras vezes usando realloc
            *lista_perguntas = realloc(*lista_perguntas, (*num_perguntas) * sizeof(char*));

        buffer[strcspn(buffer, "\n")] = '\0';
        int tam_str = strlen(buffer);
        (*lista_perguntas)[i] = (char*) malloc((tam_str + 1) * sizeof(char)); // Aloca memória para o tamanho exato da string
        strcpy((*lista_perguntas)[i], buffer);
        i++;
    }

    fclose(arquivo);
}

// Função para carregar uma descrição de uma planta em tempo real
char* lerArquivoRespostas(const char nome_arq[], int valor_index){
    char buffer[120];
    char *desc = NULL;
    int tam_desc = 0;
    FILE *arquivo = fopen(nome_arq, "r");

    if (!arquivo){
        printf("Não foi possível abrir o arquivo!\n");
        return NULL;
    }
    /*
        Loop principal:
        Lê uma linha com fgets e verifica se ela corresponde com o valor do nó resposta,
        As linhas estão desta forma: #(índice)
        Se corresponde aloca memória para a descrição e vai lendo as próximas linhas e
        concatenando elas na variável desc até chegar na proxima linha com indice
    */
    while(fgets(buffer, sizeof(buffer), arquivo) != NULL){
        buffer[strcspn(buffer, "\n")] = '\0';
        if (buffer[0] == '#'){
            int char_index = str_em_numero(buffer);
            if (char_index == valor_index){
                desc = malloc(1);
                desc[0] = '\0';
                while(fgets(buffer, sizeof(buffer), arquivo) != NULL){
                    if (buffer[0] == '#')
                        break;
                    int tam_str = strlen(buffer);
                    tam_desc += tam_str + 1;
                    desc = realloc(desc, tam_desc * sizeof(char));
                    strcat(desc, buffer);
                }
                fclose(arquivo);
                return desc;
            }
        }
    }
    fclose(arquivo);
    return NULL;
}

int str_em_numero(char string[]){
	int mult = 1, tam_str = strlen(string), valor_final = 0, i;
	for (i = tam_str - 1; i >= 0; i--){
		if (string[i] < '0' || string[i] > '9')
			continue;
		else{
			valor_final += (int) (string[i] - '0') * mult;
			mult *= 10;
		}
	}
	return valor_final;
}

void imprimirArvore(Arvore *arv){
    if (!arv){
        printf("Nó vazio!\n");
        return;
    }

    printf("Pergunta: %s, Endereço: %p\n", arv->informacoes.pergunta, arv);
    imprimirArvore(arv->sim);
    imprimirArvore(arv->nao);
}

void salva_codigo(Arvore *r, FILE *arquivo);

void salva_arvore(Arvore *r) {

    char nome_arquivo[30];
    FILE *arquivo;

    if (r == NULL) {

        printf("\nNao e possivel salvar uma arvore vazia!\n");
        getchar();
        return;
    }

    printf("\nNomeie o arquivo: ");
    scanf("%s", nome_arquivo);
    strcat(nome_arquivo, ".txt");
    arquivo = fopen(nome_arquivo, "w");

    if (arquivo == NULL) {
        printf("\nErro ao criar arquivo!\n");
        getchar();
        return;
    }

    salva_codigo(r, arquivo);
    fclose(arquivo);
    printf("\nArvore salva com sucesso!\n");
    getchar();


}


void salva_codigo(Arvore *r, FILE *arquivo) {

    if (r == NULL) {
        fprintf(arquivo, "#\n");   // marca nó nulo
        return;
    }
    // salva pergunta e valor do nó
    fprintf(arquivo, "[V] %d [P] %s\n", r->informacoes.valor, r->informacoes.pergunta);

    // salva ramificação "sim"
    fprintf(arquivo, "[S]\n");
    salva_codigo(r->sim, arquivo);

    // salva ramificação "nao"
    fprintf(arquivo, "[N]\n");
    salva_codigo(r->nao, arquivo);
}

Arvore* carrega_codigo(FILE *arquivo) {
    char linha[300];

    // tenta ler a próxima linha válida
    while (fgets(linha, sizeof(linha), arquivo)) {
        // remove newline
        linha[strcspn(linha, "\r\n")] = 0;

        // ignora linhas vazias
        if (linha[0] == '\0')
            continue;

        // nó nulo
        if (linha[0] == '#')
            return NULL;

        // linha deve ser: [V] valor  [P] pergunta
        if (strncmp(linha, "[V]", 3) == 0) {

            Arvore *no = malloc(sizeof(Arvore));
            if (!no) return NULL;

            no->sim = NULL;
            no->nao = NULL;

            // lê valor e pergunta
            int valor;
            char pergunta[200];

            char *ptrP = strstr(linha, "[P]");
            if (!ptrP) {
                printf("Erro no formato do arquivo (faltou [P])\n");
                free(no);
                return NULL;
            }

            sscanf(linha, "[V] %d", &valor);

            // pega texto após [P]
            strcpy(pergunta, ptrP + 3);

            // cria ponteiro auxiliar para remover espaços
            char *ptrPerg = pergunta;
            while (*ptrPerg == ' ')
                ptrPerg++;

            no->informacoes.valor = valor;

            // **ALOCAÇÃO NECESSÁRIA**
            no->informacoes.pergunta = malloc(strlen(ptrPerg) + 1);
            if (!no->informacoes.pergunta) {
                free(no);
                return NULL;
            }

            // copia perguntas
            strcpy(no->informacoes.pergunta, ptrPerg);

            // Ler linha [S]
            fgets(linha, sizeof(linha), arquivo);

            // Ramo SIM
            no->sim = carrega_codigo(arquivo);

            // Ler linha [N]
            fgets(linha, sizeof(linha), arquivo);

            // Ramo NAO
            no->nao = carrega_codigo(arquivo);

            return no;
        }
    }

    return NULL;  // fim do arquivo inesperado
}

void carrega_arvore(Arvore **r) {
    char nome_arquivo[] = "arvore_plantas.txt";
    FILE *arquivo;

    arquivo = fopen(nome_arquivo, "r");
    if (!arquivo) {
        printf("Arquivo não encontrado!\n");
        return;
    }

    *r = carrega_codigo(arquivo);

    fclose(arquivo);
    printf("\nÁrvore carregada com sucesso!\n");
}
