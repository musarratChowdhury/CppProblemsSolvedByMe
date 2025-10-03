#include <bits/stdc++.h>
using namespace std;

void alice_move(char& c){
    if(c == 'a') c++;
    else {
        int d = abs('a' - c);
        c = c - d;
    }
}

void bob_move(char& c){
    if(c == 'z') c--;
    else {
        int d = abs('z' - c);
        c+=d;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while(T--){
        string s1;
        cin >> s1;

        for(int i = 0; i < (int)s1.length(); i++){
            if(i%2==0) alice_move(s1[i]);
            else bob_move(s1[i]);
        }
        
        cout << s1 << '\n';
    }
    
    return 0;
}