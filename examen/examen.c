#include <stdio.h>
#include <stdlib.h>
int validarNumeros(char mensaje[], int ri, int rf);
int repetir();

int main()
{
    int num, i, suma, bandera, j, k, bandera;
    do
    {
        bandera = 0;
        num = validarNumeros("ingrese un número entero positivo para dar su número perfecto ", 0, 1000000000);
        for (i = 1; i <= num; i++)
        {
            suma = 0;
            for (j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    suma += j;
                }
            }
            if (suma == i)
            {
                printf("el numero perfecto es:%d =", i);
                for (k = 1; k < i; k++)
                {
                    if (i % k == 0)
                    {
                        printf("%d ", k);
                    }
                }
                printf("\n");
            }
        }
        bandera = repetir();

    } while (bandera == 1);
}

int repetir()
{
    int repetir;
    repetir = validarNumeros("QUIERES HACER OTRA OPCION\nSI=1\nNO=2\n", 1, 2);
    if (repetir == 1)
    {
        return 1;
    }
    else
    {
        printf("FIN DEL POGRAMA");
        return 0;
    }
}
int validarNumeros(char mensaje[], int ri, int rf)
{
    char entrada[100];
    int num;
    do
    {
        printf("%s", mensaje);
        fgets(entrada, sizeof(entrada), stdin);
        num = atoi(entrada);
        if (num < ri || num > rf)
        {
            printf("INGRESE EL NUMERO OTRA VEZ PORFAVOR\n");
        }
    } while (num < ri || num > rf);
    return num;
}