#include <stdio.h>
#include <stdlib.h>
#include"cabec.c"
int main()
{
    printf("\t--Alocacao de Produto--\n");
    posicao = 0;
    int opc;
    int codigo;
    int quantidade;
    do{
        system("cls");
        printf("\t\tMENU PRINCIPAL\n\n");
        printf("1 - Inserir\n");
        printf("2 - Alterar\n");
        printf("3 - Procurar\n");
        printf("4 - Listar\n");
        printf("5 - Inconsistencia\n");
        printf("6 - Excluir\n");
        printf("7 - Entrada de produtos\n");
        printf("8 - Saida de produtos\n");
        printf("9 - Sair\n\n\n");
        printf("..SUA OPCAO..: ");
        scanf("%d",&opc);
        switch (opc)
        {
         case 1:
          inserir();
          system("pause");
          break;
         case 2:
          system("cls");
          printf("Digite o codigo para alterar: ");
          scanf("%d",&codigo);
          alterar(codigo);
          system("pause");
          break;
         case 3:
          system("cls");
          printf("Digite o codigo que deseja encontrar: ");
          scanf("%d",&codigo);
          procurar(codigo);
          system("pause");
          break;
         case 4:
          system("cls");
          listar();
          system("pause");
          break;
         case 5:
          system("cls");
          printf("Digite o codigo para mostrar a inconsistencia: ");
          scanf("%d",&codigo);
          mostrarInconsistencia(codigo);
          system("pause");
          break;
         case 6:
          system("cls");
          printf("Digite o codigo do produto a ser excluido: ");
          scanf("%d",&codigo);
          excluir(codigo);
          system("pause");
          break;
         case 7:
          system("cls");
          printf("Digite o codigo do produto: ");
          scanf("%d",&codigo);
          fflush(stdin);
          printf("\nDigite a quantidade: ");
          scanf("%d", &quantidade);
          entrada(quantidade,codigo);
          system("pause");
          break;
         case 8:
          system("cls");
          printf("Digite o codigo do produto: ");
          scanf("%d",&codigo);
          fflush(stdin);
          printf("\nDigite a quantidade: ");
          scanf("%d",&quantidade);
          saida(quantidade,codigo);
          system("pause");
          break;
         case 9:
          system("cls");
          printf("\n\t**** FIM ****\n");
          break;
         default:
          printf("\t\nESCOLHA INVALIDA!!! -_-\n\n");
          system("pause");
        }
    }while(opc != 9);
    return 0;
}
