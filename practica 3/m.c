#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validarNumeros(char mensaje[], int ri, int rf);
int repetir();
int random(int ri, int rf);

/*
Función: validar numeros
Descripción: Esta función valida que se ingrese un numero correcto
- mensaje[]: Muestra el mensaje que se le ponga
- ri: Rango inicial
- rf: Rango final
Valor de retorno: el numero validado.
*/
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

/*
Función: repetir
Descripción: Esta función muestra un mensaje para saber si el usuario desea repetir el codigo
Valor de retorno: regresa un 1 si se desea repetir el codigo.
*/
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

/*
Función: random
Descripción: Esta función genera numeros randoms, dependiendo de los limites que se le den
- ri: Rango inicial
- rf: Rango final
Valor de retorno: un numero random, dentro del rango.
*/
int random(int ri, int rf)
{
    int r;
    r = (rf - ri) + 1;
    return (rand() % r) + ri;
}
