// pontuação: 0/100
#include <bits/stdc++.h>
using namespace std;
int indecisos(int tiposobj[], int precoobj[], int objetos){
    int menortipo = 999999999;
    int menortipoindex;
    for(int j = 0; j < objetos; j++){
        if((precoobj[j] < menortipo) && tiposobj[j] != -1){
            menortipoindex = j;
            menortipo = precoobj[j];
        }
        if(precoobj[j] == menortipo){
            if((tiposobj[j] < tiposobj[menortipoindex]) && precoobj[j] != -1){
                menortipoindex = j;
                menortipo = precoobj[j];
            }
        }

    }
    return menortipoindex;
}
int decidido(int tiposobj[], int precoobj[], int objetos, int tiposclientes[], int i){
    int menorpreco = 1000001;
    int menorprecoindex;
    for(int j = 0; j < objetos; j++){
        if(tiposobj[j] == tiposclientes[i] && tiposobj[j] != -1){
            if(precoobj[j] < menorpreco && tiposobj[j] != -1){
                menorpreco = precoobj[j];
                menorprecoindex = j;
            }
        }
    }
    return menorprecoindex;
}
int main(){
    int objetos, tipos;
    int soma = 0;
    cin >> objetos >> tipos;
    int precoobj[objetos];
    int tiposobj[objetos];
    for(int i = 0; i < objetos; i++){
        cin >> tiposobj[i];
    }
    for(int i = 0; i < objetos; i++){
        cin >> precoobj[i];
    }
    int clientes;
    cin >> clientes;
    int tiposclientes[clientes];
    for(int i = 0; i < clientes; i++){
        cin >> tiposclientes[i];
    }
    for(int i = 0; i < clientes; i++){
        if(tiposclientes[i] == 0){
            soma += precoobj[indecisos(tiposobj, precoobj, objetos)];
            tiposobj[i] = -1;
            precoobj[i] = -1;
        }
        else{
            soma += precoobj[decidido(tiposobj, precoobj, objetos, tiposclientes, i)];
            tiposobj[i] = -1;
            precoobj[i] = -1;
        }
    }
    cout << soma << endl;
    return 0;
}
