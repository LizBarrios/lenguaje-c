/*Barrios Retana Lizeth, Rios Rodriguez Daniel, Gonzalez Ceseña Adan
Diego osuna, Diego jiros*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int j, c;
    srand(time(NULL));
    c = rand() % 3 + 1;
    printf("Escriba su jugada\n1-Piedra, 2-Papel, 3-Tijera\n");
    scanf("%d",&j);
    if(j!=c)
    {
        if(j==1&&c==2)
        {
            printf("Perdiste tu oponente escogio %d\n", c);
            return 0;
        }
        else
        {
            printf("Tu ganas, Tu oponente escogio %d\n", c);
            return 0;
        }
        
        if(j==2&&c==3)
        {
            printf("Tu pierdes, tu oponente escogio %d\n", c);
            return 0;
        }
        else
        {
            printf("Tu ganas, tu oponente escogio %d\n", c);
            return 0;
        }
        
        if(j==3&&c==1)
        {
            printf("Tu pierdes, tu oponente escogio %d\n", c);
            return 0;
        }
        else
        {
            printf("Tu ganas, tu oponente escogio %d\n", c);
            return 0;
        }
    }
    if(j==c)
    {
        printf("Empate\n");
        return 0;

    }
    return 0;
}