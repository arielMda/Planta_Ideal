#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef struct{
    int valor;
}Info;

typedef struct arv{
    Info informacoes;
    struct arv *esq;
    struct arv *dir;
}Arvore;


#endif // ARVORE_H_INCLUDED
