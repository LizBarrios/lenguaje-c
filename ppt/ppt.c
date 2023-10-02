#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,dado;
    printf("ingrese el numero\n");
    printf("1. piedra\n");
    printf("2. papel\n");
    printf("3. tijera\n");
    scanf("%d",&num);
    srand(time(NULL));
    int Aleatorio = rand() % 3 + 1;

    if(Aleatorio==3)//tijera
    {
        if(num==1)//piedra
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("ganas");
            return 1;
        }
        if(num==2)//papel
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("pierdes");
            return 1;

        }
        else
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("empate");
            return 1;
        }
    }
    if(Aleatorio==2)//papel
    {
        if(num==1)//piedra
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("ganas");
            return 1;
        }
        else
        {
            printf("el numero aleatorio es: %d\n",Aleatorio);
            printf("empate");
            return 1;
        }
    }
    else
    {
        printf("el numero aleatorio es: %d\n",Aleatorio);
        printf("pierdes");
        return 1;
    }
    return 0;
}

