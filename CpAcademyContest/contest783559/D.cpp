//
// Created by muhit on 1/27/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string _last3digs = s.substr(3, 3);

    vector<int> arr (348);

    for (int i = 1; i<350; i++) {
        if (i == 316) {
            continue;
        }

        arr.push_back(i);
    }
}