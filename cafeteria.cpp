#include <bits/stdc++.h>
using namespace std;
int main(){
    int A; // vol minimo leite
    int B; //vol maximo leite
    int C; // capacidade xicara
    int D; // vol dose cafe
    cin >> A >> B >> C >> D;
    int minD = C - B;
    int maxD = C - A;
    for(int i = minD; i <= maxD; i++){
        if(i % D == 0){
            cout << 'S' << '\n';
            return 0;
        }
    }
    cout << 'N' << '\n';
    return 0;
}
