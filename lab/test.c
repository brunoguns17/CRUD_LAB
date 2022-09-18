#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int matricula;
  
}Aluno;

main(){
    Aluno estudante;
    char nome_arqu[50];

    
    //criaando arquivo
    printf("nome do arquivo: ");
    scanf("%s", &nome_arqu);

    printf("nome: ");
    fflush(stdin);
    gets(estudante.nome);

    printf("matricula: ");
    scanf("%d", &estudante.matricula);

    FILE *f = fopen(nome_arqu,"ab");

    fwrite(&estudante, sizeof(Aluno), 1, f);
    fclose(f);
   

    // lendo arquivo
   /* printf("qual arquivo quer ler: ");
    scanf("%s", &nome_arqu);
    
    FILE *f = fopen(nome_arqu, "rb");

    if (!f) {
        printf("Erro ao tentar ler o arquivo.\n");
        exit(1);
    }

        fread(&estudante, sizeof(Aluno), 1, f);
        printf("========================================================\n");
        printf("INFORMACOES DO TCC: %s \n",nome_arqu);
        printf("========================================================\n");
        printf("NOME:%s \n", estudante.nome);
        printf("MATRICULA: %d \n",estudante.matricula);


    fclose(f);
    */




/*
              Como remover / apagar um arquivo com a função remove?

              Código escrito por Wagner Gaspar
              Julho de 2021
*/
    

    return 0;
}