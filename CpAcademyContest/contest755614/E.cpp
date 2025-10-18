#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    map<string, int> freq;

    while(N--){
        string s;
        cin >> s;

        freq[s.substr(3, 3)]++;
    }

    int count = 0;
    unordered_set<string> track;
    while(M--){
        string s;
        cin >> s;

        track.insert(s);
    }

    for(string s : track){

        if(freq[s] != 0){
            count += freq[s];
        }
    }


    cout << count << '\n';
    
    return 0;
}