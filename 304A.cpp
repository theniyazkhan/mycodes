#include<bits/stdc++.h>
using namespace std;
#define start() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

const int mx = 2e8+12;
bool isPerfectSquar[mx];

int main(){
    start()
    int n, i, a, b, c, count = 0;
    cin >> n;

    for(i = 1; i <= n; i++){
        isPerfectSquar[i*i] = 1;
    }

    for(a = 1; a <= n; a++){
        for(b = a; b <=n; b++){
            c = a*a + b*b;
            if(isPerfectSquar[c]){
                count++;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}