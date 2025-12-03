#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"
#include "lista_perguntas.h"

Arvore* inserir(char pergunta[]){
    Arvore *novo = (Arvore*) malloc(sizeof(Arvore));
    novo->informacoes.pergunta = pergunta;
    novo->nao = NULL;
    novo->sim = NULL;
    return novo;
}
printf
void criarArvore(Arvore **arv){
    char **lista_perguntas;
    char **lista_respostas;
    int num_perguntas = 0;
    int num_respostas = 0;
    lerArquivoPerguntas(NOME_ARQUIVO, &lista_perguntas, &num_perguntas);
    lerArquivoPerguntas(ARQUIVO_RESPOSTAS, &lista_respostas, &num_respostas);
    Arvore *p1 = inserir(lista_perguntas[0]);
    Arvore *p2 = inserir(lista_perguntas[1]);
    Arvore *p3 = inserir(lista_perguntas[2]);
    Arvore *p4 = inserir(lista_perguntas[3]);
    Arvore *p5 = inserir(lista_perguntas[4]);
    Arvore *p6 = inserir(lista_perguntas[5]);
    Arvore *p7 = inserir(lista_perguntas[6]);
    Arvore *p8 = inserir(lista_perguntas[7]);
    Arvore *p9 = inserir(lista_perguntas[8]);
    Arvore *p10 = inserir(lista_perguntas[9]);
    Arvore *p11 = inserir(lista_perguntas[10]);
    Arvore *p12 = inserir(lista_perguntas[11]);
    Arvore *p13 = inserir(lista_perguntas[12]);
    Arvore *p14 = inserir(lista_perguntas[13]);
    Arvore *p15 = inserir(lista_perguntas[14]);
    Arvore *p16 = inserir(lista_perguntas[15]);
    Arvore *p17 = inserir(lista_perguntas[16]);
    Arvore *p18 = inserir(lista_perguntas[17]);
    Arvore *p19 = inserir(lista_perguntas[18]);
    Arvore *p20 = inserir(lista_perguntas[19]);
    Arvore *p21 = inserir(lista_perguntas[20]);
    Arvore *p22 = inserir(lista_perguntas[21]);
    Arvore *p23 = inserir(lista_perguntas[22]);
    Arvore *p24 = inserir(lista_perguntas[23]);
    Arvore *p25 = inserir(lista_perguntas[24]);
    Arvore *p26 = inserir(lista_perguntas[25]);
    Arvore *p27 = inserir(lista_perguntas[26]);
    Arvore *p28 = inserir(lista_perguntas[27]);
    Arvore *p29 = inserir(lista_perguntas[28]);
    Arvore *p30 = inserir(lista_perguntas[29]);
    Arvore *p31 = inserir(lista_perguntas[30]);

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
    *arv = p1;
}

void busca(Arvore *arv, int valor){
    if (!arv || arv->informacoes.valor == valor){
        if (!arv)
            printf("\nElemento não existe dentro da árvore!\n");
        else
            printf("Elemento com valor de %d foi achado! No endereço: %p\n", arv->informacoes.valor, arv);
    }
    else{
        if (valor < arv->informacoes.valor)
            busca(arv->sim, valor);
        else
            busca(arv->nao, valor);
    }
}

void lerArquivoPerguntas(const char nome_arq[], char ***lista_perguntas, int *num_perguntas){
    char buffer[100];
    FILE *arquivo = fopen(nome_arq, "r");
    int i = 0;

    if (!arquivo) {
        printf("Ocorreu um erro ao abrir o arquivo, verifique se ele existe ou está na mesma pasta do programa.\n");
        return;
    }

    while (fgets(buffer, sizeof(buffer), arquivo) != NULL) {
        (*num_perguntas)++;
        if (*num_perguntas == 1)
            *lista_perguntas = (char**) malloc(sizeof(char*));
        else
            *lista_perguntas = realloc(*lista_perguntas, (*num_perguntas) * sizeof(char*));
        
        buffer[strcspn(buffer, "\n")] = '\0';
        int tam_str = strlen(buffer);
        (*lista_perguntas)[i] = (char*) malloc((tam_str + 1) * sizeof(char));
        strcpy((*lista_perguntas)[i], buffer);
        i++;
    }

    fclose(arquivo);
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
