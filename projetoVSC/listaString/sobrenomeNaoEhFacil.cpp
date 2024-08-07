#include <stdio.h>
#include <string.h>

int main()
{
    int i,n,v,tamanho,cont;
    char sobrenome[43];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s",sobrenome);
        tamanho = (int)strlen(sobrenome);
        cont = 0;
        v = 0;
        for (int j = 0;j < tamanho;j++)
        {
            if ((sobrenome[j]!='a')&&(sobrenome[j]!='e')&&(sobrenome[j]!='i')&&(sobrenome[j]!='o')&&(sobrenome[j]!='u')&&(sobrenome[j]!='A')&&(sobrenome[j]!='E')&&(sobrenome[j]!='I')&&(sobrenome[j]!='O')&&(sobrenome[j]!='U')){
                cont++;
                if (cont>2){
                    v=1;
                }
            }else{
                cont = 0;
            }
            
        }
        if (v == 1){
            printf("%s nao eh facil\n",sobrenome);
        }else{
            printf("%s eh facil\n",sobrenome);
        }
        
    }
    
    return 0;
}