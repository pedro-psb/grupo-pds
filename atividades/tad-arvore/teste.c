#include <stdio.h>
#include "arvore.h"

int main()
{
    int num,contem=0;
    Arvore *arvr= arvorecria();
    arvoreInsere(arvr, 1);
    arvoreInsere(arvr, 5);
    arvoreInsere(arvr, 7);
    arvoreInsere(arvr, -3);
    arvoreInsere(arvr, 12);

    printf()
    contem=arvoreBuscar(arvr,5);

    if(contem)
    {
        printf("O número está presente na arvore");
        contem=0;
    }
    else
    {
        printf("O número não está presente na arvore");
        contem=0;
    }
    printf("Digite o valor a ser removido da arvore: ");
    scanf("%d",&num);
    contem=arvoreBuscar(&arvr,num);
    if(contem)
    {
        arvore_apagar(&arvr,num);
    }
    else
    {
        printf("O valor não se encontra na arvore");
    }
    
    arvore_imprimir(&arvr);

}