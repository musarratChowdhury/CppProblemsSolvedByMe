// Created by muhit (fixed)
// Make MEX equal to k - corrected solution

#include <bits/stdc++.h>
using namespace std;

int give_me_mex(vector<int> const &A) {
    set<int> B(A.begin(), A.end());

    int result = 0;
    while (B.count(result)) {
        ++result;
    }
    //time complexity is O (N log N)

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<char> present(n + 2, 0); // present[x] = 1 if x appears (we only need 0..n)
        int countK = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] <= n) present[a[i]] = 1;
            if (a[i] == k) ++countK;
        }

        int missing = 0; // how many numbers in [0..k-1] are missing
        for (int x = 0; x < k; ++x) {
            if (!present[x]) ++missing;
        }

        cout << max(missing, countK) << '\n';
    }
    return 0;
}
