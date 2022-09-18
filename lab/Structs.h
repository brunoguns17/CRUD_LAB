#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Titulo[100];
    char Resumo[100];
    char Horario[5];
    char Local[100];

}Dados_da_banca;

typedef struct {
    char nome[100];
    char instituicao[100];
    char email[50];
    
}Avaliadores;

typedef struct {
    char nome[50];
    int  matricula;
    char curso[50];
    char email[50];
    char orientador[100];
    char frequencia[4];
    Avaliadores avaliador;
    Dados_da_banca banca;

}Aluno;