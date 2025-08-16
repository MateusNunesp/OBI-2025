#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    int lista[N];
    int maior = -9999999;
    for(int i = 0; i < N; i++){
        cin >> lista[i];
        if(lista[i] > maior){
            maior = lista[i];
        }
    }
    int graf[maior][N];


    for(int i = 0; i < N; i++){
        for(int j = maior-1; j >= 0; j--){
            if(j >= maior - lista[i]){
                graf[j][i] = 1;
            } else{
                graf[j][i] = 0;
            }
        }
    }
    
    
    for(int i = 0; i < maior; i++){
        for(int j = 0; j < N; j++){
            cout << graf[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
