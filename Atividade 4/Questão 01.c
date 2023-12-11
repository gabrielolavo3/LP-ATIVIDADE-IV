#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define G 3

struct contato {
    char nome[250];
    int numero_de_telefone;
    char email[250];
};

int informacao (struct contato telefone[], char* busca_de_contato) {
    int a;

    for (a = 0; a < G; a++) {
        if (strcmp(contato[a].nome, busca_de_contato) == 0) {

        }
    }
}

int main ( ) {
    setlocale (LC_ALL, "");

    int a, busca_de_contato;
    struct contato telefone[G];

    for (a = 0; a < G; a++) {
        printf ("Digite o nome do %dº contato: ", a+1);
        gets (telefone[a].nome);
        printf ("Digite o número do contato: ");
        scanf ("%d", &telefone[a].numero_de_telefone);
        printf ("Digite um email: ");
        gets (telefone[a].email);
    }

    printf ("Informe o nome do contato que deseja buscar: ");
    gets (busca_de_contato);

    contato(busca_de_contato, telefone);

    return 0;
}