#include <iostream>
using namespace std;

void Preenche(int *v, int num);
void Imprime(int *v, int num);

int main(){
    int n;
    cout << "Tamanho do vetor" << endl;
    cin >> n;
    int *v;
    if(!(v = new(nothrow) int[n])){
        cout << "Falha na alocacao de memoria" << endl;
        return -1;
    }
    Preenche(v,n);
    Imprime(v,n);
    delete[] v;
    v = NULL;
    return 0;
}
void Preenche(int *v, int num){
    cout << "Preencha o vetor" << endl;
    for(int i=0; i<num; i++){
        cout << "Vetor #" << i+1 << ": ";
        cin >> *(v+i);
    }
}
void Imprime(int *v, int num){
    cout << endl << "Aqui esta o vetor" << endl;
    for(int i=0;i<num;i++)
        cout << *(v+i) << endl;
}