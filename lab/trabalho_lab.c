#include <stdio.h>
#include <stdlib.h>
#include "Create.h"
#include "Read.h"
#include "Put.h"
#include "Delete.h"

int main() {

int opitions_menu;

  do {
        system("cls"); //(windows)
        //system("clear"); (linux)
     printf("==========MENU================================\n");
     printf("1 - CADASTRAR BANCA\n");
     printf("2 - ALTERAR DADOS\n");
     printf("3 - LISTAR BANCA\n");
     printf("4 - DELETAR BANCA\n");
     printf("0 - SAIR\n");
     printf("=============================================\n");
     printf("Digite o numero da opcao: ");
     scanf("%d", &opitions_menu);
 
        switch (opitions_menu) {

            case 1:
            printf ("=> CADASTRAR BANCA\n");
            cad();
            break;
            
            case 2:
            printf ("=> ALTERAR DADOS\n");
            modificar();
            break;
            
            case 3:
            printf ("=> LISTAR BANCA\n");
            listar();
            break;

            case 4:
            printf ("=>DELETAR BANCA\n");
            delete();
            break;
        
            case 0:
            printf ("FIM\n");
            break;
            
            
            default :
            printf ("Valor invalido!\n");
      }
    }  while (opitions_menu != 0);

    return 0;
}

