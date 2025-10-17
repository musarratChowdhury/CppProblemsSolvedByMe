#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    vector<char> alphabets;

    for(int i = 96; i <= 122; i++ ){
        alphabets.push_back((char)i); //alphabets[1] should be  'a';
    }

    while(T--){
        int n;
        cin >> n;

        string s = "___";

        int minimum_z = n / 26;
        int rem = n%26;

        if(minimum_z == 3){
            s[2] = 'z';
            s[1] = 'z';
            s[0] = 'z';
        }else if(n >=54 && n <= 77){

            //2 'z'
            s[2] = 'z';
            s[1] = 'z';
            s[0] = alphabets[n - 52];
        }else if(n > 27 && n <= 53){
            //1 'z' scenarios;
            s[2] = 'z';
            s[1] = alphabets[n - 26 - 1];
            s[0] = 'a';
        }else if(n>=4 && n<=27){
            s[2] = alphabets[n - 2];
            s[1] = alphabets[1];
            s[0] = alphabets[1];
        }else{
            //min_z = 0;
            s[2] = 'a';
            s[1] = 'a';
            s[0] = 'a';
        }

        cout << s << '\n';
    }
    
    return 0;
}