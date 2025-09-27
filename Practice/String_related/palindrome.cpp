//
// Created by muhit on 9/27/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Madam";

    string t;

    for (int i = s.size()-1; i >=0 ; i--) {
        t+=s[i];
    }

    if (s==t) {
        cout << "p" << '\n';
    }else {
        cout << "n" << '\n';
    }

}