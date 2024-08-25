#include <stdio.h>

int main(void){ /*
    int valor1, valor2;
    int *ponteiro1, *ponteiro2;

    scanf("%d %d", &valor1, &valor2);
    ponteiro1 = &valor1;
    ponteiro2 = &valor2;

    if (*ponteiro1 < *ponteiro2){
        printf("endereço %p e valor dobrado %d\n", ponteiro1, *ponteiro1*2);
    }
    else{
        printf("endereço %p e valor dobrado %d\n", ponteiro2, *ponteiro2*2);
    }
    
    return 0;
    
    int i, *ponteiro1, *ponteiro2;

    printf("i = ");
    scanf("%d", &i);

    ponteiro1 = &i;
    ponteiro2 = ponteiro1;
    *ponteiro2 = *ponteiro1*2;

    printf("%d, %d e %d\n", i, *ponteiro1, *ponteiro2);
    */
   int valor1, valor2, valor3, auxiliar;
   scanf("%d %d %d", &valor1, &valor2, &valor3);

   int *p_minimo, *p_maximo, *p_medio;

   p_minimo = &valor1;
   p_medio = &valor2;
   p_maximo = &valor3;

   if(*p_maximo < *p_minimo){
        auxiliar = *p_minimo;
        *p_minimo = *p_maximo;
        *p_maximo = auxiliar;
   }
   auxiliar = 0;
   if (*p_medio < *p_minimo){
        auxiliar = *p_minimo;
        *p_minimo = *p_medio;
        *p_medio = auxiliar;
   }
   printf("menor %d, medio %d, maior %d\n", valor1, valor2, valor3);

}