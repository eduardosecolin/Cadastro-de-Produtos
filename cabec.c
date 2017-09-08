#include <stdio.h>
#include <stdlib.h>
//Estrutura Produto
struct Produto{
 int   codigo;
 char  descricao[51];
 float preco;
 int   quantidade;
}produtos[10];
//variavel global para guardar a posicao
int posicao;
//funcoes - protipos
void inserir();
void alterar(int codigo);
void procurar(int codigo);
void listar();
void mostrarInconsistencia(int codigo);
void excluir(int codigo);
void imprimir(int p);
void entrada(int quantidade,int codigo);
void saida(int quantidade,int codigo);

