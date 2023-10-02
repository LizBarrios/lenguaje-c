#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int intentos;
    int num,des;
inicio:
    printf("***Bienvenido al juego de adivinanza***\n");
    printf("Reglas:\n");
    printf("1. Debes ingresar un numero y tratar de adivinar cual es el numero.\n");
    printf(" el juego se va a repetir hasta que adivines el numero");
adivinanza:
    rand() % 100 + 1;
    intentos = 0;
    printf("ingresa un numero entero: \t");
    scanf("%d", num);

    if (num == rand)
    {
        printf("felicidades, adivinaste el numero!\n");
        printf("Numero de intentos:%d\n", intentos);
        printf("deseas juagr de nuevo?\n");
        printf("1- si\n");
        printf("2- no\n");
        scanf("%d",des);
        if(des==1)
        {
            goto adivinanza;
        }
        if (des==2)
        {
            printf("hemos terminado!");
        }
        
        else
        {
            printf("error");
        }
    }
    else
    {
        if (num > rand)
        {
            printf("el numero es mas chico");
            intentos++;
            goto inicio;
        }
        else
        {
            printf("el numero es mas grande");
            intentos++;
            goto inicio;
        }
    }

    return 0;
}