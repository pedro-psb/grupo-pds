/* Estruturas Opacas*/
typedef struct No No;
typedef struct Arvore Arvore;

/* Criar estrutura de arvore binaria */
Arvore *arvoreCria();

/* Insere elemento na arvore binaria */
void arvoreInsere(Arvore *arvore, int valor);

/* Checa se arvore binaria contem valor. 0=nao-contem, 1=contem */
int arvoreBuscar(Arvore *arvore, int valor);

/* Apaga árvore */
void arvoreApagar(Arvore *arvore, int x);

/* Imprimi árvore*/
void arvoreImprimir(Arvore *arvore);