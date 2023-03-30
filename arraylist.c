#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
    ArrayList* nuevo = (ArrayList *)malloc(sizeof(ArrayList));

    assert(nuevo != NULL);

    nuevo->data = malloc(2 * sizeof(void*));
    nuevo->capacity = 2;
    nuevo->size = 0;

    return NULL;
}

void append(ArrayList * l, void * data){
    assert(l != NULL);

    if(l->size == l->capacity)
    {
        l->data = realloc(l->data, (l->capacity * 2) * sizeof(void*));
        l->capacity *= 2;
    }

    l->data[l->size] = data;
    l->size++;
}

void push(ArrayList * l, void * data, int i){
    assert(l != NULL);

    if(i < 0 || i > l->size)
    {
        return;
    }

    if(l->size == l->capacity)
    {
        l->data = realloc(l->data, (l->capacity * 2) * sizeof(void*));
        l->capacity *= 2;
    }

    for (int k = i; k < l->size; k++)
    {
        l->data[k + 1] = l->data[k];
    }
    
    l->data[i] = data;
    l->size++;
}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
