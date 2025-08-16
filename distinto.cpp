// pontuação: 49/100
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long partidas, bolinhas, min, max;
    cin >> partidas;
    for(long long i = 0; i < partidas; i++){
        cin >> bolinhas >> min >> max;
        long long soma = 0;
        long long contador = 0;
        for(long long j = min; j <= max; j++){
            if(soma < bolinhas){
                contador++;
                soma += j;
            if(soma >= bolinhas) break; 
            }
        }
        cout << contador << "\n";
    }
    return 0;
}
