#include "lista.h"

int main(){
    //declaracao item, lista//
	Lista l, l2;
	Item aux;
    int indentifier = 0;

    //esvazia a lista, evitando lixo//
    FLVazia(&l);

    //declaracao arquivo//
    FILE *cadeiaINICIAL;

    //arquivo aberto para leitura ("r")//
    cadeiaINICIAL = fopen("cadeiaDNAinicial.txt", "r");

    //Insercao do conteudo do arquivo na lista//
    while(fgets(aux.codons, 4, cadeiaINICIAL) != NULL){
        LInsert(&l, aux);
    }

    //arquivo fechado//
    fclose(cadeiaINICIAL);

    //imprime a lista//
	LImprime(&l, indentifier);

    FLVazia(&l2);

    FILE *cadeiaPESQUISA;

    cadeiaPESQUISA = fopen("cadeiaDNApesquisa.txt", "r");

    while(fgets(aux.codons, 4, cadeiaPESQUISA) != NULL){
        LInsert(&l2, aux);
    }

    fclose(cadeiaPESQUISA);

    indentifier = 1;

    LImprime(&l2, indentifier);

    ComparaPosicoes(&l, &l2);

	return 0;
}