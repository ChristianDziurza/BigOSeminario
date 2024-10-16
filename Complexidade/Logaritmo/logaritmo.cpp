#include <iostream>
using namespace std;

int BuscaBinaria(int *vetor, int n);

int main(){
    int v[100];
    for(int i=0;i<100;i++){
       *(v+i) = i+1;
    }
    int num;
    cout << "De um numero de 1 a 100" << endl;
    cin >> num;
    if(BuscaBinaria(v,num) != 890)
        cout << "O numero " << num << " se localiza no indice " << BuscaBinaria(v,num) << endl;
    else
        cout << "O numero " << num << " nao existe no escopo do vetor" << endl;
    return 0;
}

int BuscaBinaria(int *vetor, int n){
    int esquerda=0, direita=100;
    while(esquerda <= direita){
        int meio = esquerda + (direita-esquerda)/2;
        if(vetor[meio] == n)
            return meio;
        if(vetor[meio] < n)
            esquerda = meio + 1;
        if(vetor[meio] > n)
            direita = meio - 1;
    }
    return 890;
}