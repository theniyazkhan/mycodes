#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, e, k;
    cin >> s >> e >> k;
    for(int i = s; i <= e; i += k){
        cout << i << " ";
    } cout << endl;
    return 0;
}