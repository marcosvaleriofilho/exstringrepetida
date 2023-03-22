#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Elabore um programa que leia uma string de no máximo 20 caracteres e um caractere. O programa deverá determinar o número de vezes que esse caractere aparece na string.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char string20[20], caractere=0;
    int qtd = 0,i =0;

    printf("Digite uma string de no máximo 20 caracteres:");
    gets(string20);
    printf("Digite um caractere:");
    scanf("%c", &caractere);
    for(i=0;string20[i] != 0; i++)
    {
        if(string20[i]==caractere)
        {
            qtd=qtd+1;
        }
    }
    printf("Número de %c(s): %d", caractere, qtd);

    system("pause");
    return 0;
}

