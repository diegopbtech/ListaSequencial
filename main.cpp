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

    cout << "Criação da lista vazia\n\n";
    cout << "Tamanho máximo da linha: ";
    cin >> tMaximo;

    ListaSequencial* listaseq = new ListaSequencial(tMaximo);

    while(addNum){
        cout << "Adicione um número na posição " << indice << ": ";
        cin >> numero;
        listaseq->inserirElementoPorPosicao(indice, numero);
        cout << "Adicionar mais numeros? [S] - SIM ou [N] - NÃO: ";
        cin >> opcao;
        indice++;
        if(opcao == 'N' || opcao == 'n'){
            addNum = false;
            break;
        }
    }

    do {
        cout << "MENU DE OPERAÇÕES\n\n";
        cout << "1. Listar os valores da lista\n";
        cout << "2. Verificar se a lista está vazia\n";
        cout << "3. Verificar se a lista está cheia\n";
        cout << "4. Obter o tamanho da lista\n";
        cout << "5. Obter/modificar o valor do elemento de uma determinada posição na lista\n";
        cout << "6. Inserir um elemento em uma determinada posição\n";
        cout << "7. Retirar um elemento de uma determinada posição\n";
        cout << "\nSelecione uma opção: ";
        cin >> menu;

        if(menu == 1){
            system("clear");
            cout << endl;
            listaseq->exibirValores();
            cout << endl;
        }

        if(menu == 2){
            system("clear");
            if(listaseq->vazia()){
                cout << "\nLista vazia! \n\n";
            }else{
                cout << "\nA lista não está vazia! \n\n";
            }
        }

        if(menu == 3){
            system("clear");
            if(listaseq->cheia()){
                cout << "\nLista cheia! \n\n";
            }else{
                cout << "\nA lista não está cheia! \n\n";
            }
        }

        if(menu == 4){
            system("clear");
            cout << "\nO tamanho atual da lista é: " << listaseq->tamanhoDaLista() << endl << endl;
        }

        if(menu == 5){
            int posNum;
            system("clear");
            cout << "\nDeseja obter o elemento de qual posição? ";
            cin >> posNum;
            if(listaseq->obterValor(posNum)==-1){
                cout << "Posição inválida!\n\n";
            }else{
                cout << "O valor da posição indicada é: " << listaseq->obterValor(posNum) << "\n\n";
            }
        }

        if(menu == 6){
            int posNum;
            int novoValor;
            system("clear");
            cout << "\nDeseja inserir o valor em qual posição? ";
            cin >> posNum;
            cout << "\nQual será o novo valor? ";
            cin >> novoValor;
            if(listaseq->inserirElementoPorPosicao(posNum, novoValor)){
                cout << "Valor inserido com sucesso!\n\n";
            }else{
                cout << "Houve algum erro!";
            }
        }

        if(menu == 7){
            int posNum;
            system("clear");
            cout << "\nDeseja remover o valor de qual posição? ";
            cin >> posNum;
            if(listaseq->removerElementoPorPosicao(posNum)!=-1){
                cout << "O valor removido foi: " << listaseq->removerElementoPorPosicao(posNum) << "\n\n";
            }else{
                cout << "Houve algum erro ao remover valor!\n\n";
            }
        }

    } while(menu != 0);

    return 0;
}