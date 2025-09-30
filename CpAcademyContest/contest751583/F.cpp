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

        if(N<4){
            cout << "NO" << '\n';
        }else{
            unique_s+=tolower(s[0]);
            for(int i = 1; i < N; i++){

                if(tolower(s[i-1])!=tolower(s[i])){
                    unique_s+=tolower(s[i]);
                }
            }
            // cout << unique_s << '\n';
            if(unique_s.compare("meow") == 0){
                cout <<"YES"<<'\n';
            }else {
                cout << "NO" << '\n';
            }
        }

    }

    // cout << unique_s << '\n';
    
    return 0;
}