// Dadas duas listas ligadas ordenadas, mesclá-las em uma única lista ligada ordenada.


#include <stdio.h>
#include <stdlib.h>

struct NodoLista {
    int val;
    struct NodoLista *prox;
};

struct NodoLista* mesclarDuasListas(struct NodoLista* l1, struct NodoLista* l2) {
    struct NodoLista dummy;
    struct NodoLista* cauda = &dummy;
    dummy.prox = NULL;

    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            cauda->prox = l1;
            l1 = l1->prox;
        } else {
            cauda->prox = l2;
            l2 = l2->prox;
        }
        cauda = cauda->prox;
    }
    cauda->prox = (l1 != NULL) ? l1 : l2;
    return dummy.prox;
}

int main() {
    // Exemplo de criação e mesclagem de listas
    return 0;
}
