//
// Created by muhit on 1/23/2026.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = k;

    unordered_set<int> track;
    int L=0, R = 0;

    int number_of_subarr = 0;

    for (R = 0; R< n; R++) {
        track.insert(arr[R]);
        if (track.size()> max) {
            L++;
        }
    }
}