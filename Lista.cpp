#include <stdio.h>
#include <iostream>

using namespace std;

class ListaSequencial {
    public:

        int* dados;
        int tamanhoAtual;
        int tamanhoMaximo;

        // 1. Criação da lista vazia
        ListaSequencial(int max) {
            tamanhoMaximo = max;
            tamanhoAtual = 0;
            dados = new int[tamanhoMaximo];
        }

        ~ListaSequencial() {
            delete[] dados;
        }

        // 2. Verificar se a lista está vazia
        bool vazia(){
            if(tamanhoAtual == 0){
                return true;
            }else {
                return false;
            }
        }

        // 3. Verificar se a lista está cheia
        bool cheia(){
            if(tamanhoAtual == tamanhoMaximo){
                return true;
            }else {
                return false;
            }
        }

        // 4. Obter o tamanho da lista;
        int tamanhoDaLista(){
            return tamanhoAtual;
        }

        // 5. Obter/modificar o valor do elemento de uma determinada posição na lista
        int obterValor(int posicao){
            if((posicao > tamanhoAtual) || (posicao <= 0)){
                return -1;
            }
            return dados[posicao-1];
        }

        // 6. Inserir um elemento em uma determinada posição
        bool inserirElementoPorPosicao(int posicao, int novoDado){
            if(cheia() || (posicao > tamanhoAtual+1) || (posicao<=0)){
                return false;
            }

            for(int i=tamanhoAtual;i>=posicao;i--){
                dados[i] = dados[i-1];
            }

            dados[posicao - 1] = novoDado;

            tamanhoAtual++;
            return true;
        }

        // 7. Retirar um elemento de uma determinada posição
        int removerElementoPorPosicao(int posicao){
            int dadoRemovido;

            if((posicao > tamanhoAtual) || (posicao<=0)){
                return -1;
            }

            dadoRemovido = dados[posicao - 1];
            for(int i=posicao - 1; i<tamanhoAtual-1 ;i++){
                dados[i] = dados[i-1];
            }

            tamanhoAtual--;
            return dadoRemovido;
        }

        void exibirValores(){
            for(int i = 0; i < tamanhoAtual; ){

            }
        }

};
