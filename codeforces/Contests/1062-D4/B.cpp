#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        unordered_map<char, int> m_s1;
        unordered_map<char, int> m_s2;


        for(int i = 0; i<n; i++){
           m_s1[s1[i]]++; 
        }

        for(int j = 0; j<n; j++){
            m_s2[s2[j]]++;
        }


        string result = "YES";

        for(auto &x: m_s1){
            if(x.second != m_s2[x.first]){
                result = "NO";
            }
        }

        cout << result << '\n';
    }
    
    return 0;
}