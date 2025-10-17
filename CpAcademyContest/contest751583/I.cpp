#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while(T--){
        
        string word;
        
        int line = 8;
        
        while(line--){
            string s;
            cin >> s;
            word += s[s.find_first_not_of('.')];
        }

        cout << word << '\n';
    }
    
    return 0;
}