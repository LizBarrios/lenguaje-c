/*
Nombre del archivo: adivinanza.c
Autor: Lizeth Barrios Retana
Fecha de creación: Agosto de 2023
Descripción: Este programa es un juego de adivinanza en el que el usuario debe adivinar un número aleatorio entre 1 y 100. El juego continúa hasta que el usuario adivina el número correcto, y se registran los intentos realizados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "1.h" //Libreria de las funciones repetir, validarNumeros y random.

int main()
{
    srand(time(NULL));       // Inicializamos la semilla para generar números aleatorios.
    int intentos = 0;        // Variable para contar los intentos del usuario.
    int num, des, NumRandom; // Variables para almacenar el número ingresado por el usuario, la decisión de repetir el juego y el número aleatorio.

    NumRandom = random(1, 100); // Generamos un número aleatorio entre 1 y 100 y lo asignamos a NumRandom.

inicio:
    intentos = 0; // Reiniciamos el contador de intentos.
    printf("***Bienvenido al juego de adivinanza***\n");
    printf("Reglas:\n");
    printf("1. Debes ingresar un numero y tratar de adivinar cual es el numero.\n");
    printf("El juego se va a repetir hasta que adivines el numero.\n");

adivinanza:
    num = validarNumeros("Ingresa un numero entre 1 y 100: ", 1, 100); // Solicitamos al usuario que ingrese un número y validamos que esté en el rango correcto.
    intentos++;                                                        // Incrementamos el contador de intentos.

    if (num == NumRandom) // Comparamos el número ingresado por el usuario con el número aleatorio.
    {
        printf("\n¡Felicidades, adivinaste el numero!\n");
        printf("Numero de intentos:%d\n", intentos);
        goto reinicio; // Si el usuario adivina el número, le preguntamos si desea repetir el juego y, si es así, volvemos al inicio del juego.
    }
    else
    {
        if (num > NumRandom)
        {
            printf("El numero es mas chico\n\n"); // Si el número ingresado es mayor que el número aleatorio, informamos al usuario.
            goto adivinanza;                      // Volvemos a la etiqueta "adivinanza" para que el usuario ingrese otro número.
        }
        else
        {
            printf("El numero es mas grande\n\n"); // Si el número ingresado es menor que el número aleatorio, informamos al usuario.
            goto adivinanza;                       // Volvemos a la etiqueta "adivinanza" para que el usuario ingrese otro número.
        }
    }

    return 0;

reinicio:
    des = repetir(); // Preguntamos al usuario si desea repetir el juego.
    if (des == 1)
    {
        goto inicio; // Si el usuario decide repetir el juego, volvemos al inicio del programa.
    }
}
