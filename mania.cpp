// pontuação 16/100
#include <bits/stdc++.h>
using namespace std;
int isPar(int a){
    if(a % 2 == 0) return 1;
    else return 0;
}
int main(){
    int contador = 0;
    int linhas, colunas;
    cin >> linhas >> colunas;
    int array[linhas*colunas];
    for(int i = 0; i < linhas*colunas; i++){
        cin >> array[i];
    }
      for(int i = 0; i < (linhas * colunas) - 1; i++){
            if(isPar(array[i+1]) != isPar(array[i+2]) && isPar(array[i]) == isPar(array[i+1]) && (i+1) % colunas != 0){
                array[i]++;
                contador++;
            }
             else{
                if(isPar(array[i]) == isPar(array[i+1])){
                array[i+1]++;
                contador++;
            }
        }
    }

    cout << contador << endl;
    for(int i = 0; i < linhas * colunas; i++){
        if(i % (colunas) == 0 && i != 0) cout << endl;
        cout << array[i] << " ";  
    }
    return 0;
}
