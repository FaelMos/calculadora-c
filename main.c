#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

float mult(float a, float b){
    float c; 
    c = a*b; 
    return c; 
}



int main()
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0, numVoos = 0;

    do
    {
        system("cls");

        printf("\n\t===\t|Menu|\t===\t\n");
        printf("\n1. Opcao");
        printf("\n2. \tSair\n");

        scanf("%i", &opcao);
        system("cls");

        switch (opcao)
        {
        case 1:
            break;

        default:
            break;
        }
    } while (opcao != 0 && opcao != 2);

    
}