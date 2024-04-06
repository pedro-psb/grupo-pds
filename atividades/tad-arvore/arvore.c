typedef struct No {
  int valor;
  struct No *esq;
  struct No *dir;
} No;

typedef struct Arvore {
  No *raiz;
} Arvore;

/* Criar estrutura de arvore binaria */
Arvore *arvoreCria() {
  //
}

/* Insere elemento na arvore binaria */
void arvoreInsere(Arvore *arvore, int valor) {
  //
}

/* Função auxiliar para inserir no recursivamente (arvore binaria) */
void _insereNo(No *novo, No *existente) {
  //
}

/* Checa se arvore binaria contem valor. 0=nao-contem, 1=contem */
int arvoreContem(Arvore *arvore, int valor) {
  //
}
