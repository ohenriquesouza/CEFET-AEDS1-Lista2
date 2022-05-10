#ifndef LISTA_H 
#define LISTA_H

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 100

typedef struct Item{
	char codons[4];
	bool compativel;
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

void LImprime(Lista *l, int identifier);

void ComparaPosicoes(Lista *l, Lista *l2);

#endif