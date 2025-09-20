#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> v;



int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin>>v[i];
    }

    for (auto i : v) {
        cout<<i<<" ";
    }
}
