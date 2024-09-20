#include <stdio.h>
#include <stdlib.h>

typedef struct fezes{
    
    int cont;
    struct fezes* prox;
    
}fezes;

typedef struct fezes* Lista;

Lista* crialista(){
    
    Lista *li = (Lista*)malloc(sizeof(Lista));
    
    if(li != NULL)
    {
      *li = NULL;
    }
    return li;

}

int inserelistafim(Lista* lista, int val){
    if(lista == NULL){return 0;}
    fezes* aux = (fezes*)malloc(sizeof(fezes));
    if(aux==NULL){return 0;}
    aux->cont = val;
    aux->prox = NULL;
    if((*lista)==NULL){ *lista = aux;}
    else{
        fezes *temp;
        temp = *lista;
        while(temp->prox != NULL){
            temp = temp->prox;
        }
        temp->prox = aux;
        
}
    return 1;
}


int main()
{
    Lista *lst;
    lst = crialista();
    
    inserelistafim(lst, 1);
    inserelistafim(lst, 2);
    inserelistafim(lst, 3);      
    inserelistafim(lst, 4);
    inserelistafim(lst, 5);
    inserelistafim(lst, 6);




    
    
    return 0;
}
