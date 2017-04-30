#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define MAX 20


int main()
{

    char seguir='s';
    int opcion=0;
    int flag;
    system("color 17");
    ePersona personas[MAX];
    inicializar(personas, MAX);

    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");


        scanf("%d",&opcion);

        if(opcion<1||opcion>5)
        {
            printf("\nIngrese una opcion valida\n");
            scanf("%d",&opcion);
        }
        else
        {

            switch(opcion)
            {
            case 1:
                system("cls");
                cargarPersonas(personas, MAX);

                break;
            case 2:
                system("cls");
                eliminarPersona(personas, MAX);
                break;
            case 3:
                system("cls");
                printf("DNI\t\tNOMBRE\t\t\tEDAD\t\t\n");
                ordenarPersona(personas, MAX);

                break;
            case 4:
                graficoPersona(personas,MAX, flag);
                break;
            case 5:
                seguir = 'n';
                break;
            }
        }
    }

    return 0;
}
