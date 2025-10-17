#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    map<char, int> freq;

    for(auto c : s){
        freq[c]++;
    }

    if(freq.size()>2){
        cout << "No" << '\n';
    }
    else {
        if(all_of(freq.begin(), freq.end(), [](pair<char, int> p){return p.second == 2;})){
            cout << "Yes" << '\n';
        }else{
            cout << "No" << '\n';
        }
    }
    return 0;
}