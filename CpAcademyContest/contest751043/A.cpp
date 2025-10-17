#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while(T--){
        int N, M;
        cin >> N >> M;

        cout <<( N-M >= 0 ? N-M : 0) << '\n';
    }
    
    return 0;
}