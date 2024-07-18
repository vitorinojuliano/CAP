#include <stdio.h> // Biblioteca de entrada e saida
#include <stdlib.h> // Biblioteca de comandos do sistema
#include <math.h> // Biblioteca de funcoes matematicas

int main () // define funcao principal do programa 
{
    int x; // Declaracao e inteiro de 32 bits
    short int y; // inteiro de 16 bits 
    char a; // caractere de 8 bits com sinal de -128 a 127
    unsigned char b; // caractere de 8 bits sem cinal de 0 A 255

// pow significa potencia, -1 torna positivo
    x = pow (2,31) - 1; 
    y = pow(2,15) - 1;
    printf("x = %d y = %d\n",x,y);
    x = x +1; // overflow de 32 bits
    y = y + 1; // overflow de 16 bits 
    printf("x = %d y = %d\n",x,y);

    a = pow(2,7)-1;
    b = pow(2,8)-1;
    printf(" a = %d b = %d\n",a,b);
    a = a +1; // overflow de 8 bits com sinal
    b = b+1; // overflow de 8 bits sem sinal
    printf("a = %d b = %d\n",a,b);
    system("PAUSE"); // pausa no sistema espefico para windows
    return 0; // indica que o programa terminou com sucesso
}