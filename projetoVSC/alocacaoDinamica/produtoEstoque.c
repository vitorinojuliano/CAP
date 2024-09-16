/*Considere um cadastro de produtos de um estoque, com as seguintes informações para  cada produto:

            Código de identificação do produto: representado por um valor inteiro 
            Nome do produto: com até 50 caracteres
            Quantidade disponível no estoque: representado por um numero inteiro 
            Preço de venda: representado por um valor real

    Defina uma estrutura (registro), denominada produto, que tenha os campos apropriados para guardar as informações de um produto.
    Aloque dinamicamente  memória para armazenar um conjunto de N produtos  (sendo N um valor fornecido pelo usuário) e peça ao  usuário para entrar com as informações de cada produto. 
    Encontre e imprima o produto com o maior preço de venda.
    Encontre e imprima o produto com a maior quantidade disponível no estoque.

    Obs1: Verifique se houve erro durante a alocação de memória.
    Obs2: Libere a memória alocada quando não for mais necessária.
    Obs3: Caso haja mais de um produto com o maior preço de venda ou com a maior quantidade disponível no estoque, imprima apenas um deles.*/
#include <stdio.h>
#include <stdlib.h>

struct produto{
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

int main(){
    int nprodutos, i;
    printf("quantos produtos \n");
    scanf("%d", &nprodutos);

    struct produto *produtos = (struct produto*) malloc(nprodutos*sizeof(struct produto));
    // verificar se alocou
    if (produtos == NULL){
        printf("Erro: Memoria insuficiente!!\n");
        exit(1);
    }
    // pedir os dados
    for(i=0; i<nprodutos; i++){
        printf("codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("nome: ");
        scanf("%s", produtos[i].nome);
        printf("quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("preco: ");
        scanf("%f", &produtos[i].preco);
    }
    // encontrar o produto com maior preco
    int maiorpreco = 0;
    for(i=1; i<nprodutos; i++){
        if (produtos[i].preco > produtos[maiorpreco].preco){
            maiorpreco = i;
        }
    }
    printf("Produto com maior preco: %s\n", produtos[maiorpreco].nome);
    // encontrar o produto com maior quantidade
    int maiorquantidade = 0;
    for(i=1; i<nprodutos; i++){
        if (produtos[i].quantidade > produtos[maiorquantidade].quantidade){
            maiorquantidade = i;
        }
    }
    printf("Produto com maior quantidade: %s\n", produtos[maiorquantidade].nome);
    
    free(produtos);
}