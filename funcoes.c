#include <stdio.h>
#include <stdlib.h>
#include"cabec.c"
void inserir(){
 system("cls");
 if(posicao < 10)
 {
     printf("Digite o codigo do produto a ser inserido: ");
     scanf("%d",&produtos[posicao].codigo);
     fflush(stdin);
     printf("\nDigite a descricao do produto: ");
     gets(produtos[posicao].descricao);
     printf("\nDigite o preco do produto: ");
     scanf("%f",&produtos[posicao].preco);
     printf("\nDigite a quantidade de produtos: ");
     scanf("%d",&produtos[posicao].quantidade);
     printf("\n--CADASTRO EFETUADO COM SUCESSO--\n\n");
     posicao++;
 }else{
   printf("\nMEMORIA CHEIA!!\n");
 }
}
void alterar(int codigo){
 int i;
 system("cls");
 for(i=0;i<posicao;i++){
    if(codigo == produtos[i].codigo){
        fflush(stdin);
        printf("Nova Descricao: ");
        gets(produtos[i].descricao);
        printf("\nNovo preco: ");
        scanf("%f",&produtos[i].preco);
        printf("\t\nDADOS ALTERADOS COM SUCESSO \\o/\n\n");
    }
 }
}
void procurar(int codigo){
 int i;
 system("cls");
 for(i=0;i<posicao;i++){
    if(codigo == produtos[i].codigo)
    {
        imprimir(i);
    }
 }system("pause");
}
void listar(){
 int i;
 system("cls");
 for(i=0;i<posicao;i++){
    imprimir(i);
 }system("pause");
}
void mostrarInconsistencia(int codigo){
 int i;
 system("cls");
 for(i=0;i<posicao;i++){
    if(codigo == produtos[i].codigo&&produtos[i].quantidade<0){
        printf("\t\t\nESTOQUE NEGATIVO!!!\n\n");
        imprimir(i);
    }
    if(codigo == produtos[i].codigo&&produtos[i].quantidade>0){
        printf("\t\t\nESTOQUE POSITIVO!!!\n\n");
        imprimir(i);
    }
  }
}
void excluir(int codigo){
 int i;
 system("cls");
 for(i=0;i<posicao;i++){
   if(codigo == produtos[i].codigo){
    if((posicao==1) || (i==(posicao-1))){
        posicao--;
    }else{
     produtos[i].codigo = produtos[posicao-1].codigo;
     strcpy(produtos[i].descricao,produtos[posicao-1].descricao);
     produtos[i].preco = produtos[posicao-1].preco;
     produtos[i].quantidade = produtos[posicao-1].quantidade;
     posicao--;
    }
    printf("\t\n--DADOS EXCLUIDOS COM SUCESSO-- >_<\n\n");
   }
 }
}
void imprimir(int p){
 printf("____________________________________________");
 printf("\nCodigo do Produto: %d\n",produtos[p].codigo);
 printf("____________________________________________");
 printf("\nDescricao do Produto: %s\n",produtos[p].descricao);
 printf("____________________________________________");
 printf("\nPreco do Produto: %6.2f\n",produtos[p].preco);
 printf("____________________________________________");
 printf("\nQuantidade do Produto: %d\n",produtos[p].quantidade);
 printf("____________________________________________");
 printf("\n\n\n");
}
void entrada(int quantidade,int codigo){
    system("cls");
    int i =0;
    while(codigo!=produtos[i].codigo&&i!=11){
     i++;
    }
    if(i==10&&codigo!=produtos[i].codigo){
     printf("Dado nao encontrado!");
  }else{
    produtos[i].quantidade = produtos[i].quantidade + quantidade;
 }
}
void saida(int quantidade, int codigo){
    system("cls");
    int i =0;
    while(codigo!=produtos[i].codigo&&i!=11){
    i++;
   }
    if(i==10&&codigo!=produtos[i].codigo){
     printf("Dado nao encontrado!");
   }else{
     produtos[i].quantidade = produtos[i].quantidade - quantidade;
  }
}
