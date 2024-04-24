#include <stdio.h>

#define MAX 3

typedef struct
{
    char cpf[12];
    char nome[50];
}Pessoa;

int buscalinear (Pessoa pessoas[],int tamanho,int *cpfp){
    for (int i = 0; i < tamanho; i++ ){
        if (strcmp(pessoas[i].cpf, cpfp) == 0){
            return i;
        };
    };
    return -1;
};

int main(){

    Pessoa pessoas[MAX]={
        {"12345678999", "Rodrigo"},
        {"43215312531", "Gabriel"},
        {"51111421332", "Andressa"}
    };

    char cpfp[12];
    printf("Digite o CPF que deseja buscar: ");
    scanf("%11s", cpfp);

    int resultado = buscalinear(pessoas, MAX, cpfp);
    if (resultado != -1) {
        printf("CPF encontrado! Nome: %s\n", pessoas[resultado].nome);
    } else {
        printf("CPF não encontrado.\n");
    }

    return 0;
}