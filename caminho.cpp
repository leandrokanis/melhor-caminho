#include <iostream>
class Caminho{

struct No{
	int distancia;
	No *proximo;
};

No *cabeca;

public:
	Caminho(){
		cabeca = NULL;
	}

	void empilhar(int val){
        No *n = new No();
        n->distancia = val;
        n->proximo = cabeca;
        cabeca = n;
    }
	
    void desempilhar(){
        No *n = cabeca;
        int valor = n->distancia;

        cabeca = cabeca->proximo;
        delete n;
    }

    int consultar(){
        No *n = cabeca;
        int valor = n->distancia;
        return valor;
    }

};