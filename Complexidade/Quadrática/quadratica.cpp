#include <iostream>
using namespace std;

void BubbleSort(int *v, int num);

int main(){
    int n;
    cout << "Tamanho do vetor" << endl;
    cin >> n;
    int *v;
    if(!(v = new(nothrow) int[n])){
        cout << "Falha na alocacao de memoria" << endl;
        return -1;
    }
    cout << "De os elementos do vetor" << endl;
    for(int i=0;i<n;i++)
        cin >> *(v+i);
    BubbleSort(v,n);
    cout << "Vetor ordenado" << endl;
    for(int i=0;i<n;i++)
        cout << "Vetor #" << i << ": " << *(v+i) << endl;
    delete[] v;
    v = NULL;
    return 0;
}

void BubbleSort(int *v, int num){
    for(int i=0;i<num-1;i++){
        for(int j=0; j < num-i-1;j++){
            if(*(v+j) > *(v+j+1)){
                swap(*(v+j),*(v+j+1));
            }
        }
    }
}