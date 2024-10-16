#include <iostream>
using namespace std;

bool Cubica(int *vP, int n, int soma);

int main(){
    int n, triplo;
    int *v;
    cout << "Tamanho do vetor" << endl;
    cin >> n;
    if(!(v = new(nothrow) int[n])){
        cout << "Falha na alocacao de memoria" << endl;
        return -1;
    }
    cout << "Me de um numero" << endl;
    cin >> triplo;
    cout << "Preencha o vetor" << endl;
    for(int i=0;i<n;i++)
        cin >> *(v+i);
    if(!Cubica(v,n,triplo))
        cout << "Triplo nao encontrado" << endl;

    return 0;
}

bool Cubica(int *vP, int n, int soma){
    for(int i=0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                if(*(vP + i) + *(vP + j) + *(vP + k) == soma){
                    cout << "Triplo encontrado: " << *(vP+i) << ", " << *(vP+j) << " e " << *(vP+k) << endl;
                    return true;
                }
            }
        }
    }
    return false;
}