#include <stdio.h>

int main(){
    int matricula, numero, i, maiornota;
    float nota, maior;
    // iniciando variaveis
    i =0;
    maior = 0.0;
    maiornota = 0;
    scanf("%d\n",&numero);
    // loop para repetir "numero" vezes
    while (numero>i)
    {
        // leitura de variaveis
        scanf("%d %f", &matricula, &nota);
        // achando maior nota e acumulando a matricula
        if ( nota > maior){
            maior = nota;
            maiornota = matricula;
            
        }
        // incremento de +1
        i++;
    }
    // Nota maior ou igual a 8
    if (maior>=8.0){
        printf("%d\n", maiornota);
    }
    else{
        printf("Minimum note not reached\n");
    }
    
    return 0;
}

