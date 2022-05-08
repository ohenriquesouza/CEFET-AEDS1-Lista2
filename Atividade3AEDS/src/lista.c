#include "lista.h"

void Swap(Item *a, Item *b){
	Item aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
}

void FLVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void LRemove(Lista *l, Item d){
	bool ok = false;

	if(l->first == l->last)
		printf("LISTA VAZIA!\n");
	else{
		for(int i=l->first; i<l->last; i++)
			if(l->vet[i].cotons == d.cotons){
				Swap(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
	
		if(ok)
			l->last --;
	}
}


void LImprime(Lista *l, int indentifier){
	if(indentifier == 0){
		printf("\nCadeia de DNA original: \n");
		int c = 1;
		for(int i=l->first; i<l->last; i++){
			printf("%dª posicao: %s\n", c, l->vet[i].cotons);
        	c++;
    	}
	}else{
		printf("\nCadeia de DNA que sera comparada: \n");
		int c = 1;
		for(int i=l->first; i<l->last; i++){
			printf("%dª posicao: %s\n", c, l->vet[i].cotons);
        	c++;
    	}
	}
}

void ComparaPosicoes(Lista *l, Lista *l2){
	int aux = 1;
	if(l->first == l->last || l2->first == l2->last)
		printf("ALGUMA DAS LISTAS PODE ESTAR VAZIA!\n");
	else{
		for(int i = l2->first; i < l2->last; i++){
			for(int j =l->first; j < l->last; j++){
				if(! (strcmp(l->vet[j].cotons, l2->vet[i].cotons))){
					printf("\nFoi encontrada uma igualdade na posicao '%d'.", j + 1);
					aux += j;
					for(int k = i; k < l->last; k++){
						if(! (strcmp(l->vet[j += 1].cotons, l2->vet[i += 1].cotons))){
							printf("\nMaxima cadeia formada entre a posicao '%d' e '%d'.", aux, j + 1);
						}else{
							printf("\nQuebra da maxima cadeia.\n");
							break;
						}
					}
				}
			}
		}
	}
}