#include <stdio.h>
#include <string.h>

const int NUM_ESTUDANTES = 3;
const int NUM_NOTAS = 4;

// Definindo uma estrutura para armazenar os dados dos estudantes
struct Estudante {
    char nome[50];
    float notas[NUM_NOTAS];
};

float calcularMedia(float notas[], int numNotas) {
    float soma = 0.0;
    for (int i = 0; i < numNotas; i++) {
        soma += notas[i];
    }
    return soma / numNotas;
}

int main() {
    // Declarando uma matriz de estudantes
    struct Estudante estudantes[NUM_ESTUDANTES] = {
        {"Juliano", {8.5, 7.2, 9.0, 6.5}},
        {"Ana", {7.8, 8.2, 8.5, 9.0}},
        {"Carlos", {6.0, 7.0, 8.0, 7.5}}
    };

    // Calculando e exibindo a média das notas para cada estudante
    for (int i = 0; i < NUM_ESTUDANTES; i++) {
        float media = calcularMedia(estudantes[i].notas, NUM_NOTAS);
        printf("Estudante: %s\n", estudantes[i].nome);
        printf("Média das notas: %.2f\n\n", media);
    }

    return 0;
}
