#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define G 3

struct contato {
    char nome[250];
    char numero_de_telefone[11];
    char email[250];
};

char* informacao (struct contato telefone[], char* busca_de_contato) {

    int a;
    for (a = 0; a < G; a++) {
        if (strcmp(telefone[a].nome, busca_de_contato) == 0) {
            printf ("Número do contato: %s\n", telefone[a].numero_de_telefone);
            break;
    }
    printf ("OPS! O Contato não foi localizado!"); 
}

int main ( ) {
    setlocale (LC_ALL, "");

    int a;
    char busca_de_contato;
    struct contato telefone[G];

    for (a = 0; a < G; a++) {
        printf ("Digite o nome do %dº contato: ", a+1);
        gets (telefone[a].nome);
        printf ("Digite o número do contato: ");
        gets (telefone[a].numero_de_telefone);
        printf ("Digite um email: ");
        gets (telefone[a].email);
    }

    printf ("Informe o nome do contato que deseja buscar: ");
    gets (busca_de_contato);

    informacao(telefone, busca_de_contato);

    return 0;
}
