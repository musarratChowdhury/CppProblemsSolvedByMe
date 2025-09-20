//
// Created by muhit on 19/9/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<char> dstring;
    dstring.push_back('L');
    dstring.push_back('o');

    //some kind of loo
    for (int i = 1; i<N; i++) {
        dstring.push_back('o');
    }

    dstring.push_back('n');
    dstring.push_back('g');
    string str(dstring.begin(), dstring.end());
    cout << str << endl;
}