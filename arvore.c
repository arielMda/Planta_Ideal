#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

void inserir(Arvore **arv, int valor){
    if (!(*arv)){ // Se o nó é folha
        Arvore *novo = (Arvore*) malloc(sizeof(Arvore));
        if (novo){
            novo->esq = NULL;
            novo->dir = NULL;
            novo->informacoes.valor = valor;
            (*arv) = novo;
            printf("\nNó inserido na árvore!\n");
        }
        else
            printf("\nErro ao alocar memória!\n");
    }
    else{
        if (valor < (*arv)->informacoes.valor)
            inserir(&(*arv)->esq, valor);
        else
            inserir(&(*arv)->dir, valor);
    }
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
            busca(arv->esq, valor);
        else
            busca(arv->dir, valor);
    }
}

void remover(Arvore **arv, Arvore **ant, int valor){
    if (!(*arv) || (*arv)->informacoes.valor == valor){
        if (!(*arv))
            printf("\nElemento não existe na árvore!\n");
        else{

            Arvore *remover;
            remover = *arv;

            if (!(*arv)->esq && !(*arv)->dir){
                *arv = NULL;
            }

            else if (((*arv)->esq && !(*arv)->dir) || (!(*arv)->esq && (*arv)->dir)){
                if ((*arv)->esq)
                    *arv = (*arv)->esq;
                else
                    *arv = (*arv)->dir;
            }

            else{
                Arvore *maior_esq = achaMaiorEsq((*arv)->esq, (*arv)->esq);
                if (maior_esq == (*arv)->esq)
                    maior_esq->dir = (*arv)->dir;
                

                else{
                    Arvore *ant_maior_esq = anteriorMaior(maior_esq, (*arv)->esq);
                    if (maior_esq->esq)
                        ant_maior_esq->dir = maior_esq->esq;
                    
                    maior_esq->esq = (*arv)->esq;
                    maior_esq->dir = (*arv)->dir;
                }
                *arv = maior_esq;
            }

            printf("\nO nó com valor %d foi removido!\n", remover->informacoes.valor);
            free(remover);
        }
    }
    else{
        if (valor < (*arv)->informacoes.valor)
            remover(&(*arv)->esq, arv, valor);
        else
            remover(&(*arv)->dir, arv, valor);
    }
}

Arvore* achaMaiorEsq(Arvore *arv, Arvore *maior){
    if (!arv)
        return maior;
    
    maior = arv;
    return achaMaiorEsq(arv->dir, maior);
}

Arvore* anteriorMaior(Arvore *maior, Arvore *ant){
    if (ant->dir == maior)
        return ant;
    
    return anteriorMaior(maior, ant->dir);
    
}

void imprimirArvore(Arvore *arv){
    if (!arv)
        return;
    
    printf("Valor do nó: %d, Endereço: %p", arv->informacoes.valor, arv);
    imprimirArvore(arv->esq);
    imprimirArvore(arv->dir);
}