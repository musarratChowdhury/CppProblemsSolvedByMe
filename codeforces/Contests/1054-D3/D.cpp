//
// Created by muhit on 9/27/25.
//
#include <bits/stdc++.h>
using namespace std;

// Using std::swap instead of custom function

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 4;
    char s2[] = "abab";

    for (int i = 0; i < N; i++) {
        cout << s2[i] << endl;
    }

    for (int j = 1; j < N; j+=2) {
        std::swap(s2[j-1], s2[j]);
    }

    cout << "After swaps: ";
    for (int i = 0; i < N; i++) {
        cout << s2[i];
    }
    cout << endl;

    //how to find out that it is a continuous block or not
    return 0;
}