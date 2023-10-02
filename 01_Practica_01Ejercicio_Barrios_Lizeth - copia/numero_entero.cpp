#include <stdio.h>
int main()
{
    int limite;
    int resultado=0;

    printf("ingrese un numero entero positivo:");
    scanf("%d",&limite);
    for (int i=1; i<=limite; i++)
    {
        resultado+=i;
    }
    printf("la suma de los primeros %d nuemros es:%d\n", limite,resultado);
    return 0;
}