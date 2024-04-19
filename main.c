/******************************************************************************

Crie um programa que recebe um valor inteiro referente a um determinado ano. 
Imprima na tela se o ano informado é bissexto ou não.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if(ano % 4 == 0 && ano % 100 != 0){
        printf("O ano é bissexto!");
    }else{
        printf("O ano não é bissexto!");
    }
}
