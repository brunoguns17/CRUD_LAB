#include <stdio.h>
#include <stdlib.h>



void modificar(){

    char nome_arqu[50];
    int verifica_registro;
    Aluno estudante;
    // lendo arquivo
   do{
    system("cls"); //(windows)
    //system("clear"); (linux)
    printf("qual arquivo modificar: ");
    scanf("%s", &nome_arqu);
    
    FILE *f = fopen(nome_arqu, "rb");

    if (f) {
        fread(&estudante, sizeof(Aluno), 1, f);
            printf("\n============================================================================================\n");
            printf("INFORMACOES DO: %s \n",nome_arqu);
            printf("============================================================================================\n");
            printf("\n");
        printf("------------------------------DADOS DO ALUNO------------------------------------------------\n");
            printf("\n");
            printf("NOME: %s \n",estudante.nome);
            printf("MATRICULA: %d \n",estudante.matricula);
            printf("CURSO: %s \n",estudante.curso);
            printf("EMAIL: %S \n",estudante.email);
            printf("ORIENTADOR: %s \n",estudante.orientador);
            printf("FREQUENCIA: %s \n",estudante.frequencia);
            printf("\n");
        printf("------------------------------DADOS DO AVALIADOR---------------------------------------------\n");
            printf("\n");
            printf("AVALIADOR: %s \n",estudante.avaliador.nome);
            printf("INSTITUICAO: %s \n",estudante.avaliador.instituicao);
            printf("EMAIL: %s \n",estudante.avaliador.email);
            printf("\n");
        printf("---------------------------------DADOS DA BANCA-----------------------------------------------\n");
            printf("\n");
            printf("TITULO: %s \n",estudante.banca.Titulo);
            printf("RESUMO: %s \n",estudante.banca.Resumo);
            printf("HORARIO: %s \n",estudante.banca.Horario);
            printf("LOCAL: %s \n",estudante.banca.Local);



    printf("****************************** ATUALIZANDO: NOVOS DADOS DO ALUNO**********************************\n");
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
    printf("***************************** ATUALIZANDO: DADOS DO AVALIADOR ********************************\n");
        printf("\n");
        printf("NOME: ");
        gets(estudante.avaliador.nome);
        printf("INSTITUICAO: ");
        gets(estudante.avaliador.instituicao);
        printf("EMAIL: ");
        gets(estudante.avaliador.email);
        printf("\n");
    printf("**************************** ATUALIZANDO:  DADOS DODADOS DA BANCA ******************************\n");
        printf("\n");  
        printf("TITULO: ");
        gets(estudante.banca.Titulo);
        printf("RESUMO: ");
        gets(estudante.banca.Resumo);
        printf("HORARIO: ");
        gets(estudante.banca.Horario);
        printf("LOCAL: ");
        gets(estudante.banca.Local);



        FILE *f = fopen(nome_arqu,"wb");

        fwrite(&estudante, sizeof(Aluno), 1, f);
        fclose(f);



        fclose(f);
    
    }else{
        printf("\nO arquivo '%s' Nao existe.\n",nome_arqu);

    }

    printf("\n");
    printf("[1] para continuar\n");
    printf("[0] para sair\n");
    printf("\n");
    printf("Continuar modificando: ");
    scanf("%d", &verifica_registro);

            //sistema de validação!
        if (verifica_registro !=0 || verifica_registro !=1){
            while (verifica_registro!=0 && verifica_registro !=1){
                    system("cls"); //(windows)
                    //system("clear"); (linux)
                    printf("\n");
                    printf("[1] para continuar\n");
                    printf("[0] para sair\n");
                    printf("\n");
                    printf("DIGITE UMA OPCAO VALIDO: ");
                    scanf("%d", &verifica_registro);
                            
            }
        

    }

   } while (verifica_registro!=0);
   




   }