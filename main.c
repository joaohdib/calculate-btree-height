#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int valor;
    struct Nodo* esq;
    struct Nodo* dir;
    int altura;
} Nodo;

Nodo* cria(int valor, Nodo* noEsq, Nodo* noDir) {
    Nodo* p = (Nodo*)malloc(sizeof(Nodo));
    p->valor = valor;
    p->esq = noEsq;
    p->dir = noDir;
    p->altura = 0;
    return p;
}

int calculaAltura(Nodo* Nodo) {
    if (Nodo == NULL) {
        return -1;
    }
    int esqAltura = calculaAltura(Nodo->esq);
    int dirAltura = calculaAltura(Nodo->dir);
    if (esqAltura > dirAltura) {
        Nodo->altura = esqAltura;
    }
    else {
        Nodo->altura = dirAltura;
    }
    Nodo->altura++;
    return Nodo->altura;
}

void exibeOrdem(Nodo* raiz) {
    if (raiz != NULL) {
        exibeOrdem(raiz->esq);
        printf("Nodo valor: %d, Altura: %d\n", raiz->valor, raiz->altura);
        exibeOrdem(raiz->dir);
    }
}

void liberaMemoria(Nodo* raiz) {
    if (raiz != NULL) {
        liberaMemoria(raiz->esq);
        liberaMemoria(raiz->dir);
        free(raiz);
    }
}


int main() {
    Nodo* raiz = NULL;

    Nodo* n20 = cria(20, NULL, NULL);
    Nodo* n60 = cria(60, NULL, NULL);
    Nodo* n80 = cria(80, NULL, n20);
    Nodo* n70 = cria(70, n60, n80);
    Nodo* n40 = cria(40, NULL, NULL);
    Nodo* n30 = cria(30, NULL, n40);
    Nodo* n50 = cria(50, n30, n70);

    raiz = n50;

    calculaAltura(raiz);

    exibeOrdem(raiz);

    liberaMemoria(raiz);
    return 0;
}
