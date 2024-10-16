#include <iostream>
using namespace std;

int MultDois(int num);

int main(){
    int n;
    cout << "Digite um numero" << endl;
    cin >> n;
    cout << "Dobro do numero: " << MultDois(n) << endl;
    return 0;
}

int MultDois(int num){
    return num * 2;
}