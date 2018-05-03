#include "lista.h"

aviao* criar_aviao(char codigo[7] , int numero_p,char capitao[11]){
	aviao *p;
	p=(aviao*)malloc(sizeof(aviao));
	strcpy(p->codigo,codigo);
	strcpy(p->capitao,capitao);
	p->numero_p=numero_p;
	p->prox=NULL;
	return p;
}
void insere(aviao **lista, char codigo[7], int numero_p, char capitao[11]){
	aviao *p, *inicio;
	if((*lista)==NULL){
		p=criar_aviao(codigo,numero_p,capitao);
		(*lista)=inicio=p;
	}else{
		p=criar_aviao(codigo,numero_p,capitao);
		(*lista)->prox=p;
	
	}
}
void imprimir(aviao *lista){
	int i;
	
	while(lista!=NULL){
		printf("%d",lista->numero_p);
		lista = lista->prox;
	}
	system("pause");
}
