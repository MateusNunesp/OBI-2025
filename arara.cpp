#include <bits/stdc++.h>
using namespace std;
int main(){
    int araras, gaiolas;
    cin >> araras >> gaiolas;
    if(5 * (araras-1) +1 <= gaiolas) cout << 'S';
    else cout << 'N';
    return 0;
}
