#include <stdio.h>
#include "arvore.h"

int main()
{
    int num, contem = 0;
    Arvore *arvr = arvoreCria();
    arvoreInsere(arvr, 1);
    arvoreInsere(arvr, 5);
    arvoreInsere(arvr, 7);
    arvoreInsere(arvr, -3);
    arvoreInsere(arvr, 12);
    arvoreInsere(arvr, 15);
    arvoreInsere(arvr, 2);

    printf("0=Falso, 1=Verdadeiro\n");
    printf("Arvore contem 7? %d\n", arvoreBuscar(arvr, 7));
    printf("Arvore contem 2? %d\n", arvoreBuscar(arvr, 2));
    printf("Arvore contem 5? %d\n", arvoreBuscar(arvr, 5));

    if (arvoreBuscar(arvr, num))
    {
        // arvore_apagar(arvr,num);
    }
    else
    {
        printf("O valor não se encontra na arvore\n");
    }

    arvoreImprimir(arvr);
}