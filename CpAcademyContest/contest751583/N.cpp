#include <bits/stdc++.h>
using namespace std;

bool is_uppercase_l(const char c) {
  return 'A' <= c and c <= 'Z';
}

bool is_digit(const char c) {
  return '0' <= c and c <= '9';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    bool Yes = true;

    if(!is_uppercase_l(s.front())){
        Yes = false;
    }

    if(!is_uppercase_l(s.back())){
        Yes =false;
    }

    if(size(s) != 8){
        Yes =false;
    }

    for(int i = 1; i<7; i++){
        if(!is_digit(s[i])){
            Yes =false;
        }
    }

    if(s[1]== '0'){
        Yes = false;
    }
    
    
    cout << (Yes ? "Yes" : "No") << '\n';
    return 0;
}