#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constante, funções e struct

#define MAX_CHARACTER 250

struct compra {
    int quantidade;
    float preco;
    char nome[MAX_CHARACTER];
}; 

void titulo ( ) {
    system ("cls || clear");
    printf ("CENTRO LOGÍSTICO FASTLOG! Aquisição de Materiais e Consulta de Estoque\n\n");
}

int quantidadeProdutos (int quantia) {
    int quantidade_Estoque = 100;
    return quantidade_Estoque -= quantia;
}

float valor_Estoque (float dinheiro, float cifra) {
    return dinheiro * cifra;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int opcao, acervo;
    float montante;
    struct compra aquisicao;

// Solicitando dados

    do {
    titulo ( );
        printf ("Código | Descrição\n");
        printf ("   1   | Realizar uma compra\n");
        printf ("   2   | Consultar estoque\n");
        printf ("   3   | Sair do programa\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &opcao);

        switch (opcao) {
        case 1:
            fflush (stdin);
            printf ("\nDigite o nome do produto: ");
            gets (aquisicao.nome);
            printf ("Digite a quantidade adquirida: ");
            scanf ("%d", &aquisicao.quantidade);
            printf ("Digite o valor do produto: ");
            scanf ("%f", &aquisicao.preco);

// Passagem de parâmetro

            acervo = quantidadeProdutos(aquisicao.quantidade);
            montante = valor_Estoque(aquisicao.preco, aquisicao.quantidade);
            break;

// Tela de resultado

        case 2:

        titulo ( );
            printf ("Nome do produto: %s\n", aquisicao.nome);
            printf ("Quantidade no estoque: %d\n", acervo);
            printf ("Valor do estoque em produtos: R$ %.2f\n", montante);
            system ("pause");
            break; 
        
// Tela de encerramento

        case 3:
        titulo ( );
            printf ("Encerrando o algoritmo!");
            break;

        default:
            printf ("\nOpção Inválida! Por favor, selecione uma das opções disponíveis\n\n");
            break;
        }
        
    } while (opcao != 3);

    return 0;
}