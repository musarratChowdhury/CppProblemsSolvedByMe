#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n; //size of the array;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int q;
    cin >> q;


    for (int i = 1; i < n; i++) {
        v[i] = v[i - 1] + v[i];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        if (l <= 0) {
            cout << v[r] << endl;
        } else
            cout << v[r] - v[l - 1] << endl;
    }
}
