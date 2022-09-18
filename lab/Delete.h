#include <stdio.h>
#include <stdlib.h>

void delete(){
    char nome_arqu[50];
    printf("Qual arquivo deseja deletar: ");
    scanf("%s", &nome_arqu);
    // nome do arquivo


    // tenta abrir o arquivo para escrita
    FILE *file = fopen(nome_arqu, "r");

    if(file){

        fclose(file);

        // tenta remover o arquivo
        printf("\nO arquivo: '%s'foi deletado! :D\n",nome_arqu, remove(nome_arqu));
    }
    else{
        printf("\nErro! :/ O arquivo: '%s', NAO EXISTE!! \n ",nome_arqu);
        printf("\n");

        // Ao tentar remover um arquivo que não existe a função retorna o valor -1

       
     
    }


   
}