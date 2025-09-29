//
// Created by User on 9/29/2025.
//
#include <bits/stdc++.h>
using namespace std;

int indexOf(const vector<int>& v, int value) {
    auto it = std::find(v.begin(), v.end(), value);
    if (it == v.end()) return -1;
    return static_cast<int>(it - v.begin());
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int N = 4;
        vector<int> participants(N);
        for(int i = 0; i<N; i++){
            cin >> participants[i];
        }

        int T = participants[0];

        sort(participants.rbegin(), participants.rend());

        cout << indexOf(participants, T) << endl;
    }
    return 0;
}