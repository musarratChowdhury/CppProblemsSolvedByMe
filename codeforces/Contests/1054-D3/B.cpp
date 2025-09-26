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

        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int maxDiff = 0;
        for (int j=1; j<N; j+=2) {
            int diff = 0;
            diff =abs( arr[j] - arr[j-1]);
            if (diff > maxDiff) maxDiff = diff;
        }

        cout << maxDiff << endl;
        T--;
    }
}