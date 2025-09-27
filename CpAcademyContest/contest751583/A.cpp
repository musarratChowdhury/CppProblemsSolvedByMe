//
// Created by muhit on 9/27/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> sL;

    while (N>0) {
        string s;
        cin >>s;
        sL.push_back(s);
        N--;
    }

    for (int i = sL.size()-1; i>=0 ; i--) {
        cout << sL[i] << '\n';
    }
}