#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_CHARACTER 250

struct informacao {
    char nome[MAX_CHARACTER];
    char cargo[MAX_CHARACTER];
    float salario[200];
};

float media_Salarial (float valor[], int a) {
    int i;
    float soma = 0, media;
    for (i = 0; i < a; i++) {
        soma += valor[a];
    }
    return media = soma / a;
}

int main ( ) {
    setlocale (LC_ALL, "");
    
    int opcao;
    int a = 0, contador;
    float media;
    struct informacao funcionario;

    do {
       printf ("Código | Descrição\n");
       printf ("   1   | Adicionar informação\n");
       printf ("   2   | Sair e eixbir\n\n");
       printf ("Selecione a opção desejada: ");
       scanf ("%d", &opcao);
        
        switch (opcao) {
            case 1:
                setbuf (stdin, 0);
                printf ("Digite o nome do %dº funcionário: ", a+1);
                gets (funcionario.nome);
                printf ("Digite o nome do cargo: ");
                gets (funcionario.cargo);
                printf ("Digite o valor do salario: ");
                scanf ("%f", &funcionario.salario[a]);
                a++;
                contador = a;
                media_Salarial(funcionario.salario, contador);
                
                break;
            
            case 2 :
                printf ("Média salarial dos programadores: %.2f\n", media_Salarial(funcionario.salario, contador));
                break;
        }

    } while (opcao != 2);

    return 0;
}