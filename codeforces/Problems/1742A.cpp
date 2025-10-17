// https://codeforces.com/problemset/problem/1742/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while(T--){
        int a,b,c;
        cin >> a >> b >> c;

        int M = max({a,b,c});

        if(a == M){
            if(b + c == a){
                cout << "YES" << '\n';
                continue;
            }
        }
        if(b == M){
            if(a + c == b){
                cout << "YES" << '\n';
                continue;
            }
        }
        if(c == M){
            if(a + b == c){
                cout << "YES" << '\n';
                continue;
            }
        }

        cout << "NO" << '\n';
    }
    
    return 0;
}