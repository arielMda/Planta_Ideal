#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef struct{
    int valor;
    char *pergunta;
}Info;

typedef struct arv{
    Info informacoes;
    struct arv *sim;
    struct arv *nao;
}Arvore;

Arvore* inserir(char pergunta[]);
void criarArvore(Arvore **arv);
void busca(Arvore *arv, int valor);
void lerArquivoPerguntas(const char nome_arq[], char ***lista_perguntas, int *num_perguntas);
void imprimirArvore(Arvore *arv);

#endif // ARVORE_H_INCLUDED
