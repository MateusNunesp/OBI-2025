#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int fila[N];
    for(int i = 0; i < N; i++){
        cin >> fila[i];
    }
    int contador = 0;
    int maior = fila[N-1];
    for(int i = N-2; i >= 0; i--){
        if(maior >= fila[i]){
            contador++;
        }
        if(fila[i] > maior){
            maior = fila[i];
        }
    }
    cout << contador << '\n';
    return 0;
}
