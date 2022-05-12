#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 100

typedef struct Item{
	int numeros;
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int first;
	int last;
}Lista;


void FLVazia(Lista *l);

void LInsert(Lista *l, Item d);

void LRemove(Lista *l, Item d);

void Swap(Item *a, Item *b);

void LImprime(Lista *l);

void EncontraMaximaSoma(Lista *l);

#endif
