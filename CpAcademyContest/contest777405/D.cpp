//
// Created by muhit on 1/23/2026.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);

    for (int i = 0; i<N;i++) {
        cin >> arr[i];
    }

    for (int x : arr) {
        if (x%K == 0) cout << x/K << " ";
    }
}