#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    map<string, int> freq;

    while(n--){
        string s;
        cin >> s;
    
        freq[s]++;

        if(freq[s]>1){
            cout << "YES" << '\n';
        }else {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}