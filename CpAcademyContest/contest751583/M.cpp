#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while(T--){
        string s;
        cin >> s;

        int L = s.size();
        
        // for(char c : tracker){
            //     cout << c << '\n';
            // }
        char m;
        if(L%2==1){
            s.erase(L/2, 1);
        }
            
        unordered_set<char> tracker(s.begin(), s.end());
        if((int) tracker.size() >1){
            cout << "YES" << '\n';
        }else {
            cout << "No" << '\n';
        }

    }
    
    return 0;
}