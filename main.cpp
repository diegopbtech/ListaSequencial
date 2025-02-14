#include <stdio.h>
#include <iostream>

#include "Lista.cpp"

using namespace std;

int main() {

    int tMaximo;
    bool addNum = true;
    int indice = 1;
    int numero;
    char opcao;
    int menu = 0;

    cout << "Tamanho máximo da linha: ";
    cin >> tMaximo;

    ListaSequencial* listaseq = new ListaSequencial(tMaximo);

    while(addNum){
        cout << "Adicione um número na posição " << indice << ": ";
        cin >> numero;
        listaseq->inserirElementoPorPosicao(indice, numero);
        cout << "Adicionar mais numeros? [S] - SIM ou [N] - NÃO: ";
        cin >> opcao;
        listaseq->tamanhoAtual++;
        indice++;
        if(opcao == 'N' || opcao == 'n'){
            addNum = false;
            break;
        }
    }

    do {

        cout << "MENU DE OPERAÇÕES\n\n";

    } while(menu != 0);

    return 0;
}