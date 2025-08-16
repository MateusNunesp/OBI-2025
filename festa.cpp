#include <bits/stdc++.h>
using namespace std;
int main(){
    int E, S, L;
    cin >> E >> S >> L;
    int distancia = 0;
    int moduloS;
    if(E >= S){
        moduloS = E - S;
    } else{
        moduloS = S - E;
    }
    int moduloL;
    if(E >= L){
        moduloL = E - L;
    } else{
        moduloL = L - E;
    }
    int moduloC;
    if(S >= L){
        moduloC = S - L;
    } else{
        moduloC = L - S;
    }
    if(moduloL >= moduloS){
        distancia = moduloS;
        distancia += moduloC;
        distancia += moduloL;
    } else{
        distancia = moduloL;
        distancia += moduloC;
        distancia += moduloS;
    }
    cout << distancia << '\n';

    return 0;
}
