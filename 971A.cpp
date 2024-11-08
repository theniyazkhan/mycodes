#include<bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define start() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    start();
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;
 
        int min_value = b - a;

        for(int c = a; c <= b; ++c){
            int current_value = (c - a) + (b - c);
            min_value = min(min_value, current_value);
        }

        cout << min_value; nl
    }
    
    return 0;
}