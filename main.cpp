#include "caminho.cpp"

using namespace std;

int main(int argc, char const *argv[]){
	
	Caminho caminho;

	caminho.empilhar(12);
	cout << caminho.consultar() << endl;
	caminho.desempilhar();


	return 0;
}