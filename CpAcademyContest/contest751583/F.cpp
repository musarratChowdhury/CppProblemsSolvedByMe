#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    while(T--){

        int N;
        cin >> N;
        string s;
        cin >> s;

        string unique_s;

        for(int i = 0; i < N; i++){
            if(unique_s.find(tolower(s[i]),0) == string::npos){
                unique_s.push_back(tolower(s[i]));
            }
        }

        if(unique_s == "meow"){
            cout <<"YES"<<'\n';
        }else {
            cout << "NO" << '\n';
        }
    }

    // cout << unique_s << '\n';
    
    return 0;
}