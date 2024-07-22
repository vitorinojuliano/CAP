#include <stdio.h>

int main(){
    int inter, gremio, condicao, empate, vi, vg, grenal;

    vi =0;
    vg =0;
    empate =0;
    grenal =0;

    do
    {
        scanf("%d %d", &inter, &gremio);
        if (inter>gremio){
            vi++;
        }
        else{
            if (gremio>inter)
            {
                vg++;
            }
            else{
                empate++;
            }
            
        }
        do
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &condicao);
        } while (condicao>2 || condicao < 1);
        
        

        grenal++;


    } while (condicao == 1);


    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", vi);
    printf("Gremio:%d\n", vg);
    printf("Empates:%d\n", empate);

    if (vi>vg){
        printf("Inter venceu mais\n");

    }
    else{
        if (vg>vi){
            printf("Vitoria do Gremio\n");
        }
        else{
            printf("empate\n");
        }
    }

    return 0;
    
}