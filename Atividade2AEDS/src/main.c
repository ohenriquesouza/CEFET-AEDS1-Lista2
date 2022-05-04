#include "lista.h"

int main(){
    //declaracao item, lista//
	Lista l;
	Item aux;

    //esvazia a lista, evitando lixo//
    FLVazia(&l);

    //declaracao arquivo//
    FILE *arquivo;

    //arquivo aberto para leitura ("r")//
    arquivo = fopen("nomes.txt", "r");

    //Insercao do conteudo do arquivo na lista//
    while(fgets(aux.nomes, 50, arquivo) != NULL){
        LInsert(&l, aux);
    }

    //arquivo fechado//
    fclose(arquivo);

    //imprime a lista//
	LImprime(&l);

    //funcao para remover nomes repetidos//
    TrocaCaractere(&l);

	return 0;
}