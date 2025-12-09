#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED


typedef struct{
    int valor;      // Valor do índice para respostas, se for 0 é uma pergunta, 1-32 respostas
    char *pergunta; // Variável para guardar o texto das perguntas e a descrição da planta.
}Info;

typedef struct arv{
    Info informacoes;
    struct arv *sim;
    struct arv *nao;
}Arvore;

Arvore* inserir(char pergunta[], int valor);
void criarArvore(Arvore **arv);
void plantaIdeal(Arvore *arv);
void lerArquivoPerguntas(const char nome_arq[], char ***lista_perguntas, int *num_perguntas);
char* lerArquivoRespostas(const char nome_arq[], int valor_index);
int str_em_numero(char string[]);
void imprimirArvore(Arvore *arv);
void salva_arvore(Arvore *r);
void carrega_arvore(Arvore **r);

#endif // ARVORE_H_INCLUDED
