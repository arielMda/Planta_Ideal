#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main()
{
    Arvore *arv_dec;
    criarArvore(&arv_dec);
    imprimirArvore(arv_dec);
    return 0;
}
