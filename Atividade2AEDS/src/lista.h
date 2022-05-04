#ifndef LISTA_H 
#define LISTA_H

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 10

typedef struct Item{
	char nomes[50];
	bool achou;
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

void ComparaValor(Lista *l);

void TrocaCaractere(Lista *l);

void LImprimeNovaLista(Lista *l);

#endif