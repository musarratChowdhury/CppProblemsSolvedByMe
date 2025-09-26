//
// Created by muhit on 19/9/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T>0) {
        int N, X;
        cin >> N >> X;

        int res = 0;
        vector<int> ages(N);

        while (N>0) {
            int i;
            cin >> i;
            if (i>=X) {
                res++;
            }
            N--;
        }

        cout << res << endl;

        T--;
    }
}