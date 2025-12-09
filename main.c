#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arvore.h"
#include <locale.h>
#ifdef _WIN32
    #include <windows.h>
#endif

#define TAM_ENTRADA 10


// Função para executar a função principal
void executarPrograma() {
    Arvore *arv_dec = NULL;
    printf("\n=== INICIANDO PROGRAMA ===\n");
    carrega_arvore(&arv_dec);

    if (arv_dec != NULL) {
        plantaIdeal(arv_dec);
        fflush(stdin);
    } else {
        printf("Erro ao criar a arvore de decisao.\n");
    }

    printf("=== PROGRAMA FINALIZADO ===\n\n");
}

int main() {
    int opcao;

     // Configuração de codificação
    #ifdef _WIN32
        // Windows
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
        setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    #else
        // Linux/macOS
        setlocale(LC_ALL, "pt_BR.UTF-8");
    #endif

    do {
        fflush(stdin);
        printf("\n\t\t=== MENU - PLANTA IDEAL ===\n"
               "\t\t| 1. Iniciar programa     |\n"
               "\t\t| 2. Sobre                |\n"
               "\t\t| 3. Encerrar programa    |\n"
               "\t\t===========================\n"
               "Escolha uma opcao: ");

        scanf("%d", &opcao);
        getchar();

        switch(opcao) {
            case 1: executarPrograma(); break;
            case 2:
                printf("\n"
                       "╔══════════════════════════════════════════╗\n"
                       "║               SOBRE O PROJETO            ║\n"
                       "╠══════════════════════════════════════════╣\n"
                       "║ Este projeto foi desenvolvido pelos      ║\n"
                       "║ alunos:                                  ║\n"
                       "║                                          ║\n"
                       "║ • Ariel Machado                          ║\n"
                       "║ • Artur Becker                           ║\n"
                       "║ • Luis Filipe                            ║\n"
                       "║ • Matheus Müller                         ║\n"
                       "║                                          ║\n"
                       "║ Universidade de Santa Cruz do Sul - UNISC║\n"
                       "║                                          ║\n"
                       "║ Cadeira: Estrutura de Dados              ║\n"
                       "║ Professora: Daniela Bagatini             ║\n"
                       "╚══════════════════════════════════════════╝\n\n");
                break;
                break;
            case 3:
                printf("\nEncerrando... Obrigado por usar o Planta Ideal!\n");
                break;
            default:
                printf("\nOpcao invalida! Digite 1, 2 ou 3.\n");
        }
    } while(opcao != 3);
    return 0;
}
