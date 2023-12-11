#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constantes, struct e funções

#define MAX_CHARACTER 250
#define MAX_NOTE 2
#define MAX_DATA 5

struct escola {
    char data_de_nascimento[MAX_CHARACTER];
    char nome[MAX_CHARACTER];
    float nota[MAX_NOTE];
    float media_Estudantil;
};

void titulo ( ) {
    system ("cls || clear");
    printf ("INSTITUTO DE ENSINO HOLMES! Boletim Online da Turma B-5\n\n");
}

float mediaFinal (float numero[]) {
    int i;
    float soma = 0, media;

    for (i = 0; i < MAX_NOTE; i++) {
        soma += numero[i];
    }
    return media = soma / (float) MAX_NOTE;
}

char* conceito (float valor) {
    char classe[MAX_CHARACTER];

    if (valor >= 7) {
        strcpy (classe, "Aprovado");
    
    } else {
        strcpy (classe, "Reprovado"); }
    
    return classe;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b;
    struct escola estudante[MAX_DATA];

// Solicitando dados

    titulo ( );
    for (a = 0; a < MAX_DATA; a++) {
        printf ("Digite o nome do %dº estudante: ", a+1);
        gets (estudante[a].nome);
        printf ("Digite a data de nascimento do estudante: ");
        gets (estudante[a].data_de_nascimento);

        for (b = 0; b < MAX_NOTE; b++) {
            do {
                printf ("Digite a %dª nota: ", b+1);
                scanf ("%f", &estudante[a].nota[b]);

                if (estudante[a].nota[b] < 0 || estudante[a].nota[b] > 10) {
                    printf ("\nNOTA INVÁLIDA! Por favor, informe uma nota entre 0 e 10\n\n"); }

            } while (estudante[a].nota[b] < 0 || estudante[a].nota[b] > 10);
        }
        fflush (stdin);
        printf ("\n");
    
        estudante[a].media_Estudantil = mediaFinal(estudante[a].nota);
    }

// Tela de resultado

    titulo ( );
    for (a = 0; a < MAX_DATA; a++) {
        printf ("Nome do %dº estudante: %s\n\n", a+1, estudante[a].nome);
        printf ("Data de nascimento do estudante: %d\n", estudante[a].data_de_nascimento);

        for (b = 0; b < MAX_NOTE; b++) {
            printf ("%dª nota: %.2f\n", b+1, estudante[a].nota[b]);
        }
        printf ("Média: %.2f\n", estudante[a].media_Estudantil);
        printf ("Situação escolar: %s\n\n", conceito (estudante[a].media_Estudantil));
    }

    return 0;
}
