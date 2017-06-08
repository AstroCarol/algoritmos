#include <stdio.h>
#include <stdlib.h>

struct ListaNumero{
	int numero;
	struct ListaNumero *proximo;
};


int inserirFim(struct ListaNumero* inicio, int numero);
int buscarNumero(struct ListaNumero* inicio, int numero);
void imprimirLista(struct ListaNumero* inicio); 

int main(int argc, char *argv[])
{	
	int nao_acha, acha;
	struct ListaNumero *inicio = (struct ListaNumero*) malloc (sizeof (struct ListaNumero));
	inicio->numero = 22;
	inicio->proximo = NULL;
	inserirFim(inicio,11);
	inserirFim(inicio,33);
	inserirFim(inicio,55);


 	nao_acha = buscarNumero(inicio,59);
 	acha = buscarNumero(inicio,33);


 	imprimirLista(inicio);

 	printf("%d\n",nao_acha);
 	printf("%d\n",acha);
	return 0;
}

int inserirFim(struct ListaNumero* inicio, int numero) {
	struct ListaNumero *novo, *ultimo;
	int retorno = 1;
	novo = (struct ListaNumero*) malloc(sizeof(struct ListaNumero));
	if (novo == NULL) { /* Verifica se a memória foi alocada */
		retorno = -1;
	} else {
		novo->numero = numero;
		novo->proximo = NULL; /* O novo é o fim da lista */
	if (inicio == NULL) { /* Se a lista estiver vazia */
		inicio = novo; /* o novo será o único elemento da lista */
	} else { /* Se ja houver elementos na lista */
	/* Percorre a lista para encontrar o último elemento */
		ultimo = inicio;
	while (ultimo->proximo != NULL)
		ultimo = ultimo->proximo;
	ultimo->proximo = novo; /* Atualiza referência do último */
		}
	}
	return retorno;
}

int buscarNumero(struct ListaNumero* inicio, int numero) {
	int retorno = -1;
	struct ListaNumero * atual;
	atual = inicio;
	while (atual != NULL) {
		if (atual->numero == numero) {
			retorno = 1;
			break;
		}
		atual = atual->proximo;
	}
	return retorno;
}

void imprimirLista(struct ListaNumero* inicio){
	struct ListaNumero * atual;
	atual = inicio;
	while(atual != NULL){
		printf("%d\n", atual->numero);
		atual = atual->proximo;
	}
}