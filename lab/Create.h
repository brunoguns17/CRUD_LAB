#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"

void cad() { 
    Aluno estudante;
    char nome_arqu[50];
    int continuar_cad;
        
     do{
        system("cls"); //(windows)
        //system("clear"); (linux)

        printf("nome do arquivo: ");
        scanf("%s", &nome_arqu);

        FILE *f = fopen(nome_arqu,"rb"); //teste para saber se o arquivo existe.

        if (f!=NULL) {
            //teste para saber se o arquivo existe.
            // Se o retorno de "rb" != NULL, orquivo ja existe.
            fclose(f);
            printf("O arquivo '%s' ja existe! :D \n",nome_arqu);
            
        
        }else{
        //criaando arquivo
        // Se o retorno de "rb" = NULL, orquivo não existe.
         system("cls"); //(windows)
        //system("clear"); (linux) 
    printf("=================================DADOS DO ALUNO=================================\n");
        printf("\n");
        printf("Nome: ");
        fflush(stdin);
        gets(estudante.nome);
        printf("Matricula: ");
        scanf("%d",&estudante.matricula,"\n");
        fflush(stdin);
        printf("Curso: ");
        gets(estudante.curso);
        printf("Email: ");
        gets(estudante.email);
        printf("Orientador: ");
        gets(estudante.orientador);
        printf("frequencia: ");
        gets(estudante.frequencia);
        printf("\n");
    printf("=================================DADOS DO AVALIADOR=================================\n");
        printf("\n");
        printf("NOME: ");
        gets(estudante.avaliador.nome);
        printf("INSTITUICAO: ");
        gets(estudante.avaliador.instituicao);
        printf("EMAIL: ");
        gets(estudante.avaliador.email);
        printf("\n");
    printf("================================= DADOS DA BANCA=================================\n");
        printf("\n");  
        printf("TITULO: ");
        gets(estudante.banca.Titulo);
        printf("RESUMO: ");
        gets(estudante.banca.Resumo);
        printf("HORARIO: ");
        gets(estudante.banca.Horario);
        printf("LOCAL: ");
        gets(estudante.banca.Local);



        FILE *f = fopen(nome_arqu,"ab");

        fwrite(&estudante, sizeof(Aluno), 1, f);
        fclose(f);
     }
        
    printf("\n");
    printf("[1] para continuar\n");
    printf("[0] para sair\n");
    printf("\n");
    printf("Deseja continuar Cadastrando: ");
    scanf("%d", &continuar_cad);


        //sistema de validação!
        if (continuar_cad !=0 || continuar_cad !=1){
        while (continuar_cad !=0 && continuar_cad !=1){
                system("cls"); //(windows)
                //system("clear"); (linux)
                printf("\n");
                printf("[1] para continuar\n");
                printf("[0] para sair\n");
                printf("\n");
                printf("DIGITE UMA OPCAO VALIDO: ");
                scanf("%d", &continuar_cad);
                        
        }
        

    }
    
    } while (continuar_cad !=0); 
    


    
}
