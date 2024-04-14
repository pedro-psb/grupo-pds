#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

typedef struct No
{
  int valor;
  No *esq;
  No *dir;
} No;

typedef struct Arvore
{
  No *raiz;
} Arvore;

/* Insere no recursivamente. */
void _insereNo(No *novo, No *existente);

Arvore *arvoreCria()
{
  Arvore *nova_arvore = malloc(sizeof(Arvore));
  // Checa alocação de memoria
  if (nova_arvore == NULL)
  {
    printf("Houve um erro ao alocar memoria para a arvore.\n");
    exit(1);
  }
  nova_arvore->raiz = NULL;
  return nova_arvore;
}

void arvoreInsere(Arvore *arvore, int valor)
{
  // Inicializa
  No *novo_no = malloc(sizeof(No));
  novo_no->valor = valor;
  novo_no->esq = NULL;
  novo_no->dir = NULL;

  if (arvore->raiz == NULL)
  {
    arvore->raiz = novo_no;
  }
  else
  {
    _insereNo(novo_no, arvore->raiz);
  }
}

/* Função auxiliar para inserir no recursivamente (arvore binaria) */
void _insereNo(No *novo, No *existente)
{
  if (novo->valor < existente->valor)
  {
    if (existente->esq == NULL)
    {
      existente->esq = novo;
    }
    else
    {
      _insereNo(novo, existente->esq);
    }
  }
  else if (novo->valor > existente->valor)
  {
    if (existente->dir == NULL)
    {
      existente->dir = novo;
    }
    else
    {
      _insereNo(novo, existente->dir);
    }
  }
}

/* Checa se arvore binaria contem valor. 0=nao-contem, 1=contem */
int arvoreBuscar(Arvore *arvore, int valor)
{
  //
  No *aux = arvore->raiz;
  while (aux != NULL)
  {
    if (aux->valor == valor)
    {
      return 1;
    }
    else if (valor < aux->valor)
    {
      aux = aux->esq;
    }
    else
    {
      aux = aux->dir;
    }
  }
  return 0;
}

/* Apagar árvore */
void arvoreApagar(Arvore *arvore, int x)
{
}

void arvore_imprimir_no(No *no)
{
  if (no != NULL)
  {
    printf("%i ", no->valor);
    arvore_imprimir_no(no->esq);
    arvore_imprimir_no(no->dir);
  }
}

/* Imprimir árvore */
void arvoreImprimir(Arvore *arvore)
{
  arvore_imprimir_no(arvore->raiz);
}
