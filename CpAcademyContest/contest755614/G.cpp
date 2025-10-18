#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    for(int i = 0; i<T; i++) {
        int N, R;
        cin >> N >> R;

        unordered_map<string, int> freq;


        while(R--){
            string I, C;
            cin >> I >> C;

            freq[I+C]++;
        }

    if(any_of(freq.begin(), freq.end(), [](const auto &x){return x.second>1;})){
            cout << "Scenario #" << i << ": impossible" << '\n' ;
        }else{
            cout << "Scenario #" << i << ": possible" << '\n' ;
        }
    }

    
    return 0;
}