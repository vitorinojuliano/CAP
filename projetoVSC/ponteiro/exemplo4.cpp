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
    Obs2: Libere a memória alocada quando não for mais necessária.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para armazenar as informações de um produto
typedef struct
{
    int codigo;
    char nome[51]; // 50 caracteres + 1 para o caractere nulo
    int quantidade;
    float preco;
} produto;

int main()
{
    int N;
    produto *estoque = NULL;
    produto *produto_mais_caro = NULL;
    produto *produto_mais_quantidade = NULL;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &N);

    // Aloca dinamicamente memória para N produtos
    estoque = (produto *)malloc(N * sizeof(produto));
    if (estoque == NULL)
    {
        printf("Erro ao alocar memória.\n");
        exit(1); // Termina o programa se a alocação falhar
    }

    // Entrada de dados para cada produto
    for (int i = 0; i < N; i++)
    {
        printf("\nProduto %d\n", i + 1);
        printf("Código: ");
        scanf("%d", &estoque[i].codigo);
        printf("Nome: ");
        getchar();                                              // Consome o caractere '\n' deixado pelo scanf anterior
        fgets(estoque[i].nome, sizeof(estoque[i].nome), stdin); // Lê a string com espaços
        printf("Quantidade disponível: ");
        scanf("%d", &estoque[i].quantidade);
        printf("Preço de venda: ");
        scanf("%f", &estoque[i].preco);

        // Inicializa ou atualiza o produto com maior preço
        if (produto_mais_caro == NULL || estoque[i].preco > produto_mais_caro->preco)
        {
            produto_mais_caro = &estoque[i];
        }

        // Inicializa ou atualiza o produto com maior quantidade
        if (produto_mais_quantidade == NULL || estoque[i].quantidade > produto_mais_quantidade->quantidade)
        {
            produto_mais_quantidade = &estoque[i];
        }
    }

    // Exibe o produto com maior preço de venda
    if (produto_mais_caro != NULL)
    {
        printf("\nProduto com o maior preço de venda:\n");
        printf("Código: %d\n", produto_mais_caro->codigo);
        printf("Nome: %s\n", produto_mais_caro->nome);
        printf("Quantidade disponível: %d\n", produto_mais_caro->quantidade);
        printf("Preço de venda: R$%.2f\n", produto_mais_caro->preco);
    }

    // Exibe o produto com maior quantidade disponível no estoque
    if (produto_mais_quantidade != NULL)
    {
        printf("\nProduto com a maior quantidade disponível no estoque:\n");
        printf("Código: %d\n", produto_mais_quantidade->codigo);
        printf("Nome: %s\n", produto_mais_quantidade->nome);
        printf("Quantidade disponível: %d\n", produto_mais_quantidade->quantidade);
        printf("Preço de venda: R$%.2f\n", produto_mais_quantidade->preco);
    }

    // Libera a memória alocada
    free(estoque);

    return 0;
}
