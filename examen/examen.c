#include <stdio.h>
#include <stdlib.h>
int validarNumeros(char mensaje[], int ri);

int main()
{
    int num, i, suma = 0, bandera, j;
    num = validarNumeros("ingrese un número entero positivo para dar su número perfecto ", 0);
    for (i = 0; i < num; i++)
    {
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                suma += j;
            }
        }
    }
    return 0;
}

int validarNumeros(char mensaje[], int ri)
{
    char entrada[100];
    int num;
    do
    {
        printf("%s", mensaje);
        fgets(entrada, sizeof(entrada), stdin);
        num = atoi(entrada);
        if (num < ri && num == 1)
        {
            printf("INGRESE EL NUMERO OTRA VEZ PORFAVOR\n");
        }
    } while (num < ri);

    return num;
}
