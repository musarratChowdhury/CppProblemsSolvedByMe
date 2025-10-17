#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;

    while(cin >> N && N !=0){
        map<string, int> freq;

        for(int i = 0; i<N; i++){
            string color;
            cin >> color;

            freq[color]++;
        }


        int maxCount = 0;
        string mostP;

        for(auto &entry : freq){
            if(entry.second > maxCount){
                maxCount = entry.second;
                mostP = entry.first;
            }
        }

        cout << mostP << '\n';
    }
    
    return 0;
}