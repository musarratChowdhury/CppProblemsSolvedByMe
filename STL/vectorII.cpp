//
// Created by muhit on 9/20/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;

    cin >> n >> q;
    vector<int> v[n];
    int arr[2];
    int arr2[2][3];
    vector<int> arr3;

    for (int i = 0;i < q; i++) {
        int tp;
        cin >> tp;

        if (tp == 0) {
            int t, x;
            cin >> t >> x;
            v[t].push_back(x);
        }else if (tp == 1) {
            int t;
            cin >> t;
            for (int j =0; j<v[t].size(); j++) {
                if (j != v[t].size()-1) cout << v[t][j] << " ";
                else cout << v[t][j];
            }
            cout << '\n';
        }else {
            int t;
            cin >> t;
            v[t].clear();
        }
    }
}