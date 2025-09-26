//
// Created by muhit on 9/25/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T>0) {
        int N;
        cin >> N;

        // vector<int> v(N);
        int negCounter = 0;
        int res = 0;
        for (int i = 0; i<N; i++) {
            int x;
            cin >> x;

            if (x == 0) res++;
            if (x == -1) negCounter++;
        }

        if (negCounter%2!=0) {
            res+=2;
        }

        cout << res << endl;

        T--;
    }
}